# AdferoModuleTemplate

This module serves as a base template from which all Adfero custom modules may be based upon. It declares common module components such as CSS and JS files, an administration page, custom PHP classes, and SimpleTest tests.

## Creating a Module from the Template

1. To create a new module using this one as a based, first download the source by either [cloning this repository](https://github.com/AdferoInteractive/AdferoModuleTemplate.git) or [downloading the code](https://github.com/AdferoInteractive/AdferoModuleTemplate/archive/master.zip) as a zip file.
2. Once the module downloads, choose a new name for the module such as _adfero_cool_feature_ and rename the downloaded folder to this name. (Please note that you should always prefix the name of the module with your organization's name. In this case, that is _adfero_.)
3. Now, rename all files and hooks within the module that were previously prefixed with _adfero_module_template_ to conform to Drupal's naming standards. The best way to do this for code is to use Sublime Text's _Find in Files_ command. (Ex. `function adfero_module_template_menu()` becomes `function adfero_cool_feature_menu()`.)
4. Next, rename the testcase and custom classes using the new name. (Ex. `AdferoModuleTemplateTest` becomes `AdferoCoolFeatureTest`.) Also rename the filenames for those classes as filenames and classnames must match.
5. Lastly, drop the new module code into your Drupal installation and enabled it.