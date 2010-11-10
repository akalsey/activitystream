<?php
 class activitystream_handler_filter_source extends views_handler_filter_in_operator {
   function get_value_options() {
      if (isset($this->value_options)) {
         return;
      }
      $this->value_options = array();
      foreach (module_implements('activitystream_settings') as $name) {
        $this->value_options[$name] = $name;
      }
  }
}
?>