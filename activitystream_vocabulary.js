function activitystream_vocabulary_check_new(oDom) {
  if ('add' == oDom.options[oDom.selectedIndex].value) {
    location.href='/?q=admin/content/taxonomy/add/vocabulary';
  }
}