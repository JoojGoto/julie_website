<?php

/**
 * Implements hook_node_presave()
 */
function gp_global_node_presave($node) {
  
  /* We want to enforce users without the "Publish content" permission not being able to publish content */
  if(!user_access('publish_content')){    
    $node->status = 0;
  }

}
