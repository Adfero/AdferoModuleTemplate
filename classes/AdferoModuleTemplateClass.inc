<?php

class AdferoModuleTemplateClass {
  private $variable_a;

  public function __construct() {
    $this->variable_a = 'preloaded';
  }

  public function setVariableA($variable_a) {
    $this->variable_a = $variable_a;
  }

  public function getVariableA() {
    return $this->variable_a;
  }

}