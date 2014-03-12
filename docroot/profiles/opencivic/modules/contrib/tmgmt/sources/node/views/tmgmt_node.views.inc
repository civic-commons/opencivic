<?php

/**
 * @file
 * Please supply a file description.
 */

class TMGMTNodeSourceViewsController extends TMGMTDefaultSourceViewsController {

  /**
   * {@inheritdoc}
   */
  public function views_data() {
    // Relationships between job items and nodes.
    $data['tmgmt_job_item']['job_item_to_node'] = array(
      'title' => t('Content'),
      'help' => t('Content that is associated with this job item.'),
      'real field' => 'item_id',
      'relationship' => array(
        'label' => t('Content'),
        'base' => 'node',
        'base field' => 'vid',
        'relationship field' => 'item_id',
        'extra' => array(
          array(
            'table' => 'tmgmt_job_item',
            'field' => 'item_type',
            'operator' => '=',
            'value' => 'node',
          ),
          array(
            'table' => 'tmgmt_job_item',
            'field' => 'plugin',
            'operator' => '=',
            'value' => 'node',
          ),
        ),
      ),
    );
    $data['node']['node_to_job_item'] = array(
      'title' => t('Translation job item'),
      'help' => t('Job items of this node.'),
      'relationship' => array(
        'real field' => 'vid',
        'label' => t('Translation job item'),
        'base' => 'tmgmt_job_item',
        'base field' => 'item_id',
        'extra' => array(
          array(
            'field' => 'item_type',
            'operator' => '=',
            'value' => 'node',
          ),
          array(
            'field' => 'plugin',
            'operator' => '=',
            'value' => 'node',
          ),
        ),
      ),
    );
    $data['node']['tmgmt_translatable_types_all'] = array(
      'group' => t('Content translation'),
      'title' => t('All translatable types'),
      'help' => t('Enforces that only nodes from node types which are translatable are '),
      'filter' => array(
        'handler' => 'tmgmt_node_ui_handler_filter_node_translatable_types',
        'real field' => 'type',
      ),
    );
    $data['node']['tmgmt_jobs'] = array(
      'title' => t('Translation jobs'),
      'help' => t('Shows all translation jobs which contains this node'),
      'field' => array(
        'handler' => 'tmgmt_node_ui_handler_field_jobs',
        'real field' => 'nid',
      ),
    );
    $data['node']['tmgmt_job_item'] = array(
      'title' => t('Job item'),
      'real field' => 'vid',
      'relationship' => array(
        'title' => t('Translation job item'),
        'label' => t('Translation job item'),
        'base' => 'tmgmt_job_item',
        'base field' => 'item_id',
        'extra' => array(
          array(
            'field' => 'item_type',
            'operator' => '=',
            'value' => 'node',
          ),
          array(
            'field' => 'plugin',
            'operator' => '=',
            'value' => 'node',
          ),
        ),
      ),
    );
    $data['node']['translation_language_status'] = array(
      'group' => t('Content translation'),
      'title' => t('All translation languages'),
      'help' => t('Display all target lanuages.'),
      'real field' => 'tnid',
      'field' => array(
        'handler' => 'tmgmt_node_handler_field_translation_language_status',
      ),
    );
    $data['node']['translation_language_status_single'] = array(
      'title' => t('All translation languages (single)'),
      'help' => t("Don't use this in the user interface."),
      'field' => array(
        'handler' => 'tmgmt_node_handler_field_translation_language_status_single',
      ),
    );
    $data['node']['tmgmt_translatable_types_select'] = array(
      'group' => t('Content translation'),
      'title' => t('Select translatable content types'),
      'help' => t('Allows to filter on specific translatable types.'),
      'filter' => array(
        'handler' => 'views_handler_filter_in_operator',
        'real field' => 'type',
        'options callback' => 'tmgmt_source_translatable_item_types',
        'options arguments' => array($this->pluginType),
      ),
    );
    return $data;
  }

}
