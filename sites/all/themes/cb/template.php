<?php

function cb_field__body($variables) {
    $output = '';

    $path = drupal_get_path_alias();
    $match = "*aktivitet?*\n*aktivitet";
    if (drupal_match_path($path, $match)) {
        foreach ($variables['items'] as $delta => $item) {
                $output .= '<p class="' . $variables['field_name_css'] . '">';
                $output .= strip_tags($item['#markup'], '<p>');
            $output .= '</p>';
        }
        }
        else {
            // Render the label, if it's not hidden.
            if (!$variables['label_hidden']) {
                $output .= '<div class="field-label"' . $variables['title_attributes'] . '>' . $variables['label'] . ':&nbsp;</div>';
            }

            // Render the items.
            $output .= '<div class="field-items"' . $variables['content_attributes'] . '>';
            foreach ($variables['items'] as $delta => $item) {
                $classes = 'field-item ' . ($delta % 2 ? 'odd' : 'even');
                $output .= '<div class="' . $classes . '"' . $variables['item_attributes'][$delta] . '>' . drupal_render($item) . '</div>';
            }
            $output .= '</div>';

            // Render the top-level DIV.
            $output = '<div class="' . $variables['classes'] . '"' . $variables['attributes'] . '>' . $output . '</div>';
        }
 
    return $output;
}

function cb_preprocess_html(&$vars) {
  drupal_add_css('//maxcdn.bootstrapcdn.com/font-awesome/4.3.0/css/font-awesome.min.css', array(
    'type' => 'external'
  ));
}
function cb_preprocess_page(&$vars) {
    $view = views_get_view('search_api_nodes');
    $display_id = 'search-api-nodes-default';
    $view->set_display($display_id);
    $view->init_handlers();
    $form_state = array(
      'view' => $view,
      'display' => $view->display_handler->display,
      'exposed_form_plugin' => $view->display_handler->get_plugin('exposed_form'),
      'method' => 'get',
      'rerender' => TRUE,
    );
    $form = drupal_build_form('views_exposed_form', $form_state);
    unset($form['sort_by']);
    unset($form['sort_order']);
    unset($form['resets']);
    $vars['search'] = drupal_render($form);
}
function cb_menu_link(array $variables) {
  $element = $variables['element'];
  $sub_menu = '';

  if ($element['#below']) {
    $sub_menu = drupal_render($element['#below']);
  }

  // Class attributes by menu_attributes
  if (isset($element['#localized_options']['attributes']['class'])) {
    $array_class = $element['#localized_options']['attributes']['class'];
    foreach ($array_class as $i => $class) {
      if (substr($class, 0, 5) == 'icon-') {
        // Don't put the class on the <a> tag!
        unset($element['#localized_options']['attributes']['class'][$i]);
        // It should go on a <i> tag (FontAwesome)!
        $icon = '<i class="' . $class . '"></i>';
      }
    }
  }
  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  if (!empty($icon)) {
    // Insert the icons (<i> tags) into the <a> tag.
    $output = substr_replace($output, $icon, -4, 0);
  }

  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}

/**
 * @file
 * Centralbibliotek.dk template.php.
 */

/**
 * Overrides theme_field__addressfield().
 *
 * A slightly modified version of commons_origins_field__addressfield(). We
 * modified it because the original didn't work with Danish address formats.
 *
 * @see commons_origins_field__addressfield()
 */
function cb_field__addressfield($variables) {
  $output = '';

  // Add Microformat classes to each address.
  foreach ($variables['items'] as &$address) {
    // Only display an address if it has been populated. We determine this by
    // validating that the locality has been populated.
    if (!empty($address['#address']['locality'])) {
      _commons_origins_format_address($address);
    }
    else {
      // Deny access to incomplete addresses.
      $address['#access'] = FALSE;
    }
  }

  // Render the label, if it's not hidden.
  if (!$variables['label_hidden']) {
    $output .= '<div class="field-label"' . $variables['title_attributes'] . '>' . $variables['label'] . ':</div> ';
  }

  // Render the items.
  $output .= '<div class="field-items"' . $variables['content_attributes'] . '>';
  foreach ($variables['items'] as $delta => $item) {
    $classes = 'field-item ' . ($delta % 2 ? 'odd' : 'even');
    $output .= '<div class="' . $classes . '"' . $variables['item_attributes'][$delta] . '>' . drupal_render($item) . '</div>';
  }
  $output .= '</div>';

  // Render the top-level DIV.
  $output = '<div class="' . $variables['classes'] . '"' . $variables['attributes'] . '>' . $output . '</div>';

  return $output;
}

/**
 * Render lecturer field as name and mail address.
 */
function cb_field__field_lecturer($variables) {
  return _cb_field_render_double_field_as_mailto_link($variables);
}

/**
 * Render contact field as name and mail address.
 */
function cb_field__field_contact($variables) {
  return _cb_field_render_double_field_as_mailto_link($variables);
}

/**
 * Render contact field as name and mail address.
 */
function cb_field__field_ansvarlig_for_dagen($variables) {
  return _cb_field_render_double_field_as_mailto_link($variables);
}

/**
 * Overrides theme_field__field_number_of_attendees().
 *
 * Special rendering if value is zero.
 */
function cb_field__field_number_of_attendees($variables) {
  if ($variables['element']['#items'][0]['value'] == '0') {
    return 'Ubegrænset';
  }
  return $variables['element']['#items'][0]['value'];
}

/**
 * Helper to render a double field as name and mail address.
 */
function _cb_field_render_double_field_as_mailto_link($variables) {
  $items[] = array();
  foreach ($variables['items'] as $delta => $item) {
    if (!empty($item['#item']['second'])) {
      $items[$delta] = '<a title="' . $item['#item']['second'] . '" href="mailto:' . $item['#item']['second'] . '">' . reset(explode(':',$item['#item']['first'])) . '</a>';
    }
    else {
      $items[$delta] = $item['#item']['first'];
    }
  }
  return implode(' / ', $items);
}

/**
 * Implements hook_form_alter().
 */
function cb_form_alter(&$form, &$form_state, $form_id) {
  switch($form_id) {
    case "edit_profile_user_profile_form":
      $form["group_group"]["#type"] = "hidden";
      $form["group_group"]["#value"] = $form["group_group"]["#default_value"];
      break;
  }
}