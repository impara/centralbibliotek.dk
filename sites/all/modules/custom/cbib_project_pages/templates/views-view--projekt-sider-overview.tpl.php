<?php

?>

<?php
foreach($view->result as $item) {
$node = node_load($item->nid);    
?>
<a title="<?php echo $node->title ?>" href="/<?php echo drupal_get_path_alias("node/".$node->nid) ?> " class="project_page_view_block_link" target="_blank">
<div class="project_page_view_block_wrap">
<div class="project_page_view_block_logo">

</div>
<div class="project_page_view_block_title">
<h2><b><?php echo $node->title; ?></b><h2>
</div>
<div class="project_page_view_block_descrip">
<?php echo render(field_view_field('node', $node, 'body','teaser')); ?>
</div>
</div>
</a>
<?php } ?>
