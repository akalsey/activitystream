<?php
// $Id: feedapi_handler_feedapi_title_url.inc,v 1.1.2.1 2008/10/01 19:14:13 aronnovak Exp $

/**
 * Field handler to provide title links to drupal nodes
 *
 * @ingroup views_field_handlers
 */
class activitystream_handler_activitystream_icon extends views_handler_field {
  
  function render($values) {
    return theme($values->activitystream_module .'_icon');
  }

}
