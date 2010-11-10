<?php
// function _activitystream_views_default_views() {
//   $view = new stdClass();
//   $view->name = 'activity_stream_delicious';
//   $view->description = t('Displays the activity stream for Delicious only.');
//   $view->access = array();
//   $view->view_args_php = '';
//   $view->page = TRUE;
//   $view->page_title = 'Delicious Activity';
//   $view->page_header = '';
//   $view->page_header_format = '1';
//   $view->page_footer = '';
//   $view->page_footer_format = '1';
//   $view->page_empty = '';
//   $view->page_empty_format = '1';
//   $view->page_type = 'activitystream';
//   $view->url = 'users/$arg/delicious';
//   $view->use_pager = FALSE;
//   $view->nodes_per_page = '50';
//   $view->sort = array (
//   );
//   $view->argument = array (
//     array (
//       'type' => 'uid',
//       'argdefault' => '1',
//       'title' => '',
//       'options' => '',
//       'wildcard' => '',
//       'wildcard_substitution' => '',
//     ),
//   );
//   $view->field = array (
//   );
//   $view->filter = array (
//     array (
//       'tablename' => 'node',
//       'field' => 'status',
//       'operator' => '=',
//       'options' => '',
//       'value' => '1',
//     ),
//     array (
//       'tablename' => 'node',
//       'field' => 'type',
//       'operator' => 'OR',
//       'options' => '',
//       'value' => array (
//         0 => 'activitystream',
//       ),
//     ),
//     array (
//       'tablename' => 'activitystream',
//       'field' => 'module',
//       'operator' => 'OR',
//       'options' => '',
//       'value' => array (
//         0 => 'activitystream_delicious',
//       ),
//     ),
//   );
//   $view->exposed_filter = array();
//   $view->requires = array('node', 'activitystream');
//   $views[$view->name] = $view;
// 
//   $view = new stdClass();
//   $view->name = 'activity_stream_digg';
//   $view->description = t('Displays the activity stream for Digg only.');
//   $view->access = array();
//   $view->view_args_php = '';
//   $view->page = TRUE;
//   $view->page_title = 'Digg Activity';
//   $view->page_header = '';
//   $view->page_header_format = '1';
//   $view->page_footer = '';
//   $view->page_footer_format = '1';
//   $view->page_empty = '';
//   $view->page_empty_format = '1';
//   $view->page_type = 'activitystream';
//   $view->url = 'users/$arg/digg';
//   $view->use_pager = TRUE;
//   $view->nodes_per_page = '50';
//   $view->sort = array();
//   $view->argument = array (
//     array (
//       'type' => 'uid',
//       'argdefault' => '1',
//       'title' => '',
//       'options' => '',
//       'wildcard' => '',
//       'wildcard_substitution' => '',
//     ),
//   );
//   $view->field = array (
//   );
//   $view->filter = array (
//     array (
//       'tablename' => 'node',
//       'field' => 'status',
//       'operator' => '=',
//       'options' => '',
//       'value' => '1',
//     ),
//     array (
//       'tablename' => 'node',
//       'field' => 'type',
//       'operator' => 'OR',
//       'options' => '',
//       'value' => array (
//         0 => 'activitystream',
//       ),
//     ),
//     array (
//       'tablename' => 'activitystream',
//       'field' => 'module',
//       'operator' => 'OR',
//       'options' => '',
//       'value' => array (
//         0 => 'activitystream_digg',
//       ),
//     ),
//   );
//   $view->exposed_filter = array();
//   $view->requires = array('node', 'activitystream');
//   $views[$view->name] = $view;
// 
//   $view = new stdClass();
//   $view->name = 'activity_stream_twitter';
//   $view->description = t('Displays the activity stream for Twitter only.');
//   $view->access = array();
//   $view->view_args_php = '';
//   $view->page = TRUE;
//   $view->page_title = 'Twitter Activity';
//   $view->page_header = '';
//   $view->page_header_format = '1';
//   $view->page_footer = '';
//   $view->page_footer_format = '1';
//   $view->page_empty = '';
//   $view->page_empty_format = '1';
//   $view->page_type = 'activitystream';
//   $view->url = 'users/$arg/twitter';
//   $view->use_pager = TRUE;
//   $view->nodes_per_page = '50';
//   $view->sort = array();
//   $view->argument = array (
//     array (
//       'type' => 'uid',
//       'argdefault' => '1',
//       'title' => '',
//       'options' => '',
//       'wildcard' => '',
//       'wildcard_substitution' => '',
//     ),
//   );
//   $view->field = array (
//     array (
//       'tablename' => 'node',
//       'field' => 'title',
//       'label' => '',
//       'handler' => 'views_handler_field_nodelink',
//       'options' => 'link',
//     ),
//     array (
//       'tablename' => 'node',
//       'field' => 'created',
//       'label' => '',
//       'handler' => 'views_handler_field_since',
//     ),
//     array (
//       'tablename' => 'activitystream',
//       'field' => 'data',
//       'label' => '',
//       'handler' => 'activitystream_views_handler_field_feed_icon',
//     ),
//   );
//   $view->filter = array (
//     array (
//       'tablename' => 'node',
//       'field' => 'status',
//       'operator' => '=',
//       'options' => '',
//       'value' => '1',
//     ),
//     array (
//       'tablename' => 'node',
//       'field' => 'type',
//       'operator' => 'OR',
//       'options' => '',
//       'value' => array (
//         0 => 'activitystream',
//       ),
//     ),
//     array (
//       'tablename' => 'activitystream',
//       'field' => 'module',
//       'operator' => 'OR',
//       'options' => '',
//       'value' => array (
//         0 => 'activitystream_twitter',
//       ),
//     ),
//   );
//   $view->exposed_filter = array();
//   $view->requires = array('node', 'activitystream');
//   $views[$view->name] = $view;
// 
//   return $views;
// }

function activitystream_views_data() {
  $data['activitystream']['table']['group'] = t('Activity Stream');
  
  // Define the join
  $data['activitystream']['table']['join']['node'] = array(
    'left_field' => 'nid',
    'field' => 'nid',
  );
  
  $data['activitystream']['module'] = array(
    'title' => t('Source'),
    'help'  => t('The name of the Activity Stream plugin that provides the data. Usually the name of the site the data came from'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'activitystream_handler_filter_source',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  $data['activitystream']['link'] = array(
    'title' => t('Link'),
    'help'  => t('The link to the original activity. Usually the originating site (Flickr, Twitter, etc).'),
    'field' => array(
      'handler' => 'views_handler_field_url',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
  );
  
  $data['activitystream']['icon'] = array(
    'title' => t('Icon'),
    'real field' => 'module',
    'help'  => t('The icon from the Activity Stream source'),
    'field' => array(
      'handler' => 'activitystream_handler_activitystream_icon',
    ),
  );
  
  return $data;
}

function activitystream_views_handlers() {
  return array(
    'info' => array(
      'path' => drupal_get_path('module', 'activitystream') . '/views',
    ),
    'handlers' => array(

      // field handlers
      'activitystream_handler_activitystream_icon' => array(
        'parent' => 'views_handler_field',
      ),
    ),
  );
}