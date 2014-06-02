<?php


class UserMigration extends DrupalUser7Migration {
  public function __construct(array $arguments) {
    parent::__construct($arguments);

    $this->addFieldMapping('roles', 'roles')
      ->sourceMigration('role');
  }
}

// class NewsTermsMigration extends DrupalTerm7Migration {
//   public function __construct(array $arguments) {
//     parent::__construct($arguments);

//     $this->addFieldMapping('path', 'path')
//       ->callbacks(array($this, 'checkPath'));
//   }

//   protected function checkPath($value) {
//     // drush_print($value);
//     $value = preg_replace('#category/news/#', 'taxonomy/ol_tags/', $value);
//     // drush_print($value);
//     return $value;
//   }
// }

class ApplicationsMigration extends DrupalNode7Migration {
  public function __construct(array $arguments) {
    // Add any other data we're pulling into the source row, before the parent
    // constructor.
    // $this->sourceFields['f.field_audio_description'] = 'field_audio_description';
    // $this->sourceFields['News'] = 'Summary string from D6';

    parent::__construct($arguments);

    // $this->addUnmigratedSources(array('field_audio_description'), t('Do Not Migrate'));

    $this->addFieldMapping('field_oc_app_app_category', 'field_application_category')
        ->sourceMigration('app_function_terms');
    $this->addFieldMapping('field_oc_app_contributor', 'field_contributor');
    $this->addFieldMapping('field_oc_app_creator', 'field_creator');
    $this->addFieldMapping('field_oc_app_description', 'field_description');
    $this->addFieldMapping('field_oc_app_download_url', 'field_download_url');
    $this->addFieldMapping('field_oc_app_feature_list', 'field_feature_list');
    $this->addFieldMapping('field_oc_app_file_attachments', 'field_file_attachments');
    $this->addFieldMapping('field_oc_app_install_url', 'field_install_url');
    $this->addFieldMapping('field_oc_app_keywords', 'field_keywords');
    $this->addFieldMapping('field_oc_app_license', 'field_license')
        ->sourceMigration('software_license_terms');
    $this->addFieldMapping('field_oc_app_logo', 'field_logo');
    $this->addFieldMapping('field_oc_app_related_apps', 'field_related_apps');
    $this->addFieldMapping('field_oc_app_requirements', 'field_requirements');
    $this->addFieldMapping('field_oc_app_screenshot', 'field_screenshot');
    $this->addFieldMapping('field_oc_app_software_type', 'field_software_type')
        ->sourceMigration('software_type_terms');
    $this->addFieldMapping('field_oc_app_url', 'field_url');
    $this->addFieldMapping('field_oc_app_video', 'field_video');

    $this->addFieldMapping('body:format')
      ->defaultValue('panopoly_wysiwyg_text');
    // $this->addFieldMapping('field_ol_tags', 8)
    //      ->sourceMigration('News_terms')
    //      ->arguments(array('source_type' => 'tid'));
  }
}

class DeploymentsMigration extends DrupalNode7Migration {
  public function __construct(array $arguments) {
    // $this->sourceFields['News'] = 'Summary string from D6';

    parent::__construct($arguments);

    $this->addFieldMapping('field_oc_deploy_oc_deployment_of', 'field_deployment_of');
    $this->addFieldMapping('field_oc_deploy_coordinates', 'field_oc_deploy_coordinates');
    $this->addFieldMapping('field_oc_deploy_location', 'field_oc_deploy_location');
    $this->addFieldMapping('field_oc_deploy_member', 'field_oc_deploy_member');
    $this->addFieldMapping('field_oc_deploy_url', 'field_oc_deploy_url');

    $this->addFieldMapping('body:format')
      ->defaultValue('panopoly_wysiwyg_text');

    // $this->addFieldMapping('field_ol_details', 'body');
    // $this->addFieldMapping('field_ol_details:format')
    //   ->defaultValue('panopoly_wysiwyg_text');
    // $this->addFieldMapping('field_ol_group_campaign')
    //   ->defaultValue('1');
    // $this->addFieldMapping('field_ol_tags', 8)
    //      ->sourceMigration('News_terms')
    //      ->arguments(array('source_type' => 'tid'));
  }
}

class OrganizationsMigration extends DrupalNode7Migration {
  public function __construct(array $arguments) {
    parent::__construct($arguments);

    $this->addFieldMapping('field_oc_org_abbreviation', 'field_abbreviation');
    $this->addFieldMapping('field_oc_org_additional_type', 'field_additional_type')
        ->sourceMigration('organization_type_terms');
    $this->addFieldMapping('field_oc_org_address', 'field_address');
    $this->addFieldMapping('field_oc_org_coordinates', 'field_coordinates');
    $this->addFieldMapping('field_oc_org_email', 'field_email');
    $this->addFieldMapping('field_oc_org_logo', 'field_oc_org_logo');
    $this->addFieldMapping('field_oc_org_member', 'field_oc_org_member');
    $this->addFieldMapping('field_oc_org_services', 'field_oc_org_services');
    $this->addFieldMapping('field_oc_org_telephone', 'field_oc_org_telephone');
    $this->addFieldMapping('field_oc_org_twitter', 'field_oc_org_twitter');
    $this->addFieldMapping('field_oc_org_url', 'field_oc_org_url');

    $this->addFieldMapping('body:format')
      ->defaultValue('panopoly_wysiwyg_text');
}

