<?php
/**
 * @file
 * appcat_misc_taxonomy_app_terms.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function appcat_misc_taxonomy_app_terms_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Accounting',
    'description' => NULL,
    'format' => NULL,
    'weight' => '1',
    'uuid' => '014d59f5-fd03-41ce-a060-3c5adab5127f',
    'vocabulary_machine_name' => 'application_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'f7365ae9-b9c0-4978-87ad-89a04f2fdd17',
    ),
  );
  $terms[] = array(
    'name' => 'Case Management',
    'description' => NULL,
    'format' => NULL,
    'weight' => '4',
    'uuid' => '0687fef8-e7c9-441d-9b70-4d8714af0845',
    'vocabulary_machine_name' => 'application_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'f7365ae9-b9c0-4978-87ad-89a04f2fdd17',
    ),
  );
  $terms[] = array(
    'name' => 'Scheduling',
    'description' => NULL,
    'format' => NULL,
    'weight' => '12',
    'uuid' => '1019dcf3-1147-4891-a15d-2fb655c61aa3',
    'vocabulary_machine_name' => 'application_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'f7365ae9-b9c0-4978-87ad-89a04f2fdd17',
    ),
  );
  $terms[] = array(
    'name' => 'Administration',
    'description' => NULL,
    'format' => NULL,
    'weight' => '2',
    'uuid' => '1cd3b0bf-290c-4eff-a286-f84c2cf295e5',
    'vocabulary_machine_name' => 'application_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'f7365ae9-b9c0-4978-87ad-89a04f2fdd17',
    ),
  );
  $terms[] = array(
    'name' => 'Data aggregation',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '5',
    'uuid' => '34cf95ee-3329-ef34-113f-10f7c556ddcb',
    'vocabulary_machine_name' => 'application_category',
    'field_icon' => array(
      'und' => array(
        0 => array(
          'fid' => NULL,
          'alt' => '',
          'title' => '',
          'width' => '100',
          'height' => '100',
          'uid' => '1',
          'filename' => 'data-aggregation.png',
          'uri' => 'public://application_category/icons/data-aggregation.png',
          'filemime' => 'image/png',
          'filesize' => '5540',
          'status' => '1',
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => 'c4689b2a-efae-4580-bfd6-34beaab1a31d',
          'rdf_mapping' => array(),
          'uuid_features_file_data' => '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',
        ),
      ),
    ),
    'field_small_icon' => array(
      'und' => array(
        0 => array(
          'fid' => NULL,
          'alt' => '',
          'title' => '',
          'width' => '24',
          'height' => '24',
          'uid' => '1',
          'filename' => 'data-aggregation-sm.png',
          'uri' => 'public://data-aggregation-sm.png',
          'filemime' => 'image/png',
          'filesize' => '1813',
          'status' => '1',
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => '79e8ba14-0227-4c54-a266-b8364a8f07aa',
          'rdf_mapping' => array(),
          'uuid_features_file_data' => 'iVBORw0KGgoAAAANSUhEUgAAABgAAAAYCAMAAADXqc3KAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAA2ZpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuMC1jMDYwIDYxLjEzNDc3NywgMjAxMC8wMi8xMi0xNzozMjowMCAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wTU09Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9tbS8iIHhtbG5zOnN0UmVmPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvc1R5cGUvUmVzb3VyY2VSZWYjIiB4bWxuczp4bXA9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC8iIHhtcE1NOk9yaWdpbmFsRG9jdW1lbnRJRD0ieG1wLmRpZDowMTgwMTE3NDA3MjA2ODExOEY2MkQwNjEwQzgxMTU4RiIgeG1wTU06RG9jdW1lbnRJRD0ieG1wLmRpZDpEMEI0RkNFQjJFMkMxMUUyODdENUYxQzQ1NEExRjMyOSIgeG1wTU06SW5zdGFuY2VJRD0ieG1wLmlpZDpEMEI0RkNFQTJFMkMxMUUyODdENUYxQzQ1NEExRjMyOSIgeG1wOkNyZWF0b3JUb29sPSJBZG9iZSBQaG90b3Nob3AgQ1M1IE1hY2ludG9zaCI+IDx4bXBNTTpEZXJpdmVkRnJvbSBzdFJlZjppbnN0YW5jZUlEPSJ4bXAuaWlkOjAyODAxMTc0MDcyMDY4MTE4RjYyRDA2MTBDODExNThGIiBzdFJlZjpkb2N1bWVudElEPSJ4bXAuZGlkOjAxODAxMTc0MDcyMDY4MTE4RjYyRDA2MTBDODExNThGIi8+IDwvcmRmOkRlc2NyaXB0aW9uPiA8L3JkZjpSREY+IDwveDp4bXBtZXRhPiA8P3hwYWNrZXQgZW5kPSJyIj8+BNS92wAAAYlQTFRF8Vod//7+/urc+b+v8V8m+rGB//z7//79+q57+q15+q589olV+q599YZj+9TJ8Vwi+rSH+rSF8VMQ+rSG//v5+q9/9phs9YdS9oxZ/vTu//r4/urd+rGC//38+rB/9YNL///+9o1s+rCB+8av8mc0/ujY/Myu9YVh8Vsi95xz/Mqr9oZR8mAq9o5d9otX/vTw/Obc/djC+8Ca+8io8VYZ+9TI/NjK//n3+7uS+qx5/NG2824/9YJe/u/q9HxU9YNM9pht+7uT945c/dS69Ydj+q9++7mO95Fh+8m0+rSI+byq+7WJ+7+a+qdx+KJ79YZR+byr8Vkc/dnD9ohU+7qQ8mQu83JG/vby9pZ4+8Wj//z58mMu96aN/vHp/vTy956D+7yU/dS79pJj8Vkd9o1b+q17/Mmp+8ak/vHo/ezh+r6s/eDO+rKC8Vga9pZo/d7L+7WI95lt//3795Bg/Myv+b2r/M+09pJy9pRl+sm1+qx4//n4+7qP8mQw+q168mUx+rKD////////Mc2ncgAAAIN0Uk5T/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////wAih6mgAAABIUlEQVR42pTSZVPDQBAG4JTSeGrUhRZ3dy3u7u7u7uRu88uhuSNNYZiB9+szO7u3e4z2S5g/wat94yfcnG5z9+78nIZ0sLQ6hfEC6/RqsWMNTBBqbsnFaoaVQWi+fhMM4N54jCmg9/MTA0oFnAJU3sZSOJIjZkC7IxQeVJwGjkcC0J1NIDzlzkyGWYjrEHXaaIW9s6hPUZT2JdBhJYvAfs1ntSWZOIEoBRs+1oZ6rn2+rosSVu8xR3pgryvY9BSTJKlskNOnuiNTYdw/6lnc8QcC/gnQISyeUZEHuI6K2b1YHnkHLH+VYH4Lqisnb0N0JeywbMiY1ph4Nra7fqVGyGQvtaBVQeoebJ1XFUVecPXC9wsGZw4OCy89//wM5nwIMAA3HONUQ6F8PgAAAABJRU5ErkJggg==',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Games',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '10',
    'uuid' => '3ef61d92-9025-59e4-71e8-14a426324365',
    'vocabulary_machine_name' => 'application_category',
    'field_icon' => array(
      'und' => array(
        0 => array(
          'fid' => NULL,
          'alt' => '',
          'title' => '',
          'width' => '100',
          'height' => '100',
          'uid' => '1',
          'filename' => 'games.png',
          'uri' => 'public://application_category/icons/games.png',
          'filemime' => 'image/png',
          'filesize' => '5059',
          'status' => '1',
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => 'aaff5ad9-cc27-4734-93a2-7c09bad688b3',
          'rdf_mapping' => array(),
          'uuid_features_file_data' => 'iVBORw0KGgoAAAANSUhEUgAAAGQAAABkCAIAAAD/gAIDAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAyJpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuMy1jMDExIDY2LjE0NTY2MSwgMjAxMi8wMi8wNi0xNDo1NjoyNyAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvIiB4bWxuczp4bXBNTT0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL21tLyIgeG1sbnM6c3RSZWY9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9zVHlwZS9SZXNvdXJjZVJlZiMiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENTNiAoV2luZG93cykiIHhtcE1NOkluc3RhbmNlSUQ9InhtcC5paWQ6NzdFNDYwNTMzMjVBMTFFMkFFRUY5NDQ5RENDMTZCNkMiIHhtcE1NOkRvY3VtZW50SUQ9InhtcC5kaWQ6NzdFNDYwNTQzMjVBMTFFMkFFRUY5NDQ5RENDMTZCNkMiPiA8eG1wTU06RGVyaXZlZEZyb20gc3RSZWY6aW5zdGFuY2VJRD0ieG1wLmlpZDo3N0U0NjA1MTMyNUExMUUyQUVFRjk0NDlEQ0MxNkI2QyIgc3RSZWY6ZG9jdW1lbnRJRD0ieG1wLmRpZDo3N0U0NjA1MjMyNUExMUUyQUVFRjk0NDlEQ0MxNkI2QyIvPiA8L3JkZjpEZXNjcmlwdGlvbj4gPC9yZGY6UkRGPiA8L3g6eG1wbWV0YT4gPD94cGFja2V0IGVuZD0iciI/PsL172YAABA3SURBVHja7Ft7bFzV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',
        ),
      ),
    ),
    'field_small_icon' => array(
      'und' => array(
        0 => array(
          'fid' => NULL,
          'alt' => '',
          'title' => '',
          'width' => '24',
          'height' => '24',
          'uid' => '1',
          'filename' => 'games-sm.png',
          'uri' => 'public://games-sm.png',
          'filemime' => 'image/png',
          'filesize' => '1919',
          'status' => '1',
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => 'e0eb4c37-48be-4619-a5f3-c5df42e7b997',
          'rdf_mapping' => array(),
          'uuid_features_file_data' => 'iVBORw0KGgoAAAANSUhEUgAAABgAAAAYCAMAAADXqc3KAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAyJpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuMC1jMDYwIDYxLjEzNDc3NywgMjAxMC8wMi8xMi0xNzozMjowMCAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvIiB4bWxuczp4bXBNTT0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL21tLyIgeG1sbnM6c3RSZWY9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9zVHlwZS9SZXNvdXJjZVJlZiMiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENTNSBNYWNpbnRvc2giIHhtcE1NOkluc3RhbmNlSUQ9InhtcC5paWQ6RDBCNEZDRTYyRTJDMTFFMjg3RDVGMUM0NTRBMUYzMjkiIHhtcE1NOkRvY3VtZW50SUQ9InhtcC5kaWQ6RDBCNEZDRTcyRTJDMTFFMjg3RDVGMUM0NTRBMUYzMjkiPiA8eG1wTU06RGVyaXZlZEZyb20gc3RSZWY6aW5zdGFuY2VJRD0ieG1wLmlpZDpEMEI0RkNFNDJFMkMxMUUyODdENUYxQzQ1NEExRjMyOSIgc3RSZWY6ZG9jdW1lbnRJRD0ieG1wLmRpZDpEMEI0RkNFNTJFMkMxMUUyODdENUYxQzQ1NEExRjMyOSIvPiA8L3JkZjpEZXNjcmlwdGlvbj4gPC9yZGY6UkRGPiA8L3g6eG1wbWV0YT4gPD94cGFja2V0IGVuZD0iciI/Pt4fcWgAAAHaUExURfaJVfaIU/WFT//8+/aGUPaLWPaHUvaLV/aKVvaMWvWGUPaKV/aGUfaFTvilfvaNWvaETvaFT/aJVP/+/fWDTfFXHvq7nfq5mveZbPeYavvKs/7s5P7u5v3g0/WBSfmsiPaHUficcfWETvaFUPaIUvrBpvaOXP3h1Pm1lfWETf728v3i1vWCTPzZyPzayfaDTPmrhfvJsvaPXvWDS/3o3v3g0vvRvPaIVPeXavq8nv/9/fipg/vNuPmykfaOW/7w6/ike/vLu/FgKvaDS/zVwvq7nPaKVfWCS/mvjfeTZPm0k/aMWPemiPrFq/3n3PmngfvEqvijevm0kvvKsvWCSvzWxPaQX/aHU/iogfvVw/aUZPFVHPimf/rGrPzh2PJlMfq3l/7q5PzZx/zg0/q+ofeVZvvEqf/6+PrApPzYzPmxj/aRYPN4S/WGUfeccPebb/eabfaJVv7t5vFcJfq6nPeZbfeRYPefdPeedfeYbPiiefeZa/rEqvzay/vHr/zXxfaOXf7r5fvPuvrAo/eOXPWDTPWBSvR9UvWGT/vUx/aBSvifdfeXafaPXfvUwfvQu/WFTvzSvvvNt/3czPFbI/rCr/aETfifdv3q4P3m2v/59/aMWf///////8Xl5EcAAACedFJOU/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////8APofj+AAAAWNJREFUeNqskVVPA1EQhefubrdulGKl0OJS3N3d3d3d3d3dmdv/yl0aQiDhjfMyM/kmGTng/EPwz8B3MbY02CJldGC0vijyC2zJS1Scu1pXde85TcK5o8BgF+DLCDkVjSAatFpSoW8RFO53n2A4XHPRVF2bDUpkAt04il6UAbreWEe7n9JDUY6oJOfzzuVn1Q4DOXLN69lCxyT1VCGSVp8M/0wPv3IGuhxXtNLc89h3wyFqN+mlMNLvWKHg7FQFvY3lm09or4Ao292ItngfzoVEAD+hEFdNe3n0Qc1moFpzHal3Q64QrCKiMJOcdIAgLYUyANYQ4AE+BrZLCidwAIS4KRiRMWzTQVqA1KcsNoak2u3e8TbiusYLsjgp0TQ3RFCm97ZZrVQr2iHslkVhyffrq3yNQQJDEHeMsoIX/vvfNCxGrTfmAr/mF+hv+mHFYFDCVBQ4+X3rb5MSt0P/0/MPAQYALZ34pQXcbo4AAAAASUVORK5CYII=',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Budget',
    'description' => NULL,
    'format' => NULL,
    'weight' => '3',
    'uuid' => '4d2252dd-974c-4978-b25e-7f62fe06cbb0',
    'vocabulary_machine_name' => 'application_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'f7365ae9-b9c0-4978-87ad-89a04f2fdd17',
    ),
  );
  $terms[] = array(
    'name' => 'Statistics',
    'description' => NULL,
    'format' => NULL,
    'weight' => '3',
    'uuid' => '611a35a8-1dfc-4a18-9013-a182263e2184',
    'vocabulary_machine_name' => 'application_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => '34cf95ee-3329-ef34-113f-10f7c556ddcb',
    ),
  );
  $terms[] = array(
    'name' => 'Security and Confidentiality',
    'description' => NULL,
    'format' => NULL,
    'weight' => '13',
    'uuid' => '668cbb72-d539-4248-96fe-a3cccb0854ea',
    'vocabulary_machine_name' => 'application_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'f7365ae9-b9c0-4978-87ad-89a04f2fdd17',
    ),
  );
  $terms[] = array(
    'name' => 'Data Integration',
    'description' => NULL,
    'format' => NULL,
    'weight' => '1',
    'uuid' => '6c288527-43c7-4599-adc5-845c8c95271a',
    'vocabulary_machine_name' => 'application_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => '34cf95ee-3329-ef34-113f-10f7c556ddcb',
    ),
  );
  $terms[] = array(
    'name' => 'Research',
    'description' => NULL,
    'format' => NULL,
    'weight' => '10',
    'uuid' => '74da3a8d-4c00-4b78-8263-97a084269a81',
    'vocabulary_machine_name' => 'application_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'f7365ae9-b9c0-4978-87ad-89a04f2fdd17',
    ),
  );
  $terms[] = array(
    'name' => 'Crowdsourcing',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '3',
    'uuid' => '774a8201-1536-b444-4118-09363f0cd12d',
    'vocabulary_machine_name' => 'application_category',
    'field_icon' => array(
      'und' => array(
        0 => array(
          'fid' => NULL,
          'alt' => '',
          'title' => '',
          'width' => '100',
          'height' => '100',
          'uid' => '1',
          'filename' => 'crowdsourcing.png',
          'uri' => 'public://application_category/icons/crowdsourcing.png',
          'filemime' => 'image/png',
          'filesize' => '4740',
          'status' => '1',
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => 'ada83812-d630-ceb4-05f9-7013844277b1',
          'rdf_mapping' => array(),
          'uuid_features_file_data' => 'iVBORw0KGgoAAAANSUhEUgAAAGQAAABkCAIAAAD/gAIDAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAyJpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuMy1jMDExIDY2LjE0NTY2MSwgMjAxMi8wMi8wNi0xNDo1NjoyNyAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvIiB4bWxuczp4bXBNTT0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL21tLyIgeG1sbnM6c3RSZWY9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9zVHlwZS9SZXNvdXJjZVJlZiMiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENTNiAoV2luZG93cykiIHhtcE1NOkluc3RhbmNlSUQ9InhtcC5paWQ6QTE4NDU5NTczMjVBMTFFMkJENTU4OThCM0MxMzhERUYiIHhtcE1NOkRvY3VtZW50SUQ9InhtcC5kaWQ6QTE4NDU5NTgzMjVBMTFFMkJENTU4OThCM0MxMzhERUYiPiA8eG1wTU06RGVyaXZlZEZyb20gc3RSZWY6aW5zdGFuY2VJRD0ieG1wLmlpZDpBMTg0NTk1NTMyNUExMUUyQkQ1NTg5OEIzQzEzOERFRiIgc3RSZWY6ZG9jdW1lbnRJRD0ieG1wLmRpZDpBMTg0NTk1NjMyNUExMUUyQkQ1NTg5OEIzQzEzOERFRiIvPiA8L3JkZjpEZXNjcmlwdGlvbj4gPC9yZGY6UkRGPiA8L3g6eG1wbWV0YT4gPD94cGFja2V0IGVuZD0iciI/Phau64UAAA74SURBVHja7FwJbFTH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',
        ),
      ),
    ),
    'field_small_icon' => array(
      'und' => array(
        0 => array(
          'fid' => NULL,
          'alt' => '',
          'title' => '',
          'width' => '24',
          'height' => '24',
          'uid' => '1',
          'filename' => 'crowdsourcing-sm.png',
          'uri' => 'public://crowdsourcing-sm.png',
          'filemime' => 'image/png',
          'filesize' => '1981',
          'status' => '1',
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => '697a7988-1b6e-4364-6110-676fcab44acf',
          'rdf_mapping' => array(),
          'uuid_features_file_data' => 'iVBORw0KGgoAAAANSUhEUgAAABgAAAAYCAMAAADXqc3KAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAyJpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuMC1jMDYwIDYxLjEzNDc3NywgMjAxMC8wMi8xMi0xNzozMjowMCAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvIiB4bWxuczp4bXBNTT0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL21tLyIgeG1sbnM6c3RSZWY9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9zVHlwZS9SZXNvdXJjZVJlZiMiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENTNSBNYWNpbnRvc2giIHhtcE1NOkluc3RhbmNlSUQ9InhtcC5paWQ6QThBNENGQzMyRTJDMTFFMjg3RDVGMUM0NTRBMUYzMjkiIHhtcE1NOkRvY3VtZW50SUQ9InhtcC5kaWQ6QThBNENGQzQyRTJDMTFFMjg3RDVGMUM0NTRBMUYzMjkiPiA8eG1wTU06RGVyaXZlZEZyb20gc3RSZWY6aW5zdGFuY2VJRD0ieG1wLmlpZDpFM0I3MkI3NDJFMTIxMUUyODdENUYxQzQ1NEExRjMyOSIgc3RSZWY6ZG9jdW1lbnRJRD0ieG1wLmRpZDpBOEE0Q0ZDMjJFMkMxMUUyODdENUYxQzQ1NEExRjMyOSIvPiA8L3JkZjpEZXNjcmlwdGlvbj4gPC9yZGY6UkRGPiA8L3g6eG1wbWV0YT4gPD94cGFja2V0IGVuZD0iciI/Prx6OjIAAAIfUExURfFcJfvHrvmyjvJiLPJiLfR2SfaLWPaMWfaHUvFeKPJgKvehgfaJVPFZIfaGUP728vvIsfvQwPWFT/WETvaLV/JmMvFaI/aIU//+/vJlMvWBSPaFT//6+PWCTPWDTPWDTfV/RvFcJPaNWvefgPmykfR3SvWDWfrDsPWDWveff/m2lfm2lvJkMfaSYfq7nfvItvrAqfifdPvFrPzay/WFUPrIsfrBpvR+VPiuk/aFUPBTGPimf/aQa/FWHfije/RyQ/NvP/ixmP3bzP/69/WDS/vMtfFeJ/mzkfq8nfm+p/ece/zSv/ecfPzg1fq5m/rJt//+/fvRwPrHtP3o3/V8QfeZa/vNuvzf0frGs/i2nPaGUfWLY/eihPJjL/JgK/JqOfrApfvLtPJeKPze0fiqhfFYIPFdJ/JpOPeVZveZbPR+U/aRX/rApvFcJv/9/PWLZPaKVviecveTYvehdvvGrPJfKfzYyv/9/faTbvaOXPrBrvN1R/vPv/zdzfmsiPaMWvrKsvihd/FhK/V9RPeffvFiLfeSYvFgK/ijevJpN/q2lf7z7faJVfJkL/R9UfeggfaQXfrGrfmzmvJlMPiief7x6/q/o/7s5Pm/qvWAR/aNW/SHX//8+/vJsveabfeYavrApPJjLvmymf3o3vvNvPrFrfaKV/zf0viqhPilfvFbJfaWcvJeJ/vLtf/59/JkMPrKufFdJvJlMf///////00Z5BwAAAC1dFJOU////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////wChHAOwAAABRUlEQVR42mLYggMwEJaYsyjfRnAzpoREn+1GxVRHTIkasU2bNilGo0psdvWrVWcASmyskJiol4yQ6FKQm2AQu37TplXKjAryJsvhEoXiIqGRnEAdXOZLOerlS+ASHRxsRZ6tkzdtWjM7IYpdOBEuYcjBLt0Qw7CpV7TMTpxdlhEuMZePjW2qYNqmUrUtHnwFbfxwCRkRqeItVZw6Tarl3dJSKXBXyWhlawdOimfZJOmmob/WWtd7M1hiukqGWYSXg9hCyU2bRJM4syzC6uYb5W1hCF42c5pPey7LJijgYkif0di8cjODgCyPqX3cJiTA2+8upOTMICDcw8jKjCzBwM0kVLmOwcmSB1NCbt5mhs2ZLugSmkwhC4CuCp+VU82CItGyYkoAyB/8xp28G5GA1erFmyEe3LzEfwMSCPIlMjGgAYAAAwDihTOiaxw0ZgAAAABJRU5ErkJggg==',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Consumer Protection',
    'description' => NULL,
    'format' => NULL,
    'weight' => '5',
    'uuid' => '8bf07193-8652-4036-874b-5764c127d2bc',
    'vocabulary_machine_name' => 'application_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'f7365ae9-b9c0-4978-87ad-89a04f2fdd17',
    ),
  );
  $terms[] = array(
    'name' => 'Mobile',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '15',
    'uuid' => '91dc0575-1800-4f14-419a-69f1cca0a5ee',
    'vocabulary_machine_name' => 'application_category',
    'field_icon' => array(
      'und' => array(
        0 => array(
          'fid' => NULL,
          'alt' => '',
          'title' => '',
          'width' => '100',
          'height' => '100',
          'uid' => '1',
          'filename' => 'mobile.png',
          'uri' => 'public://application_category/icons/mobile.png',
          'filemime' => 'image/png',
          'filesize' => '4429',
          'status' => '1',
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => '383450fa-902d-4443-862e-863ba068a603',
          'rdf_mapping' => array(),
          'uuid_features_file_data' => 'iVBORw0KGgoAAAANSUhEUgAAAGQAAABkCAIAAAD/gAIDAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAyJpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuMy1jMDExIDY2LjE0NTY2MSwgMjAxMi8wMi8wNi0xNDo1NjoyNyAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvIiB4bWxuczp4bXBNTT0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL21tLyIgeG1sbnM6c3RSZWY9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9zVHlwZS9SZXNvdXJjZVJlZiMiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENTNiAoV2luZG93cykiIHhtcE1NOkluc3RhbmNlSUQ9InhtcC5paWQ6OEM1MDFBMzQzMjVBMTFFMjk2N0ZFNEQ3RDhCRUJBRDAiIHhtcE1NOkRvY3VtZW50SUQ9InhtcC5kaWQ6OEM1MDFBMzUzMjVBMTFFMjk2N0ZFNEQ3RDhCRUJBRDAiPiA8eG1wTU06RGVyaXZlZEZyb20gc3RSZWY6aW5zdGFuY2VJRD0ieG1wLmlpZDo4QzUwMUEzMjMyNUExMUUyOTY3RkU0RDdEOEJFQkFEMCIgc3RSZWY6ZG9jdW1lbnRJRD0ieG1wLmRpZDo4QzUwMUEzMzMyNUExMUUyOTY3RkU0RDdEOEJFQkFEMCIvPiA8L3JkZjpEZXNjcmlwdGlvbj4gPC9yZGY6UkRGPiA8L3g6eG1wbWV0YT4gPD94cGFja2V0IGVuZD0iciI/PtnFbZMAAA3BSURBVHja7F0LcFTVGT7n3Lt3d7N5LAkhCYlAwlMgQngMEVQQEIHxUbTOUFBQVOpotR211TjU8cEU0NpOK6CdcaxUTdsRxc50KiBaRB6RAFLCIwmGhISQB3mweezr3ntO/3N3WZJwb4i7C0uYe+bOnZuz93W+8//f/53/nN1gxhgyS98KMSEwwTLBMsEywTLBMsEyITDBMsEywTLBMsEywTIh6HsRr/Lz5KL/KCW7hexcadZPkWiJ5q1VhdYeZc3VCDHsHIyzcrHF1o/B8n9Z6P3rKkQE/46PWGuj9YFfRuvOrLNVLd7MWqq4r2D4m+KKfcKUB7Azo7+6oXq8CKwJxyVgW5xaWRK1+1JVPfQ5a65CFjuyWJFohQPW3qQWfczO1/VbzhJEhLF2hJEQNR9kTVWsqRJJ9u4+IzFvm7r/H8x93iT4LmC1NYLf6fWNxDpbwD2R4u+floUuZLGJED3itfbyEbinenTbNUTwSulB9YfvkbsdYWP0MaY1ZViUNKQI62hlnW3YkRj50/HAodwHqar/dIuVVhbj1GySOT7SB0U4YUHrT3s/XK0c28tNPchHxg+TbBpVsUCkx84066JfWG65Nwqho2wXBfOB+yO9d6AKsiVYZq6EfczckDbWuN9YoRzZiS2S5mKXIxe/l3namacDNkQpa6nzvPtr/7YP+0BLl+lRYfRtZNStSPYZtFJEoC1Kv4mdGzLmLVxHG0/juER4S3HSHZa8Wcgi9enSDpe8+3P19DFss/k+eUsYM1UYOkbfZE4Wq0e/oa112BYvDJ8s5N2JJX2GEnLnI7+Hnj6IdLWoaKXVh8iwyZEor/DdUD1d6n59MVg92It0x3LbgwU/Dmp3h/v3j9PKI0z2S/OW2Zb9Vkfu7/xI2fspdywwDYh3ip8MyZXuex7HJxu8k6zs/oC11kAc1GNWH866SZz6QAzckFaXM58b7AsnpFjvevxH91JcvLTwUUYpFkVaXXqpo6nl++W9mxHYEZA3DIxAbdoT6Jlj/i1v8efqW5dFmHgPEm2GSqKulLnqY8FZqsIZXVWJcxCOd4bzbLiQDw8x2CaPZT3soGQnhvv3CHBWh1p9VN76F2TgDzgpjZOXKuuGYzAuWnUwFmB1jX3h+fJFgPRCWPs5XS2GbQ712E7l+62GZJ+TjxPTeV/qmR6tLwVqu+4UvD0RIqb+Rxar/O0/2flGg6BlISOmI6bqNVdA7vO0seJ6A0sYM4NRxUgKwDhG3vepYauyxqOEQcjgctZQfr2BJebOEnNnIwMux5JdPbGHtZw1YnqSOU7fE4lIW2rCGy1ew25IiLTwKZKdh4D+ddAizNsOQcDw6owbtTEju/S2yONiQIjXW9ZBtABeCFSVnkNhQQLJihTZKCzihNRLgywPJqocnoC41lM0OGmg5eb7Qbjq5jBY61kYQhhcSfCATD2wNNpqb7w+81lC7iySPFiHgDBmso+eLTcGOsNAjmHW2Xp9goWtdpI9kak6xgXyjJ47bXhlfAoSBH3a8raHoQ37R6ZUuGGc/qsSgbkMqRrkqzao1ANZ8enHyisOFh+U4EjHAL2f6EyDIaSOLUBM9BjbiGC9mD7rwVnAZfTqgwXE4fMyAx69fJaqj75gjePDY6MBoSFYFiOwYiRKBZE21ajlh8K4VDnyLetDfjWQe0FU1h9C9tYZqpZ+wNcMWDwzwLybXlFOFCPa1z4EY5R3bvZv/wD3mL8yKp0urqd0YGU8b0GIIcSqAcRhUUc0Jiz4DEqt5w8rSeYobI/XzyV1i2CItjWxsxUIaAhGtn3wYNpwiqlKcLKj2weUhzyjIns4WLoQBz306oMFpADNoKp66jCnD0KwloTiOVjuCFo3EgGHmJUxDBhJ1t6mgnqYSOVhrJeuYYySZMM0MQN7hJB3KcTwYpIjjLm4qIDFBxDwTmTAAI6Q28XhA3TAcRwDoZEM4jTELIsVXAnCObY6gqcBlH14Y3r2JD1zQqfNvBcIyRhhCFZbgz73M4rt4UzBRQMsxQcOaFu5Diem8L4+U+5593nW0Wpb8pI49U4Oh9/j++zP8q7NwvA8+8q1KCH5wmnPIW/nZW8v79nMCUu6ZBoCjNThJINHGoJ1vhYRA2KKHxgbsJiq4gFpwg3Bl8aOKTguAcASRuSRAakXVOUYWfbh5HSSNeLCaZOxLZ652y/TEQe30h/2I904oPjJ8Ck4foBBDOnkq0KIqD9sTEqPDVgwHFFP7HO/8Rh2DuImfraCNZ8FBvW886yQM4HPJ/o8SmkRThyoHtvjfnMljI25ZdWdYq0NfCbCaLKPz4MdkL/+QNcBNabE4viZhl147hQf0+gQFkVSHIkVWMFuPrQdKQqPdRYbn7/AmDZU0aqjQcqHGuAsqioHtmozHRdO64WqzlX7//0n3jbd6Vswq/ThQs4kw8vPlOgLLKrixEEoZpwF7RElacFj3GTgZWorlMNfIUUVRk0Rx97MRZDfK+/fylrqQIhLCx/HSSlaY04qh7/uheCVA18wdxsf3+k/U5XyF3Hxofupq4E1nkLEog9W6vAwNVIUsPJ5LbmzbMtfvighX7yL1lfaHv2dkDE06Kopg73vPmeZdIdt+cXJ1M7fzKdNtcZ+VImN1lH63MLIacKYmw3NqmIfUn16q2tA5VhJ+qiYgYUtklp9XN6/jSTwiWK1toK6zoELyDs+ZpPnaLN1snJgO7LHq6ePyfu34wQnyGe1poy2NfMUimIgYomoH/hBpiSkSHNXGElw1lJDa47oT0qDsh2YHR67R8kNBZGdb/Csf+ai+rHy5Yr+rz7yf/m3wDgWbATEPWut96x/uttpxrqU3DBOrfoftlh7ygWEpQVPQvw1MCpVPbpdU3C6PkjJ0LzwhyrREaUgyuOSsD2Bq+OOVs5iWAA5ipNSYVTB/B7ElaqmBuMSuSAEUdrREjjN8M2mLFDL9rJz1TzlwI2IcbVFqWXBk8KIyYYBtHw3XzKpuzYEAkviID6REUuwQJRmjbb9/E2SpInS2h/cG37F2ltsS1dZps3nc3wgSj/5o7zrE2HEJNvKtSQgHWrKPBufZd4Owx5wOKX7C+Qv36M1x7XFXwQ708RbfyaOvcWQqurLadlOw4WAVBGG5xsJkasoSpNShcycoPvk5EIIA7CE7PE4MVkzvESSORLJfhBiQmYwEpHhE5AtDnnaekuJpAy2Ln4ZJAhrb8bWOJyWjSXDpe2stVY9+JlhTlGVsTOTDJkYUcYgSqK0yL3mkQA0tLEaVAIWRS5Kh43nmV+/Vz15EBSDenyve+0jWIsDtL6Ki1IY+lPfZbJIacMQbL13mKte+e7vPM2gn0vgWUZh7OwIl0hHSZQSopR9F1iagEFDWiTgI6BzubFaU9qYf9lByzqppd+xrqdFpaiy+v2/kMdl6IAw0ho6CaePjjQXFYH7dYvr3RyEj3vtELyxFNftEmB6ixVf6iZhZ/GDWh9GTmcMkQK5kDBQGH9nFBJ34XtfolMvCcmQLFuXFIgTbw+GsC5X0FMlnvcKtCCIu1NeSkQrvTuaDdPw8CxChIk/4XmhGIIljMwjKRl8JqprfGFBguDSkV0iMJC+yBRvmhlRI3rYb1fbV2Vh4j04dVhU3D2ipd3+bR96N72CHQk9taUi60doUAAXv5GiNcfTLmRPiCvYhO0R9LzbJf/3HT4V2NU8oV2gacbcLoydE61kQUQTFtK8h6S7n2BeD1/kSbWplMDGM+vafEzXDWo4xzN+AuWraVmni2SNsT/xZkRIQYlLIjfO5pqTm3PArhWkeMnIW6OIFIr8SwM81Bz4Sv66EMZ62vLDvvE04QrTMmmOtODh8Naj6tB87TF6cg/raOLzEXYnyZlGsqegqBYcrZ+EYq5m5m7raxi1WIkzNWrSoeu9+YoPACspmt8NinryDyJaIFEV24IdA67czc3vSJtgmWCZYJlgmWCZxQTLBMsEywTLBMsEyywmWCZYJlgmWCZYWtmyZcvgjMGbNm0K1axevRpqioqK4HjHjh333nMv/Akb1Hd2doZOCGwrVqyoqqyCyvxp+YEauFXgnrDv8ZTQ1vWjqJcr/jN2BS8WzLxt5rDsYdDyjRs2BirheNlDy+Bgzdo1JSUlgfpVq1YFL3mpwOVyBSrff//9F1584aknn5q/YP7o0aPr6vR/aW3J0iW5ublwkDcxr3+74foN62H/2uuvhWq+2cV/Q2fDxg3Lly9/9dVXhwwZAtAEjAvK3XfdPXfuXDhITuarIubNmwf7nJyc/Px8o0fMmDFjuVagV/oxWABE4ceFb7/99tYvtsJxoLKmpgb2GRn8yxEOh2PsuLFwcK4x+M3B6dOn37fovgAEfXwKmF7ADQOe21/BAifi7va7NVOnTl364NJAZVJSEuw7OoKLs5qbmjlq8Y6QG8IGB+vWruvjU8ANwaNhSx2U2o/BAvOBNsDBw488nJgYXFCdlZUF+8LCQtgD3xcXFwOUqampITdcvHgxmGF1dXXIN3svITcEO+3fnAVtALwWLVoUqoFjIGxwTHCcgMc9/UxorSl3wwk3TQCkwF6g8XNm81llILVQYA05HUTMHjVdg2/UC75y/3cH6AOIfOHChSGTASMqKysL1UCYb2vj87KhGtATtbXBxd6ZmZkBmg+dBtEwPS09EBwCBUwVwl/XGjinlzhw7YJlilITLLOYYJlgmWCZYJlgmWCZxQTLBCuW5f8CDAAfxeMvZq8ecQAAAABJRU5ErkJggg==',
        ),
      ),
    ),
    'field_small_icon' => array(
      'und' => array(
        0 => array(
          'fid' => NULL,
          'alt' => '',
          'title' => '',
          'width' => '24',
          'height' => '24',
          'uid' => '1',
          'filename' => 'mobile-sm.png',
          'uri' => 'public://mobile-sm.png',
          'filemime' => 'image/png',
          'filesize' => '2120',
          'status' => '1',
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => '4337d4ab-f38c-4d7b-9014-7c1410719f97',
          'rdf_mapping' => array(),
          'uuid_features_file_data' => 'iVBORw0KGgoAAAANSUhEUgAAABgAAAAYCAMAAADXqc3KAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAyJpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuMC1jMDYwIDYxLjEzNDc3NywgMjAxMC8wMi8xMi0xNzozMjowMCAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvIiB4bWxuczp4bXBNTT0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL21tLyIgeG1sbnM6c3RSZWY9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9zVHlwZS9SZXNvdXJjZVJlZiMiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENTNSBNYWNpbnRvc2giIHhtcE1NOkluc3RhbmNlSUQ9InhtcC5paWQ6QThBNENGQzcyRTJDMTFFMjg3RDVGMUM0NTRBMUYzMjkiIHhtcE1NOkRvY3VtZW50SUQ9InhtcC5kaWQ6QThBNENGQzgyRTJDMTFFMjg3RDVGMUM0NTRBMUYzMjkiPiA8eG1wTU06RGVyaXZlZEZyb20gc3RSZWY6aW5zdGFuY2VJRD0ieG1wLmlpZDpBOEE0Q0ZDNTJFMkMxMUUyODdENUYxQzQ1NEExRjMyOSIgc3RSZWY6ZG9jdW1lbnRJRD0ieG1wLmRpZDpBOEE0Q0ZDNjJFMkMxMUUyODdENUYxQzQ1NEExRjMyOSIvPiA8L3JkZjpEZXNjcmlwdGlvbj4gPC9yZGY6UkRGPiA8L3g6eG1wbWV0YT4gPD94cGFja2V0IGVuZD0iciI/PvgdhDEAAAJPUExURfqufPNsO/708fqwgP7w7PaKVv/9/fqvf/qte//8+/aVcvqxgvJnNPqxgf708PaGUPzPs/3m3v3n3/m5ovNxQfNvPvqvfvN0RfipjfzNrvzMrf7y6fu7kvNyRP///vedffJlMfR2SPqyg/qsev/7+P/59/aIU/aQbPN3Sf7s5v/9+/FZIf3m1/ikfPJnM/WKY/NwP/zf1PWIYPzXxfNqOPiuk/WDWfiskfWDTfWCWPzRtfaLWPWDTPixmfitkviec/N3SvaJVv7w6PaJVPeigvzc0vze0/R5TP3h0PN4S/aHU/3m3fvOufaFTvrCp/JnNfNxQ/WLZPNzQ/aFUP7r3vaXdPaSYvm5mv3o3fJlMvu5j/ivlfvPwP3o3vmykP3aw/ebefNsPPN1R/NtPPu4jPaMWPq4jPqzhfrIsfaOXfaETfquffJkMf3p3PzStvnAq/759/rArP7w6/NzRfiwl/JmMvN4SvNwQPqqd/728vaQXvvBm/aWc/7x6/JfKfaVcfefdPejhf3VvPR7T/zQs/NuPfaOW/738vFWHP/9/Pzb0Pu/mP/6+Pq/qvzg1vi0nP7v5vaRbPiwlvN1RvNvP/ixl/718fzaw/eefvJjLvR9UvaSbv7q5PaMWfzXyveccPqwf/zVw/qvff7v6vqtfPvMtvrGsvzZwf707faDS/JmM/7s5Pvaz/718vNyRfqxg/aTcPzg1f7w5/JrOfm6pPR3SfWGXvzOsPNrOvJkMPeXavFeKP3hz/eUZPedcvqygv3Zwvqrd//+/f///////+EGykUAAADFdFJOU/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////8ANFbHkQAAAZBJREFUeNpiOIIDMJAt0cUJF5KWRpLg3D0JJu7BwBAPkSjwFhKK0ZaASQgc5M3WAUkIb9Yo83QQZ1wGFFQ9dOSISsoC9rRDRxg4eQoPAYFcr8jhIz6Oe2OPHNnEy63cdIShaAcT2ITFAWxHdLP4d3UeOWLFwRx1mIGFURMsISjLdmShWqqNH9AwJe5FISgSR8L51eYfPnKkWoxjOQNLIgtYYs46oMRqVta2yiNHJBmWCDDw+a8BS8ybAnRRTxWrde2RI3kMDJIMTDzl6lzqXBNFRYESEc6smapHjkgxcLQwMClsiFbcMtmuhhEoEcfv1QC0o5udYzoDk55laLF8EJdZ66EjS4PnWmQcOdLOy83uBNQxu2SWcLNpPVCH7kpf+8Mgk5hlDjMwleo3bjVXdAlMPnTEOGzftCNHdNj3Kx84wsAXuU1eZIZBghHIDjmg+hXpzGIyh4FhZaJdJ2E7ladD/DAkdLdXMDNPAIVu/86ZSe4aOavyocGeq7R+DyQ++PoM3Vw3roXHoJYWeYkBIMAAMfg0/06u/D8AAAAASUVORK5CYII=',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Content & Document Management',
    'description' => NULL,
    'format' => NULL,
    'weight' => '6',
    'uuid' => '9c2d19bf-c61b-4e5f-b502-4ddccccee5d1',
    'vocabulary_machine_name' => 'application_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'f7365ae9-b9c0-4978-87ad-89a04f2fdd17',
    ),
  );
  $terms[] = array(
    'name' => 'Location',
    'description' => NULL,
    'format' => NULL,
    'weight' => '1',
    'uuid' => 'a2388b71-8135-4548-82ec-d41a8faf78d7',
    'vocabulary_machine_name' => 'application_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'b49b12cc-efea-7614-91e5-632a860a549c',
    ),
  );
  $terms[] = array(
    'name' => 'Contact Relationship Management',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => 'a2a7599e-c655-4e6e-b858-5a841fa6a0a4',
    'vocabulary_machine_name' => 'application_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'fe72752c-86a7-4024-8e2f-45cc75d14502',
    ),
  );
  $terms[] = array(
    'name' => 'Database',
    'description' => NULL,
    'format' => NULL,
    'weight' => '2',
    'uuid' => 'a32aba42-1edc-40ef-9a46-154bd314b9e8',
    'vocabulary_machine_name' => 'application_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => '34cf95ee-3329-ef34-113f-10f7c556ddcb',
    ),
  );
  $terms[] = array(
    'name' => 'Geography',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => 'a5958a56-f7d0-4926-a770-a23d152b4d24',
    'vocabulary_machine_name' => 'application_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'b49b12cc-efea-7614-91e5-632a860a549c',
    ),
  );
  $terms[] = array(
    'name' => 'Accessibility',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => 'ace4c6be-0481-463f-b0b2-c00aad1933bb',
    'vocabulary_machine_name' => 'application_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'f7365ae9-b9c0-4978-87ad-89a04f2fdd17',
    ),
  );
  $terms[] = array(
    'name' => 'Mapping',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '14',
    'uuid' => 'b49b12cc-efea-7614-91e5-632a860a549c',
    'vocabulary_machine_name' => 'application_category',
    'field_icon' => array(
      'und' => array(
        0 => array(
          'fid' => NULL,
          'alt' => '',
          'title' => '',
          'width' => '100',
          'height' => '100',
          'uid' => '1',
          'filename' => 'mapping.png',
          'uri' => 'public://application_category/icons/mapping.png',
          'filemime' => 'image/png',
          'filesize' => '4745',
          'status' => '1',
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => 'ab4f8694-5de8-4f4e-8a26-84b08b23550e',
          'rdf_mapping' => array(),
          'uuid_features_file_data' => 'iVBORw0KGgoAAAANSUhEUgAAAGQAAABkCAIAAAD/gAIDAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAyJpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuMy1jMDExIDY2LjE0NTY2MSwgMjAxMi8wMi8wNi0xNDo1NjoyNyAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvIiB4bWxuczp4bXBNTT0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL21tLyIgeG1sbnM6c3RSZWY9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9zVHlwZS9SZXNvdXJjZVJlZiMiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENTNiAoV2luZG93cykiIHhtcE1NOkluc3RhbmNlSUQ9InhtcC5paWQ6RkUzMENDMzAzMjVBMTFFMkFDQTlCREEwMTNBMUI5OTgiIHhtcE1NOkRvY3VtZW50SUQ9InhtcC5kaWQ6RkUzMENDMzEzMjVBMTFFMkFDQTlCREEwMTNBMUI5OTgiPiA8eG1wTU06RGVyaXZlZEZyb20gc3RSZWY6aW5zdGFuY2VJRD0ieG1wLmlpZDpGRTMwQ0MyRTMyNUExMUUyQUNBOUJEQTAxM0ExQjk5OCIgc3RSZWY6ZG9jdW1lbnRJRD0ieG1wLmRpZDpGRTMwQ0MyRjMyNUExMUUyQUNBOUJEQTAxM0ExQjk5OCIvPiA8L3JkZjpEZXNjcmlwdGlvbj4gPC9yZGY6UkRGPiA8L3g6eG1wbWV0YT4gPD94cGFja2V0IGVuZD0iciI/PrShCLkAAA79SURBVHja7JsJcBRVGoD7dfdMz0wOch+EHASQG0FALl0oFzBQHKKAiCAr6wqCB4VoQNilVpGjFkTXgpVVEZQgCAgICiIYLlkOOYRwhhAgB5CEJIRkMn29t/+bHsfJkJBAJmEy1a9SU5mXNz3v//q/XwcRQhh91GwgHZYOS4elw9Jh6bB0WDqshg9LsjEsx/AGHVb1Q710ApkD2OhmXrUr1jsVHmedxXmXPXtNJe0gKSn0RVg3MkhBlqeuRspKypdNx5dPo4Agn4OFVVJ0HXsIlvLbvrKZQ/GNK8YBf2FQreTlvZAVuV1EyooYhBhFrqWPt639QNr6CRIslukrGI6r5ca8ERa+mcWI5YQpwrfy2NCY+w0RaeLm/yhHdwB0YcxMNiq+9hvzSs3KTScEI7GM3Mhk7h0WuVUorlsk/28LVUyGMSaNN/YZ4bPREOddQYiFnOY+AqJ85KeyOc9Ju79hWBZ+uIR2wjOve2pj3qdZioxv5oB/QZhSuxdPVyx+s0jatwHBsATQGawKI6Yik8VnYZHbBaT0Jk3fIWEuukZTeaOpesLHUm1r/4Vz0pHZn0YGuI7NyrXqxrfr4cG9eR0sfDOXEa2MQQAPATERlxSwYU2qUagNH4HdASJNoezuXYUCwDTmHYbjfRpW/hWCFcQINCcSraQwl6kaFuRQtq/n4+wLyOznmkMR0Wp6ZgoX19I3a0NyuxBfy8B5merZA6Q4l2Htd1FV2OgWXPMuKCqRjUoEZXFNysUNH0upXyMGM4YKdkpsZXzrHpa3P/OsWnkFLPX8IfX0Xpx9jliLwSUj3shwkIhqu4K8VCKqjDgeBYSyce35LgOBmnLqgG31XJx13k2hNL7AzjIzhYtt4VNdB1Aled/X+OJRYMIAI/b3DJtghu4KUVdt99b21QqjyozRn+EClNOHGKm8UsdPrLdNY/9hfHKsD7VosKr8sl4+vNkus9kBSJGpZoHtgFlBlQP7UiRGttnVzQBoiM2Gs7NwSTESTJVWedQA2z1mmfYpTbJ8AxaxlkhbP8bphxijhWoTqIwsMuYAtnFLLr49iogHi4NqDpQLhCcl+VD94MyTStoBXFAAYa5KEGCARpPfrDVsTGId7by+oyE4cnHDfJJ7gTH52zNuG2DiuwziOzyB7qhsUKMwJjIehTdVDu/Gudl2U61SZYhUbhqVXHek6luzIKJLa+fg7DOMYNGshkvoYEiaeJdqWd63SVz3AS6+gUx+d7syGGCHPpY3P/nDxzV0WNKWf6sndzFUbMJAht36McPASVVRwPk54tpF8uEfqMO6e6MGDNAS6DczxSOtBa8wQ+W3XWpaKkMrNcJIItfpSWPSxErNiojlysEfxI0fQzZPkwOmGmUhsij0G1PXpOoPFrmZI/+8gjodkFy0cp2SjAMmVpWUi98sVLPOQcJFC73qAytmwyNJ4SWwcSRY6lSKemrRyL9+D0GQxj5FRuFxhifGVZpP2FLmWz98RYV6GGyzJj1S8CGCwEXH4NwL6qnddS1FfcAipcXqhUPInkNC0mToNRIJ5jtJlX82U/r+v4jnUQ3aDL/rocRFRDDwEY5XT6VS59XQYamXjpPbNzW1YiObci27V0Zqlrx3PfIPqvmZArg2vtdTbHQ8I9NWPVTgUBI0eFj4ykmkRXRVpqTc6lsg9fnf5T3rkCXQyYF2hO+uJpKNi2tjemE2G9OKUUQa1hVJvZrW8GHlX6WAwL8YBEis3KXe/qWcugb5BTjZMbKEQhujwDDQHabSzAZqI443jXkHGY1sbFtHzY1Ycu1iA4yGGJPSQlx0neRdwdcvkuLrtOUCEloCUXB0hYW5l8Tvltp7L8hByiCYxv2T79IPaiApdZ24eQniObfsgZSXCUNe4Vp2pnc7IgFBLUnvhFHNOSdtXwaWzobFoeAoatTeCAtS27JiejKadxkCEy7IJiUFjK2UdlfAAMFhw6uKWUsQMlXIBqSfUsD9OzucRLIJgyYaHn+KvjH7CUMn0M7Ege9c++igblyzjsahkxxZNRCBjMFWSn2iVK4e26YCWYik5kA2KIKNTESRiWx4LAqK+qOP+mBgqYp66YR68Vecex5IQc3BEJXhDLRzAKoEQapC+MeUmksWqpw9LO9dZ087nV6B41s/6voNXKtu8i+bXHUWgeqNnUUbDw4JjIjlHLYKwcGRakGFcBvnFlEvBtrKcsgciEJiuJhW3EOPsnFt7q8qqh0slmMbt4B7SxI64IIsUpCFC3NIcR7cYaLaED2M4ikdR4BDdN/EYVJgSrZV71Mvzplcnb2adUGzL8dE1jlXwYitVBj2Btf8YdePVPBrYOwwo6r05BEY+YegwHA2tAlVrtAYFBSJAkLvu36sHSywMb9G8MNEN+d+1zVceI1Sg0CefxUSd3BedPe0jceS8ts0chkEWChu+AhfOe0SAe3XMwjS959xcXD/O9FU9vAOef8mZDQ7jZRr0dk4+G8V9mCzErimJj+QAkULCIPKHIXHgztjI+LgrafaW5528BwP95AJj+Va97Rn7iLUd9KGecR6C3YMfg3fLmRDopW0A9KulEqqGc5AbuVZF73MNW1LgHvmKaqJ2jMKoD5QAw562S1lxbdu0NMgKKSgNohsKgydCmHU4933eqkNDQIb1RSFNqFJKSiUrYwUXCX+IbaUuQiEryT/JNQ3q7Jy7hCoov1ADDn7xYY+o/iOfdwDb/Y5wAqFJAQTHnxCcFTDLqTZxg+pl47aT7eQmn5EPpKKs8+7HtXc8QHWaXqOUGstMfQeaR7/rvuTMBjjjKPIrkfUziFBbehJKdeiKzKY7UWvWTm8Xf55dY3aCY6QKRPRaug7xvzSnDufGaKB+EYGVUasosBQNr5dg2/RsNHN2MRH8MVDRGLUa7l2d1ujeETKS1GjcPPINw1/errS7qic+qX9fiMi2/gug5F/sC/0swzdhoiZx3DOFTCcGsUmVSaSyD/SzzTqbVoqV9r22b2K3MymiRWolV8w/8iTPtL8Y5u0Yvwa4+ITNXmmBVQGBYSYnp9lfOLZKq3z123q8R8Ze6uHSOWGniNAB30ElpqVrpw+hIxCtSUBJFP8w31MzyWzMVU+160c+1HetRyKQWqDkpWLbcs/OrgepKgXWIoirppDSm7eXa2oQvmHmEYlG/uOrjLJViR5z2rlyBZ6xI84SHGRJYieehgEH4ElbvtCOX3gbnUsBEqM+U59TaPeYqMTquxlQFGd+qWaeRwJ9kccFAlyUcOQKWxYbP3YR50fhamXz1rnjqHHzixXVT8HdsHFtxSefZtLaM/coSOgkjj3gnJmP848Ts+utQWSjbEEGgdP4RI7MvU16hYWUWTr/PGQiFZ+7kIVCgJZABsVhUwmWq/4BaNgqHXD6YEF7Ky8hB7fF11nrMW07gEnBQqFVfBrkH8aB05iI+KZehx1C0vcvExct7ByA5QlkJwNC2NDguizIdo2aMNAgXrYviv6cKj9OVrOoZVQJ0v24/5OSXzPZ+7hXMP7YamX0qzzxlIJ3QyQqkwpG5VoGj2dDY+S963BOechq0SwjOPdU1a79oEVE4zBVXGte/Hdht73w/FeCovIknXeC2rGCXcDlCX7adgwYeRUNijM6bnVjKM46wwpukbbOK51NVTSfo2gFOfi2rHNOz8oTHULS9y4VNywuIIB0keIStmIBAHKl25JVdU38s8rlZM7HYW0VM73HsN3GVihrn5wo04KafXib/S41PWJD0UiIuTZwyyzUqoiRW+d2Z+Nbf1H55PjQaG8hFSd5FlQ09m+ep/IouPYGYKXzcqGx5pGTDX0HFT93QuLpRkm8AJnZw5EQZGM1wzPw5I2LVUzjjv+x0G0IpO/4fHhwvA32NAateVQcDQk5QRyBayyQZG0Z+2rsNSMk+K2z+mBDVR5oo3v8Ljw7Ftc/D305MASUVgTkllAHyWNTKzTh9MeKCxVEdctpnYnKqBZpuFv0qeG7/2wAFJNCI70iDmyKeNNw5OwpB+/Uk7tgfqWb9tTGD3jnhSqIixaHiLOUG9FX33DUq+eF9d/wBhMwvCpwoAXa/Nvoyg0lv7rAD3rj/JBWJCCli9LhkLE/OJ7hi5/rm3uFxzJmAJQYJjbqaJPwCJE3PwJFx4rTPuUDfZAuxKSftQonA2KZrxseAAWzs/h4lobhr/uwW2Bt2JDGnsbLE+UO6pa+39sdxvK8R0oIJRr3tnnYNVFHV54jTEIKCBEh9VQhw5Lh6XD0mHpsHRY+tBh6bB0WDosHZaPDg+fG86ZM6dxdOODBw86Z4YOGQozZWVl2tuNGze6LtDeaj+wUpvXLqL9TJs2LT8/33UZXAoWdO/WHeZhMXwEJleuXAm/a3/Slo0fP/5y5mWvhqWNeXPnOVkcOXLE9U8rvlgBrzt37nSdHP386BnvzICVU96Y4sQKMzC/OmV1cnJyp46d4Hdt0s+Pnt1evXr1pb++5Fysjddee23pkqWwct78eWdOn7mYcbEBwAKxARNIsmD+Atd50AKNHYik6YU2evXqBXKCkIAgP88xP3jQ4IULF8bFxYHYCU0T2rdvr026fsvs2bOdb9PS0rZv2540IAk+NW7cuDVr1vTo0aMBwAIJAdPy5ctBePjdOa8pFGgHvO7fv9/1I0A2/UK623VAfrjCXb4F9G79+vXa2/R0+vHevXtrNtuzZ8/Fixc3AFjJ05NBSDBGUJY2bds4cWzdstVppJo9amPypMktmrcATYH1oETaJEjbv19/7WqVfsuHH30Ir8BLexsQQM/AS0pKwGbBDLt27epxuerkmdL+/fuDOYBRvDr51Xffe1eb3LFjBxCcNHlSbGzsqVOnQEinmwdGYGUxMTF9+/Z1XgQUMDAwsPefejvxuQ34yJKlSwC09rZ5s+bwmrIqBTCBGX674Vtvj4bOsWDBApDEVU5NlSZMmACSJCXRB2mcFgQ+CyZdSWnuCSa1K4BlzZg+Q1M3V6c+bNgwzfHDgJWgUHA/nh72NJihW2DxxjwLvFJOTg4I6ZwBOcE0YAaiO2gKiKeZJJCCt2Aye/bucVMf7SLDhw/XAh8MSAJgmfY7XMrtW+DKLVu27N69u+tK53fpSameweuwdFg6LH3osHRYOiwdlg5Lh6WP6sb/BRgAC3xDJZCKomMAAAAASUVORK5CYII=',
        ),
      ),
    ),
    'field_small_icon' => array(
      'und' => array(
        0 => array(
          'fid' => NULL,
          'alt' => '',
          'title' => '',
          'width' => '24',
          'height' => '24',
          'uid' => '1',
          'filename' => 'mapping-sm.png',
          'uri' => 'public://mapping-sm.png',
          'filemime' => 'image/png',
          'filesize' => '1909',
          'status' => '1',
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => 'c5ce0fdf-96b9-4136-a2be-6adea08c9699',
          'rdf_mapping' => array(),
          'uuid_features_file_data' => 'iVBORw0KGgoAAAANSUhEUgAAABgAAAAYCAMAAADXqc3KAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAyJpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuMC1jMDYwIDYxLjEzNDc3NywgMjAxMC8wMi8xMi0xNzozMjowMCAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvIiB4bWxuczp4bXBNTT0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL21tLyIgeG1sbnM6c3RSZWY9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9zVHlwZS9SZXNvdXJjZVJlZiMiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENTNSBNYWNpbnRvc2giIHhtcE1NOkluc3RhbmNlSUQ9InhtcC5paWQ6QThBNENGQ0IyRTJDMTFFMjg3RDVGMUM0NTRBMUYzMjkiIHhtcE1NOkRvY3VtZW50SUQ9InhtcC5kaWQ6QThBNENGQ0MyRTJDMTFFMjg3RDVGMUM0NTRBMUYzMjkiPiA8eG1wTU06RGVyaXZlZEZyb20gc3RSZWY6aW5zdGFuY2VJRD0ieG1wLmlpZDpBOEE0Q0ZDOTJFMkMxMUUyODdENUYxQzQ1NEExRjMyOSIgc3RSZWY6ZG9jdW1lbnRJRD0ieG1wLmRpZDpBOEE0Q0ZDQTJFMkMxMUUyODdENUYxQzQ1NEExRjMyOSIvPiA8L3JkZjpEZXNjcmlwdGlvbj4gPC9yZGY6UkRGPiA8L3g6eG1wbWV0YT4gPD94cGFja2V0IGVuZD0iciI/Pq4YFTUAAAHvUExURfFbI/JlMf/+/f7x6/JgKvJlMv/8+/FcJfFdJvFgKvejhPWETfilfviief/9/Pq/o/rGrfiqhfJiLf728vvJsv/59/JkMPaJVfWOaPaKVv718f708fivlfeUZvJoNfaQavSFXfWKY/aMWfmqhfR5TPNpN/7r5f7w6/zcz/WFTvFaI/aKVfvRwv7y7fvPufmphPmyj/FWHveXavm/q/aUcPJhLPvGrPR8UfJmMvzk3PWIYfecePWPavvTxfaRbfmzmv3k2PvPu/JkL/JnNPrKs/aDTfzf1veggf3n3frCrvrItveZbPaWc/eTZPWASPFbJPm4ovJmM/aTcPaXdP718vrFq/JjLvJeKPeYa/NzRfJiLPNtPfvOt/vOuPefc//+/vJgK/ish/aOW/q+ov7q5PRxO/vSw/FdJ/FaIv7t5vaRYfvbz/NyQ/vFrPWHUvaGUPJhK/R/VfFZIfeccPaHUvzYzPBRF/itj/m6pPBSF/zay/vUv/WBSPvUwvWBSvFcJPNyRPFWHfvUwfJfKfmuiv749vWFUPR4SPrEq/zPufm0k/ikfPWNZ/irj/aTYvigdv7v5/ihd/zl2feYavaSY/q9of3i1feec/vIsfaIUvR1QvWFXfFgK//69/q8n/NwOf///vNxQf/6+P///////0279xoAAACldFJOU///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////ACB7zgQAAAE9SURBVHjadJJTl0MxFIVze2ubY9u2bdu2bdv2zMkPnXba6Uoeel7OPutbyU6yg7CLQuTw41RAAVCCQ8UWUIAjk/91i2chvSI8lLW14upvoDwgb+0J8H4cQgOkOYyXT5hMHYtjm0Ni8lRymeRkRZP9glpEfhwCgNSQhXFY4hSjf0sn79G+8YChTLDL8LifqyS4lGI422bUSY1ep9cOAOb1XtVkAs5cNgamCfR9bQeRih0zWEHRkW9TfoTFozKDX7PghrWSW1X9Ddi3gtluo5DX4B/9CnivFAiP436u1RfVcjAbrCTN5+NzmK7mEox17jFAAJgWqdFhEGi0PiMsmcd5iLA19aLnzjAXxSeDGh2c8Q7A7/cVHzoqwc6t3CWbvnoepqMVp9TZg3rkUyC56v/lFUCBL+fAuvolZP0KMADSryNyZyJcHQAAAABJRU5ErkJggg==',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Data Conversion',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => 'bf9f2806-c657-4d22-8290-ffaf28a2f915',
    'vocabulary_machine_name' => 'application_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => '34cf95ee-3329-ef34-113f-10f7c556ddcb',
    ),
  );
  $terms[] = array(
    'name' => 'Content Management System',
    'description' => NULL,
    'format' => NULL,
    'weight' => '7',
    'uuid' => 'cc058868-4787-43f9-b65f-40942c007a08',
    'vocabulary_machine_name' => 'application_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'f7365ae9-b9c0-4978-87ad-89a04f2fdd17',
    ),
  );
  $terms[] = array(
    'name' => 'Human Resource Management',
    'description' => NULL,
    'format' => NULL,
    'weight' => '8',
    'uuid' => 'e32b83e9-4f9f-4de6-936a-bafaefa7e455',
    'vocabulary_machine_name' => 'application_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'f7365ae9-b9c0-4978-87ad-89a04f2fdd17',
    ),
  );
  $terms[] = array(
    'name' => 'Reporting',
    'description' => NULL,
    'format' => NULL,
    'weight' => '9',
    'uuid' => 'ef4568b7-28cf-4175-bad9-38a82e6733b8',
    'vocabulary_machine_name' => 'application_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'f7365ae9-b9c0-4978-87ad-89a04f2fdd17',
    ),
  );
  $terms[] = array(
    'name' => 'Misc',
    'description' => NULL,
    'format' => NULL,
    'weight' => '20',
    'uuid' => 'f7365ae9-b9c0-4978-87ad-89a04f2fdd17',
    'vocabulary_machine_name' => 'application_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
  );
  $terms[] = array(
    'name' => 'Risk Management',
    'description' => NULL,
    'format' => NULL,
    'weight' => '11',
    'uuid' => 'fa1e4759-3c1d-4b1e-b972-1bd6adec506c',
    'vocabulary_machine_name' => 'application_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'f7365ae9-b9c0-4978-87ad-89a04f2fdd17',
    ),
  );
  $terms[] = array(
    'name' => 'Social',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '18',
    'uuid' => 'fe72752c-86a7-4024-8e2f-45cc75d14502',
    'vocabulary_machine_name' => 'application_category',
    'field_icon' => array(
      'und' => array(
        0 => array(
          'fid' => NULL,
          'alt' => '',
          'title' => '',
          'width' => '100',
          'height' => '100',
          'uid' => '1',
          'filename' => 'social.png',
          'uri' => 'public://application_category/icons/social.png',
          'filemime' => 'image/png',
          'filesize' => '901',
          'status' => '1',
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => '2af85f8d-d62b-4950-82cc-a47721334579',
          'rdf_mapping' => array(),
          'uuid_features_file_data' => 'iVBORw0KGgoAAAANSUhEUgAAAGQAAABkCAMAAABHPGVmAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAGNQTFRF/ejb+9C3+bmU+Luj+93R9Zl2/vn2+Kh5+bSL/vb0/e7o/e3k+cOv/vPt/OXd8oBT9JFq/NzJ97OY+sy684hf+9bA+K6C+8uv/OLS+r+d+sWm+9TG9aKB9qqN8XdI96Jw////IDCzxwAAACF0Uk5T//////////////////////////////////////////8An8HQIQAAAotJREFUeNrs2Nl2gyAQAFCMCioucV/SKv//lTWptaJsWrQ9PcxbXnIVYWYYQC4IYBCDGMQgBjmApDdepLoQ6A388KAepBtE0WpBokEckQ4ESJBUB5JKEOuKNzkR8ayvAKchpebDCNj71rn3jEgyXxvSEKfnhKsNAeSNh/SxPiThIrY+pDfILyL4CoTcrkAidAFCYIfOR6agqu2ZyNw3JOchaC7oLhdxfoggPP948Iz73iwch7ZtO9/IsmfI2QvmjvUEjPWyxGqIU0yFKJwQXjX3i+UqldNWrIACktGPJ1rROJkRuDi6tRTJqIX2xZ/r8YXQLW0nQVYfNpNsinxC6nWZFiLF6oMGEiUMWC1tJUTi9a4JlXqecp3ksAgJ9zQhgoRtiRDbIHuQTWrKlJB622qKtnCi3hcK+gEkPif2kdXarJclSStU054EigjdD3iy3OUvlCQmqoGR4Pq9TbH+nCLdgKhHNK9YDVWKVhC6Y2Qx2Re4fs4qyujvzFZ851l9bfsR7PqnCLzuqyWAciRe3KXujvrDLqpWiyVITp+Td1+JgJ1wWgGEhrwAc+ZJqQAJtv2OgsKYWaGIj2Ssrk2qsOZiNR8pWH3bu8RgzsUqPsLuQMN99f0zuEjA6XNz0Zxy2ImQ/dMGjLQh3HdpeMYRhFOGLf7M7QjSF44wlehBxgOTUyemuQmnhweRMd4+W1+C0w5JRpTHkec+A201KMQ+JKGvuM32/9DPETukbhLb17AsDQiJ53t1QeAmSQGiBRnLTMFBkMU7LfuRkXEZy1WVkOhEXo3S88c8a/NqLDr3x5DXFX/M+ri93VqrgZLkchwh6hnMIAb5DcRhhLy3jwAj/sL9xCAGMci/RT4EGABpdqm+2pZkpQAAAABJRU5ErkJggg==',
        ),
      ),
    ),
    'field_small_icon' => array(
      'und' => array(
        0 => array(
          'fid' => NULL,
          'alt' => '',
          'title' => '',
          'width' => '24',
          'height' => '24',
          'uid' => '1',
          'filename' => 'social-sm.png',
          'uri' => 'public://application_category/icons/social-sm.png',
          'filemime' => 'image/png',
          'filesize' => '1880',
          'status' => '1',
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => '54336f1f-80f0-4d23-97bb-4d0369792647',
          'rdf_mapping' => array(),
          'uuid_features_file_data' => 'iVBORw0KGgoAAAANSUhEUgAAABgAAAAYCAMAAADXqc3KAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAyJpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuMC1jMDYwIDYxLjEzNDc3NywgMjAxMC8wMi8xMi0xNzozMjowMCAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvIiB4bWxuczp4bXBNTT0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL21tLyIgeG1sbnM6c3RSZWY9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9zVHlwZS9SZXNvdXJjZVJlZiMiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENTNSBNYWNpbnRvc2giIHhtcE1NOkluc3RhbmNlSUQ9InhtcC5paWQ6MTk1RjUzRUY2QzFGMTFFMkJGMDM5NTZEMjcyQjU0QzMiIHhtcE1NOkRvY3VtZW50SUQ9InhtcC5kaWQ6MTk1RjUzRjA2QzFGMTFFMkJGMDM5NTZEMjcyQjU0QzMiPiA8eG1wTU06RGVyaXZlZEZyb20gc3RSZWY6aW5zdGFuY2VJRD0ieG1wLmlpZDoxOTVGNTNFRDZDMUYxMUUyQkYwMzk1NkQyNzJCNTRDMyIgc3RSZWY6ZG9jdW1lbnRJRD0ieG1wLmRpZDoxOTVGNTNFRTZDMUYxMUUyQkYwMzk1NkQyNzJCNTRDMyIvPiA8L3JkZjpEZXNjcmlwdGlvbj4gPC9yZGY6UkRGPiA8L3g6eG1wbWV0YT4gPD94cGFja2V0IGVuZD0iciI/PqcqI/4AAAMAUExURf3o2/vQt/m5lPi7o/vd0fWZdv759vioefm0i/729P3u6P3t5PnDr/7z7fzl3fKAU/SRavzcyfezmPrMuvOIX/vWwPiugvvLr/zi0vq/nfrFpvvUxvWigfaqjfF3SPeicP///yEhISIiIiMjIyQkJCUlJSYmJicnJygoKCkpKSoqKisrKywsLC0tLS4uLi8vLzAwMDExMTIyMjMzMzQ0NDU1NTY2Njc3Nzg4ODk5OTo6Ojs7Ozw8PD09PT4+Pj8/P0BAQEFBQUJCQkNDQ0REREVFRUZGRkdHR0hISElJSUpKSktLS0xMTE1NTU5OTk9PT1BQUFFRUVJSUlNTU1RUVFVVVVZWVldXV1hYWFlZWVpaWltbW1xcXF1dXV5eXl9fX2BgYGFhYWJiYmNjY2RkZGVlZWZmZmdnZ2hoaGlpaWpqamtra2xsbG1tbW5ubm9vb3BwcHFxcXJycnNzc3R0dHV1dXZ2dnd3d3h4eHl5eXp6ent7e3x8fH19fX5+fn9/f4CAgIGBgYKCgoODg4SEhIWFhYaGhoeHh4iIiImJiYqKiouLi4yMjI2NjY6Ojo+Pj5CQkJGRkZKSkpOTk5SUlJWVlZaWlpeXl5iYmJmZmZqampubm5ycnJ2dnZ6enp+fn6CgoKGhoaKioqOjo6SkpKWlpaampqenp6ioqKmpqaqqqqurq6ysrK2tra6urq+vr7CwsLGxsbKysrOzs7S0tLW1tba2tre3t7i4uLm5ubq6uru7u7y8vL29vb6+vr+/v8DAwMHBwcLCwsPDw8TExMXFxcbGxsfHx8jIyMnJycrKysvLy8zMzM3Nzc7Ozs/Pz9DQ0NHR0dLS0tPT09TU1NXV1dbW1tfX19jY2NnZ2dra2tvb29zc3N3d3d7e3t/f3+Dg4OHh4eLi4uPj4+Tk5OXl5ebm5ufn5+jo6Onp6erq6uvr6+zs7O3t7e7u7u/v7/Dw8PHx8fLy8vPz8/T09PX19fb29vf39/j4+Pn5+fr6+vv7+/z8/P39/f7+/v///wdBercAAAAhdFJOU///////////////////////////////////////////AJ/B0CEAAACTSURBVHjadJHbDoMgDIY7L2R4YOqFF1tS+/5PaVkBgUKTEvJ/6RmoY+Cf7xWtAkm/Xk2gUwXwwWA1QAWGHvgHEbUB+y/oWwD8takZh5KZQQoWW2j19U4FYisNMHvdAFnWXTG0kRrd7apUo0+1w4E1kTVAPm2mPwBLPQOIE+3PySJw7KOcqwREE7L0VsW7XSlwCzAAed1ESLLoUy4AAAAASUVORK5CYII=',
        ),
      ),
    ),
  );
  return $terms;
}
