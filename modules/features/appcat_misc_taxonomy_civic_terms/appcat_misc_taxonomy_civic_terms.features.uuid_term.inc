<?php
/**
 * @file
 * appcat_misc_taxonomy_civic_terms.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function appcat_misc_taxonomy_civic_terms_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Veterans Services',
    'description' => NULL,
    'format' => NULL,
    'weight' => '3',
    'uuid' => '0715623f-6bf6-455e-b533-42566a64bad2',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'c214b9dd-1ad2-be94-c9bd-142ccf84e8b5',
    ),
  );
  $terms[] = array(
    'name' => 'Rural',
    'description' => NULL,
    'format' => NULL,
    'weight' => '6',
    'uuid' => '07291011-2624-4734-9546-ec4ae60a83bf',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'cb03a3d7-abdd-481c-86c3-8c672ece2f1c',
    ),
  );
  $terms[] = array(
    'name' => 'Revenue & Taxes',
    'description' => NULL,
    'format' => NULL,
    'weight' => '5',
    'uuid' => '084a2c85-8c70-4e01-afd3-074ec875b726',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'cb03a3d7-abdd-481c-86c3-8c672ece2f1c',
    ),
  );
  $terms[] = array(
    'name' => 'IT Management',
    'description' => NULL,
    'format' => NULL,
    'weight' => '8',
    'uuid' => '17a620ad-e194-4ac7-a616-71d5da459e01',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'f6e42a9f-f4a0-c054-cdd4-c1ca7990ebfb',
    ),
  );
  $terms[] = array(
    'name' => 'Agriculture',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => '2958bd10-f3c7-4177-b63e-4a3d45bcb712',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'e1c64e63-1f7a-7bd4-b56f-928e66b711a8',
    ),
  );
  $terms[] = array(
    'name' => 'Libraries',
    'description' => NULL,
    'format' => NULL,
    'weight' => '1',
    'uuid' => '2d70e480-4dd7-4468-9397-b4905e75c1d2',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'c214b9dd-1ad2-be94-c9bd-142ccf84e8b5',
    ),
  );
  $terms[] = array(
    'name' => 'Education',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '4',
    'uuid' => '45d91cf3-3e47-4034-b5f3-06a42fa0c977',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(
      'und' => array(
        0 => array(
          'fid' => NULL,
          'alt' => '',
          'title' => '',
          'width' => '100',
          'height' => '100',
          'uid' => '1',
          'filename' => 'education.png',
          'uri' => 'public://civic_category/icons/education.png',
          'filemime' => 'image/png',
          'filesize' => '2105',
          'status' => '1',
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => 'de3b7bec-789e-4d10-884f-2a9788f85ea0',
          'rdf_mapping' => array(),
          'uuid_features_file_data' => 'iVBORw0KGgoAAAANSUhEUgAAAGQAAABkCAMAAABHPGVmAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAyJpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuMC1jMDYwIDYxLjEzNDc3NywgMjAxMC8wMi8xMi0xNzozMjowMCAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvIiB4bWxuczp4bXBNTT0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL21tLyIgeG1sbnM6c3RSZWY9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9zVHlwZS9SZXNvdXJjZVJlZiMiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENTNSBNYWNpbnRvc2giIHhtcE1NOkluc3RhbmNlSUQ9InhtcC5paWQ6RjQ3RTc4NTQ1QTZDMTFFMkI4ODRDN0YyNzhDOUM4MzQiIHhtcE1NOkRvY3VtZW50SUQ9InhtcC5kaWQ6RjQ3RTc4NTU1QTZDMTFFMkI4ODRDN0YyNzhDOUM4MzQiPiA8eG1wTU06RGVyaXZlZEZyb20gc3RSZWY6aW5zdGFuY2VJRD0ieG1wLmlpZDpGNDdFNzg1MjVBNkMxMUUyQjg4NEM3RjI3OEM5QzgzNCIgc3RSZWY6ZG9jdW1lbnRJRD0ieG1wLmRpZDpGNDdFNzg1MzVBNkMxMUUyQjg4NEM3RjI3OEM5QzgzNCIvPiA8L3JkZjpEZXNjcmlwdGlvbj4gPC9yZGY6UkRGPiA8L3g6eG1wbWV0YT4gPD94cGFja2V0IGVuZD0iciI/PmOQapQAAAMAUExURUBAQL+/v39/f2BgYDAwMO/v75+fnyAgIBAQEM/Pz4+Pj9/f36+vr3BwcFBQUAAAAP///xERERISEhMTExQUFBUVFRYWFhcXFxgYGBkZGRoaGhsbGxwcHB0dHR4eHh8fHyAgICEhISIiIiMjIyQkJCUlJSYmJicnJygoKCkpKSoqKisrKywsLC0tLS4uLi8vLzAwMDExMTIyMjMzMzQ0NDU1NTY2Njc3Nzg4ODk5OTo6Ojs7Ozw8PD09PT4+Pj8/P0BAQEFBQUJCQkNDQ0REREVFRUZGRkdHR0hISElJSUpKSktLS0xMTE1NTU5OTk9PT1BQUFFRUVJSUlNTU1RUVFVVVVZWVldXV1hYWFlZWVpaWltbW1xcXF1dXV5eXl9fX2BgYGFhYWJiYmNjY2RkZGVlZWZmZmdnZ2hoaGlpaWpqamtra2xsbG1tbW5ubm9vb3BwcHFxcXJycnNzc3R0dHV1dXZ2dnd3d3h4eHl5eXp6ent7e3x8fH19fX5+fn9/f4CAgIGBgYKCgoODg4SEhIWFhYaGhoeHh4iIiImJiYqKiouLi4yMjI2NjY6Ojo+Pj5CQkJGRkZKSkpOTk5SUlJWVlZaWlpeXl5iYmJmZmZqampubm5ycnJ2dnZ6enp+fn6CgoKGhoaKioqOjo6SkpKWlpaampqenp6ioqKmpqaqqqqurq6ysrK2tra6urq+vr7CwsLGxsbKysrOzs7S0tLW1tba2tre3t7i4uLm5ubq6uru7u7y8vL29vb6+vr+/v8DAwMHBwcLCwsPDw8TExMXFxcbGxsfHx8jIyMnJycrKysvLy8zMzM3Nzc7Ozs/Pz9DQ0NHR0dLS0tPT09TU1NXV1dbW1tfX19jY2NnZ2dra2tvb29zc3N3d3d7e3t/f3+Dg4OHh4eLi4uPj4+Tk5OXl5ebm5ufn5+jo6Onp6erq6uvr6+zs7O3t7e7u7u/v7/Dw8PHx8fLy8vPz8/T09PX19fb29vf39/j4+Pn5+fr6+vv7+/z8/P39/f7+/v///8vQTUYAAAARdFJOU/////////////////////8AJa2ZYgAAAYRJREFUeNrs2MGNgzAQBdAcfYMSXIJLcAmU4BLoYEpwCVOCS5gSKMEluIVVAAWH2IYsykrR/jlEOQw8GNuR8m/9H9QNCBAgQIAAAQLkS5EkIkTEItPRTe6tra4iEnm0XV5m8OV7CA1Zp7EU4ikkON2VSrmwexRvS3163/eCTE519dKUHhNiU+9TThpI48L18oVJpA4adR3JxusoyFxMLh+L4r7PCTOQXxqF8pU8RByn3VQnv72ke3zVo7ys6KjOIIpScSNNbjcRG8oblvUxkqrbPeZj01I/F+YQaZ267WVMarTZS8hDaRpXkbQe1PYvzUWk97Mx9B9F4ozwZ5HlKAkQIECAAAECBAgQIEC+AEmB7PInUVm3pR5PyD0f0WviMXJ8E0neVFKGDYnjPh8xYzyPiCunDJwhUgxWOsvnkMrl86NOK5KGeuARTiCumZnw/Omb0cq8TGeylcv1HxDbrOdd3e61v05TedtTg3wwsr0nrP44X0XCDQQIECBAgAD5JuRHgAEA18ryCf7Vbv4AAAAASUVORK5CYII=',
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
          'filename' => 'education-sm.png',
          'uri' => 'public://civic_category/icons/education-sm.png',
          'filemime' => 'image/png',
          'filesize' => '1861',
          'status' => '1',
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => 'fe3d3078-e1ad-4707-be52-5208e9f30052',
          'rdf_mapping' => array(),
          'uuid_features_file_data' => 'iVBORw0KGgoAAAANSUhEUgAAABgAAAAYCAMAAADXqc3KAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAyJpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuMC1jMDYwIDYxLjEzNDc3NywgMjAxMC8wMi8xMi0xNzozMjowMCAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvIiB4bWxuczp4bXBNTT0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL21tLyIgeG1sbnM6c3RSZWY9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9zVHlwZS9SZXNvdXJjZVJlZiMiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENTNSBNYWNpbnRvc2giIHhtcE1NOkluc3RhbmNlSUQ9InhtcC5paWQ6NjEzRjEwMTI1QTcyMTFFMkI4ODRDN0YyNzhDOUM4MzQiIHhtcE1NOkRvY3VtZW50SUQ9InhtcC5kaWQ6QjkwOTYzMUE1QTcyMTFFMkI4ODRDN0YyNzhDOUM4MzQiPiA8eG1wTU06RGVyaXZlZEZyb20gc3RSZWY6aW5zdGFuY2VJRD0ieG1wLmlpZDo2MTNGMTAxMDVBNzIxMUUyQjg4NEM3RjI3OEM5QzgzNCIgc3RSZWY6ZG9jdW1lbnRJRD0ieG1wLmRpZDo2MTNGMTAxMTVBNzIxMUUyQjg4NEM3RjI3OEM5QzgzNCIvPiA8L3JkZjpEZXNjcmlwdGlvbj4gPC9yZGY6UkRGPiA8L3g6eG1wbWV0YT4gPD94cGFja2V0IGVuZD0iciI/Pup2uOUAAAMAUExURQAAAH9/f0BAQL+/v+/v7yAgIFBQUN/f35+fnxAQEDAwMHBwcM/Pz2BgYI+Pj6+vr////xERERISEhMTExQUFBUVFRYWFhcXFxgYGBkZGRoaGhsbGxwcHB0dHR4eHh8fHyAgICEhISIiIiMjIyQkJCUlJSYmJicnJygoKCkpKSoqKisrKywsLC0tLS4uLi8vLzAwMDExMTIyMjMzMzQ0NDU1NTY2Njc3Nzg4ODk5OTo6Ojs7Ozw8PD09PT4+Pj8/P0BAQEFBQUJCQkNDQ0REREVFRUZGRkdHR0hISElJSUpKSktLS0xMTE1NTU5OTk9PT1BQUFFRUVJSUlNTU1RUVFVVVVZWVldXV1hYWFlZWVpaWltbW1xcXF1dXV5eXl9fX2BgYGFhYWJiYmNjY2RkZGVlZWZmZmdnZ2hoaGlpaWpqamtra2xsbG1tbW5ubm9vb3BwcHFxcXJycnNzc3R0dHV1dXZ2dnd3d3h4eHl5eXp6ent7e3x8fH19fX5+fn9/f4CAgIGBgYKCgoODg4SEhIWFhYaGhoeHh4iIiImJiYqKiouLi4yMjI2NjY6Ojo+Pj5CQkJGRkZKSkpOTk5SUlJWVlZaWlpeXl5iYmJmZmZqampubm5ycnJ2dnZ6enp+fn6CgoKGhoaKioqOjo6SkpKWlpaampqenp6ioqKmpqaqqqqurq6ysrK2tra6urq+vr7CwsLGxsbKysrOzs7S0tLW1tba2tre3t7i4uLm5ubq6uru7u7y8vL29vb6+vr+/v8DAwMHBwcLCwsPDw8TExMXFxcbGxsfHx8jIyMnJycrKysvLy8zMzM3Nzc7Ozs/Pz9DQ0NHR0dLS0tPT09TU1NXV1dbW1tfX19jY2NnZ2dra2tvb29zc3N3d3d7e3t/f3+Dg4OHh4eLi4uPj4+Tk5OXl5ebm5ufn5+jo6Onp6erq6uvr6+zs7O3t7e7u7u/v7/Dw8PHx8fLy8vPz8/T09PX19fb29vf39/j4+Pn5+fr6+vv7+/z8/P39/f7+/v///4eyb/oAAAARdFJOU/////////////////////8AJa2ZYgAAAJBJREFUeNrckTEVwzAMRG/1ZgiGYAiCIAiBYAaCUAiGUAiCEAiGIAqVlTTJ0L7XoVNuutPX03BC/iL8GZjqeo5sBLDOCVP1YTk/lzJ94g4BSFzkUXxa2xYgZewXFk+8h1EhdBxnnJ6uQCB3BRr1Bljd2waUo90kDU2iXLDSbPezOr01l8uRrq8dOn74+UuAAQBrcVZpWGFLigAAAABJRU5ErkJggg==',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Ranking',
    'description' => NULL,
    'format' => NULL,
    'weight' => '2',
    'uuid' => '47f66aff-8b82-4e22-a5fe-530b0c0f6aec',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'cb03a3d7-abdd-481c-86c3-8c672ece2f1c',
    ),
  );
  $terms[] = array(
    'name' => 'Public Works & Utilities',
    'description' => NULL,
    'format' => NULL,
    'weight' => '1',
    'uuid' => '52f59c2d-5d46-4dba-8934-abafa0fa6704',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'cb03a3d7-abdd-481c-86c3-8c672ece2f1c',
    ),
  );
  $terms[] = array(
    'name' => 'Dashboards',
    'description' => NULL,
    'format' => NULL,
    'weight' => '3',
    'uuid' => '5fa1cc97-e0a4-4fdb-a61a-29f9680980a3',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'f6e42a9f-f4a0-c054-cdd4-c1ca7990ebfb',
    ),
  );
  $terms[] = array(
    'name' => 'Public Safety & Emergency Management',
    'description' => NULL,
    'format' => NULL,
    'weight' => '2',
    'uuid' => '629a86a4-4db8-411b-8152-fa27317527e6',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'c214b9dd-1ad2-be94-c9bd-142ccf84e8b5',
    ),
  );
  $terms[] = array(
    'name' => 'Food and Nutrition',
    'description' => NULL,
    'format' => NULL,
    'weight' => '1',
    'uuid' => '768b8601-c9e7-4388-bb28-bf3e5feaba6c',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'c974fd94-0ab0-1424-0d23-9ef2fc6484f9',
    ),
  );
  $terms[] = array(
    'name' => 'Finance',
    'description' => NULL,
    'format' => NULL,
    'weight' => '6',
    'uuid' => '7fdd13e3-eaeb-4de1-8b2d-31f7e1e83f97',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'f6e42a9f-f4a0-c054-cdd4-c1ca7990ebfb',
    ),
  );
  $terms[] = array(
    'name' => 'Engagement',
    'description' => NULL,
    'format' => NULL,
    'weight' => '5',
    'uuid' => '806f8bd2-3335-460b-b779-4bd7040d8008',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'f6e42a9f-f4a0-c054-cdd4-c1ca7990ebfb',
    ),
  );
  $terms[] = array(
    'name' => 'Recommendation Systems',
    'description' => NULL,
    'format' => NULL,
    'weight' => '4',
    'uuid' => '80bec73b-f9b7-4c33-8875-162c354e7d7c',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'cb03a3d7-abdd-481c-86c3-8c672ece2f1c',
    ),
  );
  $terms[] = array(
    'name' => 'Transparency',
    'description' => NULL,
    'format' => NULL,
    'weight' => '11',
    'uuid' => '84d5d2da-d039-4146-a10c-1623e9d8779d',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'f6e42a9f-f4a0-c054-cdd4-c1ca7990ebfb',
    ),
  );
  $terms[] = array(
    'name' => 'Participatory Budgeting',
    'description' => NULL,
    'format' => NULL,
    'weight' => '10',
    'uuid' => '86ce5ebc-1080-4aa3-ad70-b2cbe503ae18',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'f6e42a9f-f4a0-c054-cdd4-c1ca7990ebfb',
    ),
  );
  $terms[] = array(
    'name' => 'Resource Sharing',
    'description' => NULL,
    'format' => NULL,
    'weight' => '3',
    'uuid' => '87c9606a-9700-44d6-a92e-f84809e5d160',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'e1c64e63-1f7a-7bd4-b56f-928e66b711a8',
    ),
  );
  $terms[] = array(
    'name' => 'Water',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '32',
    'uuid' => '8f6dc846-f4d5-b4e4-79a1-6053a34afaac',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(
      'und' => array(
        0 => array(
          'fid' => NULL,
          'alt' => '',
          'title' => '',
          'width' => '100',
          'height' => '100',
          'uid' => '1',
          'filename' => 'water.png',
          'uri' => 'public://civic_category/icons/water.png',
          'filemime' => 'image/png',
          'filesize' => '2256',
          'status' => '1',
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => 'b5fa1376-300e-411c-8f5f-27ccc8f5c5ff',
          'rdf_mapping' => array(),
          'uuid_features_file_data' => 'iVBORw0KGgoAAAANSUhEUgAAAGQAAABkCAMAAABHPGVmAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAyJpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuMC1jMDYwIDYxLjEzNDc3NywgMjAxMC8wMi8xMi0xNzozMjowMCAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvIiB4bWxuczp4bXBNTT0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL21tLyIgeG1sbnM6c3RSZWY9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9zVHlwZS9SZXNvdXJjZVJlZiMiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENTNSBNYWNpbnRvc2giIHhtcE1NOkluc3RhbmNlSUQ9InhtcC5paWQ6RjQ3RTc4NTg1QTZDMTFFMkI4ODRDN0YyNzhDOUM4MzQiIHhtcE1NOkRvY3VtZW50SUQ9InhtcC5kaWQ6RjQ3RTc4NTk1QTZDMTFFMkI4ODRDN0YyNzhDOUM4MzQiPiA8eG1wTU06RGVyaXZlZEZyb20gc3RSZWY6aW5zdGFuY2VJRD0ieG1wLmlpZDpGNDdFNzg1NjVBNkMxMUUyQjg4NEM3RjI3OEM5QzgzNCIgc3RSZWY6ZG9jdW1lbnRJRD0ieG1wLmRpZDpGNDdFNzg1NzVBNkMxMUUyQjg4NEM3RjI3OEM5QzgzNCIvPiA8L3JkZjpEZXNjcmlwdGlvbj4gPC9yZGY6UkRGPiA8L3g6eG1wbWV0YT4gPD94cGFja2V0IGVuZD0iciI/Piz8ktYAAAMAUExURUBAQGBgYO/v79/f3xAQEL+/v39/f5+fn1BQUDAwMK+vryAgII+Pj3BwcM/PzwAAAP///xERERISEhMTExQUFBUVFRYWFhcXFxgYGBkZGRoaGhsbGxwcHB0dHR4eHh8fHyAgICEhISIiIiMjIyQkJCUlJSYmJicnJygoKCkpKSoqKisrKywsLC0tLS4uLi8vLzAwMDExMTIyMjMzMzQ0NDU1NTY2Njc3Nzg4ODk5OTo6Ojs7Ozw8PD09PT4+Pj8/P0BAQEFBQUJCQkNDQ0REREVFRUZGRkdHR0hISElJSUpKSktLS0xMTE1NTU5OTk9PT1BQUFFRUVJSUlNTU1RUVFVVVVZWVldXV1hYWFlZWVpaWltbW1xcXF1dXV5eXl9fX2BgYGFhYWJiYmNjY2RkZGVlZWZmZmdnZ2hoaGlpaWpqamtra2xsbG1tbW5ubm9vb3BwcHFxcXJycnNzc3R0dHV1dXZ2dnd3d3h4eHl5eXp6ent7e3x8fH19fX5+fn9/f4CAgIGBgYKCgoODg4SEhIWFhYaGhoeHh4iIiImJiYqKiouLi4yMjI2NjY6Ojo+Pj5CQkJGRkZKSkpOTk5SUlJWVlZaWlpeXl5iYmJmZmZqampubm5ycnJ2dnZ6enp+fn6CgoKGhoaKioqOjo6SkpKWlpaampqenp6ioqKmpqaqqqqurq6ysrK2tra6urq+vr7CwsLGxsbKysrOzs7S0tLW1tba2tre3t7i4uLm5ubq6uru7u7y8vL29vb6+vr+/v8DAwMHBwcLCwsPDw8TExMXFxcbGxsfHx8jIyMnJycrKysvLy8zMzM3Nzc7Ozs/Pz9DQ0NHR0dLS0tPT09TU1NXV1dbW1tfX19jY2NnZ2dra2tvb29zc3N3d3d7e3t/f3+Dg4OHh4eLi4uPj4+Tk5OXl5ebm5ufn5+jo6Onp6erq6uvr6+zs7O3t7e7u7u/v7/Dw8PHx8fLy8vPz8/T09PX19fb29vf39/j4+Pn5+fr6+vv7+/z8/P39/f7+/v///xYekx0AAAARdFJOU/////////////////////8AJa2ZYgAAAhtJREFUeNrs2V2RhDAMAOA89D1IQEIlIAEJlYCDSkACEpBQCUhAQi0cP7tzuzPQpD9h5uaa97tvMqFp0oXmgYCKVKQiFfkXiH0CMU8g+ADicJFHJpzkEYNGHtGoxRGPiF4amTZkkkbMhhhpRG2IEkYW3GORRYYDGWSR9kBaUWTGM5wkYl6IEUT8y0Dl5ZDxjUSeR4gve3zpYxCHv+GkkO4D6YSQFT9jlUHMF2JEkO9EolKBxESiUoHURGJSgdREYlKB5EQiUuEi/QXSF0YcXoUri3SXSFcUmfE65pJIe4O0BZER72Ishnh1i/CuSA5i8T5sIWTFUKxlEBNETBHEYThcCaQjkK4AQiXCSQVyE+GkQiFTGFCsSY9CNJHGfgXoTISsiFWMqkBmRXrLqApkHPazeTGOPTC2t3BbMfR+B0n3yOcpcfS9AvSuG4752LqXdGRkIPZooGM6YljIRPZiyGspO+LIj7gA4uWRbSqSR1wu0jMQf7SFPh2xtKHO8dKmIzON9GfvmdMRTyPj2Xt8Ru/SdH88zqLOaZBkX9GNb+mRGFKn4PdDzsCYiCF9DD7++8QZiKHJScVOrNGemlaCVVEDb0khh7uec1RyEU99xtrnI80aLotiLCiM/WQJ5aI5r92snfG+5XfFdsb748L8OZD5IrFevq1wX3DYT1GL+f4AlBF479qvl+FdnG6YI/6u/opdkYpU5E8iPwIMAFHEyL1jBDYTAAAAAElFTkSuQmCC',
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
          'filename' => 'water-sm.png',
          'uri' => 'public://civic_category/icons/water-sm.png',
          'filemime' => 'image/png',
          'filesize' => '1861',
          'status' => '1',
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => 'ce9e45e8-dcad-46cf-b97a-17ca6030eaa0',
          'rdf_mapping' => array(),
          'uuid_features_file_data' => 'iVBORw0KGgoAAAANSUhEUgAAABgAAAAYCAMAAADXqc3KAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAyJpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuMC1jMDYwIDYxLjEzNDc3NywgMjAxMC8wMi8xMi0xNzozMjowMCAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvIiB4bWxuczp4bXBNTT0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL21tLyIgeG1sbnM6c3RSZWY9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9zVHlwZS9SZXNvdXJjZVJlZiMiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENTNSBNYWNpbnRvc2giIHhtcE1NOkluc3RhbmNlSUQ9InhtcC5paWQ6QjkwOTYzMjE1QTcyMTFFMkI4ODRDN0YyNzhDOUM4MzQiIHhtcE1NOkRvY3VtZW50SUQ9InhtcC5kaWQ6QjkwOTYzMjI1QTcyMTFFMkI4ODRDN0YyNzhDOUM4MzQiPiA8eG1wTU06RGVyaXZlZEZyb20gc3RSZWY6aW5zdGFuY2VJRD0ieG1wLmlpZDpCOTA5NjMxRjVBNzIxMUUyQjg4NEM3RjI3OEM5QzgzNCIgc3RSZWY6ZG9jdW1lbnRJRD0ieG1wLmRpZDpCOTA5NjMyMDVBNzIxMUUyQjg4NEM3RjI3OEM5QzgzNCIvPiA8L3JkZjpEZXNjcmlwdGlvbj4gPC9yZGY6UkRGPiA8L3g6eG1wbWV0YT4gPD94cGFja2V0IGVuZD0iciI/PirWVBoAAAMAUExURX9/f5+fnxAQECAgIL+/v+/v76+vr2BgYDAwMM/Pz4+PjwAAAP///w0NDQ4ODg8PDxAQEBERERISEhMTExQUFBUVFRYWFhcXFxgYGBkZGRoaGhsbGxwcHB0dHR4eHh8fHyAgICEhISIiIiMjIyQkJCUlJSYmJicnJygoKCkpKSoqKisrKywsLC0tLS4uLi8vLzAwMDExMTIyMjMzMzQ0NDU1NTY2Njc3Nzg4ODk5OTo6Ojs7Ozw8PD09PT4+Pj8/P0BAQEFBQUJCQkNDQ0REREVFRUZGRkdHR0hISElJSUpKSktLS0xMTE1NTU5OTk9PT1BQUFFRUVJSUlNTU1RUVFVVVVZWVldXV1hYWFlZWVpaWltbW1xcXF1dXV5eXl9fX2BgYGFhYWJiYmNjY2RkZGVlZWZmZmdnZ2hoaGlpaWpqamtra2xsbG1tbW5ubm9vb3BwcHFxcXJycnNzc3R0dHV1dXZ2dnd3d3h4eHl5eXp6ent7e3x8fH19fX5+fn9/f4CAgIGBgYKCgoODg4SEhIWFhYaGhoeHh4iIiImJiYqKiouLi4yMjI2NjY6Ojo+Pj5CQkJGRkZKSkpOTk5SUlJWVlZaWlpeXl5iYmJmZmZqampubm5ycnJ2dnZ6enp+fn6CgoKGhoaKioqOjo6SkpKWlpaampqenp6ioqKmpqaqqqqurq6ysrK2tra6urq+vr7CwsLGxsbKysrOzs7S0tLW1tba2tre3t7i4uLm5ubq6uru7u7y8vL29vb6+vr+/v8DAwMHBwcLCwsPDw8TExMXFxcbGxsfHx8jIyMnJycrKysvLy8zMzM3Nzc7Ozs/Pz9DQ0NHR0dLS0tPT09TU1NXV1dbW1tfX19jY2NnZ2dra2tvb29zc3N3d3d7e3t/f3+Dg4OHh4eLi4uPj4+Tk5OXl5ebm5ufn5+jo6Onp6erq6uvr6+zs7O3t7e7u7u/v7/Dw8PHx8fLy8vPz8/T09PX19fb29vf39/j4+Pn5+fr6+vv7+/z8/P39/f7+/v///5/JjKgAAAANdFJOU////////////////wA96CKGAAAAlElEQVR42nTQURmFIAwF4L0fHxZhEYhEEyIYYRGIQASjUEHvneAQPE/A/w080uZS3Jo8pC/AB2TkNUTENTB4CQpAVyAXhAUU/FJmkD/IBAqLvqDKDVJHSGhJA1TuwNXDM9BGqJXuEXZQ/IB1oemmYnfRUMJAHzgcKA73uPTzEMR/VXYjeWge+3l8/cTdqvB+708BBgC5ODIIgKaY0QAAAABJRU5ErkJggg==',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Housing',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '26',
    'uuid' => '9333a979-dcb9-ed04-dd48-145b04fc9e93',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(
      'und' => array(
        0 => array(
          'fid' => NULL,
          'alt' => '',
          'title' => '',
          'width' => '100',
          'height' => '100',
          'uid' => '1',
          'filename' => 'housing.png',
          'uri' => 'public://civic_category/icons/housing.png',
          'filemime' => 'image/png',
          'filesize' => '2046',
          'status' => '1',
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => '77b67faf-f766-46c9-a00b-8b2550e869a9',
          'rdf_mapping' => array(),
          'uuid_features_file_data' => 'iVBORw0KGgoAAAANSUhEUgAAAGQAAABkCAMAAABHPGVmAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAyJpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuMC1jMDYwIDYxLjEzNDc3NywgMjAxMC8wMi8xMi0xNzozMjowMCAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvIiB4bWxuczp4bXBNTT0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL21tLyIgeG1sbnM6c3RSZWY9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9zVHlwZS9SZXNvdXJjZVJlZiMiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENTNSBNYWNpbnRvc2giIHhtcE1NOkluc3RhbmNlSUQ9InhtcC5paWQ6MzM4RDE4RjM1QTcyMTFFMkI4ODRDN0YyNzhDOUM4MzQiIHhtcE1NOkRvY3VtZW50SUQ9InhtcC5kaWQ6MzM4RDE4RjQ1QTcyMTFFMkI4ODRDN0YyNzhDOUM4MzQiPiA8eG1wTU06RGVyaXZlZEZyb20gc3RSZWY6aW5zdGFuY2VJRD0ieG1wLmlpZDozMzhEMThGMTVBNzIxMUUyQjg4NEM3RjI3OEM5QzgzNCIgc3RSZWY6ZG9jdW1lbnRJRD0ieG1wLmRpZDozMzhEMThGMjVBNzIxMUUyQjg4NEM3RjI3OEM5QzgzNCIvPiA8L3JkZjpEZXNjcmlwdGlvbj4gPC9yZGY6UkRGPiA8L3g6eG1wbWV0YT4gPD94cGFja2V0IGVuZD0iciI/PuaDv2AAAAMAUExURX9/f7+/v+/v7xAQEN/f33BwcEBAQCAgIK+vr1BQUI+Pj8/PzzAwMGBgYJ+fnwAAAP///xERERISEhMTExQUFBUVFRYWFhcXFxgYGBkZGRoaGhsbGxwcHB0dHR4eHh8fHyAgICEhISIiIiMjIyQkJCUlJSYmJicnJygoKCkpKSoqKisrKywsLC0tLS4uLi8vLzAwMDExMTIyMjMzMzQ0NDU1NTY2Njc3Nzg4ODk5OTo6Ojs7Ozw8PD09PT4+Pj8/P0BAQEFBQUJCQkNDQ0REREVFRUZGRkdHR0hISElJSUpKSktLS0xMTE1NTU5OTk9PT1BQUFFRUVJSUlNTU1RUVFVVVVZWVldXV1hYWFlZWVpaWltbW1xcXF1dXV5eXl9fX2BgYGFhYWJiYmNjY2RkZGVlZWZmZmdnZ2hoaGlpaWpqamtra2xsbG1tbW5ubm9vb3BwcHFxcXJycnNzc3R0dHV1dXZ2dnd3d3h4eHl5eXp6ent7e3x8fH19fX5+fn9/f4CAgIGBgYKCgoODg4SEhIWFhYaGhoeHh4iIiImJiYqKiouLi4yMjI2NjY6Ojo+Pj5CQkJGRkZKSkpOTk5SUlJWVlZaWlpeXl5iYmJmZmZqampubm5ycnJ2dnZ6enp+fn6CgoKGhoaKioqOjo6SkpKWlpaampqenp6ioqKmpqaqqqqurq6ysrK2tra6urq+vr7CwsLGxsbKysrOzs7S0tLW1tba2tre3t7i4uLm5ubq6uru7u7y8vL29vb6+vr+/v8DAwMHBwcLCwsPDw8TExMXFxcbGxsfHx8jIyMnJycrKysvLy8zMzM3Nzc7Ozs/Pz9DQ0NHR0dLS0tPT09TU1NXV1dbW1tfX19jY2NnZ2dra2tvb29zc3N3d3d7e3t/f3+Dg4OHh4eLi4uPj4+Tk5OXl5ebm5ufn5+jo6Onp6erq6uvr6+zs7O3t7e7u7u/v7/Dw8PHx8fLy8vPz8/T09PX19fb29vf39/j4+Pn5+fr6+vv7+/z8/P39/f7+/v///1n+ZfUAAAARdFJOU/////////////////////8AJa2ZYgAAAUlJREFUeNrs2V2xwyAQBeCdQQCRgIRIiIRKqAQcICESroRIQEIkIAELvZM7t1OSAstfX3r2OZNvzkJ2H0LTB4qAAAECBAiQS7nxiNdS+8GIVVJKtY1E/E3+1c0PQzYh/0tsY5BnjOIwVBOjNAwXcYu81uK6IquQ70qs/ZAghplMaRgqjLHsJ5QThopiPN94cduQSG9OHWxC9jnamNcw896AJI+YH4a4MX4y32cqDKVmenaGBJMmvgEoOdPzA+Q1jLJlCCcGPwxlY2Q3VPCw5SL+zur0+9h3z0JYbS46QKq8MEVnSO0x8mEotWHrKwwTIkL2KhFHdDdEJ9qlOhkq0a7JHlGNqX67MUfLbfJ26WOmNyDHBtDpK+zn9bRHSpHfdTZ7zuxqQ5gDEggQIECAAAECBAgQIECAAIkhztaWwy9AIECAAPlK5CHAAExX/Uu6fnd4AAAAAElFTkSuQmCC',
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
          'filename' => 'housing-sm.png',
          'uri' => 'public://civic_category/icons/housing-sm.png',
          'filemime' => 'image/png',
          'filesize' => '1851',
          'status' => '1',
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => '41ce4c85-e1ab-4e99-97fb-e8643396af2f',
          'rdf_mapping' => array(),
          'uuid_features_file_data' => 'iVBORw0KGgoAAAANSUhEUgAAABgAAAAYCAMAAADXqc3KAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAyJpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuMC1jMDYwIDYxLjEzNDc3NywgMjAxMC8wMi8xMi0xNzozMjowMCAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvIiB4bWxuczp4bXBNTT0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL21tLyIgeG1sbnM6c3RSZWY9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9zVHlwZS9SZXNvdXJjZVJlZiMiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENTNSBNYWNpbnRvc2giIHhtcE1NOkluc3RhbmNlSUQ9InhtcC5paWQ6RjE2QTU4RkU1QTcyMTFFMkI4ODRDN0YyNzhDOUM4MzQiIHhtcE1NOkRvY3VtZW50SUQ9InhtcC5kaWQ6RjE2QTU4RkY1QTcyMTFFMkI4ODRDN0YyNzhDOUM4MzQiPiA8eG1wTU06RGVyaXZlZEZyb20gc3RSZWY6aW5zdGFuY2VJRD0ieG1wLmlpZDpCOTA5NjMyMzVBNzIxMUUyQjg4NEM3RjI3OEM5QzgzNCIgc3RSZWY6ZG9jdW1lbnRJRD0ieG1wLmRpZDpCOTA5NjMyNDVBNzIxMUUyQjg4NEM3RjI3OEM5QzgzNCIvPiA8L3JkZjpEZXNjcmlwdGlvbj4gPC9yZGY6UkRGPiA8L3g6eG1wbWV0YT4gPD94cGFja2V0IGVuZD0iciI/Plg2+qwAAAMAUExURUBAQL+/vxAQEM/Pz+/v76+vryAgIN/f339/fzAwMHBwcI+Pj1BQUJ+fn2BgYAAAAP///xERERISEhMTExQUFBUVFRYWFhcXFxgYGBkZGRoaGhsbGxwcHB0dHR4eHh8fHyAgICEhISIiIiMjIyQkJCUlJSYmJicnJygoKCkpKSoqKisrKywsLC0tLS4uLi8vLzAwMDExMTIyMjMzMzQ0NDU1NTY2Njc3Nzg4ODk5OTo6Ojs7Ozw8PD09PT4+Pj8/P0BAQEFBQUJCQkNDQ0REREVFRUZGRkdHR0hISElJSUpKSktLS0xMTE1NTU5OTk9PT1BQUFFRUVJSUlNTU1RUVFVVVVZWVldXV1hYWFlZWVpaWltbW1xcXF1dXV5eXl9fX2BgYGFhYWJiYmNjY2RkZGVlZWZmZmdnZ2hoaGlpaWpqamtra2xsbG1tbW5ubm9vb3BwcHFxcXJycnNzc3R0dHV1dXZ2dnd3d3h4eHl5eXp6ent7e3x8fH19fX5+fn9/f4CAgIGBgYKCgoODg4SEhIWFhYaGhoeHh4iIiImJiYqKiouLi4yMjI2NjY6Ojo+Pj5CQkJGRkZKSkpOTk5SUlJWVlZaWlpeXl5iYmJmZmZqampubm5ycnJ2dnZ6enp+fn6CgoKGhoaKioqOjo6SkpKWlpaampqenp6ioqKmpqaqqqqurq6ysrK2tra6urq+vr7CwsLGxsbKysrOzs7S0tLW1tba2tre3t7i4uLm5ubq6uru7u7y8vL29vb6+vr+/v8DAwMHBwcLCwsPDw8TExMXFxcbGxsfHx8jIyMnJycrKysvLy8zMzM3Nzc7Ozs/Pz9DQ0NHR0dLS0tPT09TU1NXV1dbW1tfX19jY2NnZ2dra2tvb29zc3N3d3d7e3t/f3+Dg4OHh4eLi4uPj4+Tk5OXl5ebm5ufn5+jo6Onp6erq6uvr6+zs7O3t7e7u7u/v7/Dw8PHx8fLy8vPz8/T09PX19fb29vf39/j4+Pn5+fr6+vv7+/z8/P39/f7+/v///06ohm0AAAARdFJOU/////////////////////8AJa2ZYgAAAIZJREFUeNpiEMABGIiS2I9d4rwDv8N5LBL1/CBQjy5x3oCfnymBiZ/f4DyKBEi5w32B+w5wTWCJ/SDl/WB+P0jTfojE+wKgsoD3UDPfBwB5Be+BEvsVgMrXIzl0PVCTwn6G+fzYAcN9fiYFDFEFJn4GgfXvHTAkHN6vB7kKiwTEuSNTAiDAADl9PeCRqgW2AAAAAElFTkSuQmCC',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Survey',
    'description' => NULL,
    'format' => NULL,
    'weight' => '7',
    'uuid' => '9e08790d-23f9-49c4-bad4-b6602852f3b0',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'cb03a3d7-abdd-481c-86c3-8c672ece2f1c',
    ),
  );
  $terms[] = array(
    'name' => 'Gender',
    'description' => NULL,
    'format' => NULL,
    'weight' => '2',
    'uuid' => 'bd5eeaf2-ba66-4761-bcab-be4beb9a17b2',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'c974fd94-0ab0-1424-0d23-9ef2fc6484f9',
    ),
  );
  $terms[] = array(
    'name' => 'Human Services',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '29',
    'uuid' => 'c214b9dd-1ad2-be94-c9bd-142ccf84e8b5',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(
      'und' => array(
        0 => array(
          'fid' => NULL,
          'alt' => '',
          'title' => '',
          'width' => '100',
          'height' => '100',
          'uid' => '1',
          'filename' => 'human-services.png',
          'uri' => 'public://civic_category/icons/human-services.png',
          'filemime' => 'image/png',
          'filesize' => '2600',
          'status' => '1',
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => '5ca299f2-6b02-4563-859e-8efbd6163c80',
          'rdf_mapping' => array(),
          'uuid_features_file_data' => 'iVBORw0KGgoAAAANSUhEUgAAAGQAAABkCAMAAABHPGVmAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAyJpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuMC1jMDYwIDYxLjEzNDc3NywgMjAxMC8wMi8xMi0xNzozMjowMCAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvIiB4bWxuczp4bXBNTT0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL21tLyIgeG1sbnM6c3RSZWY9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9zVHlwZS9SZXNvdXJjZVJlZiMiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENTNSBNYWNpbnRvc2giIHhtcE1NOkluc3RhbmNlSUQ9InhtcC5paWQ6MzM4RDE4RUY1QTcyMTFFMkI4ODRDN0YyNzhDOUM4MzQiIHhtcE1NOkRvY3VtZW50SUQ9InhtcC5kaWQ6MzM4RDE4RjA1QTcyMTFFMkI4ODRDN0YyNzhDOUM4MzQiPiA8eG1wTU06RGVyaXZlZEZyb20gc3RSZWY6aW5zdGFuY2VJRD0ieG1wLmlpZDpGNDdFNzg1QTVBNkMxMUUyQjg4NEM3RjI3OEM5QzgzNCIgc3RSZWY6ZG9jdW1lbnRJRD0ieG1wLmRpZDozMzhEMThFRTVBNzIxMUUyQjg4NEM3RjI3OEM5QzgzNCIvPiA8L3JkZjpEZXNjcmlwdGlvbj4gPC9yZGY6UkRGPiA8L3g6eG1wbWV0YT4gPD94cGFja2V0IGVuZD0iciI/PjRSO3cAAAMAUExURb+/v0BAQH9/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',
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
          'filename' => 'human-services-sm.png',
          'uri' => 'public://civic_category/icons/human-services-sm.png',
          'filemime' => 'image/png',
          'filesize' => '1966',
          'status' => '1',
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => 'cd1b6258-ac09-4ef6-82b2-1959fd1c9734',
          'rdf_mapping' => array(),
          'uuid_features_file_data' => 'iVBORw0KGgoAAAANSUhEUgAAABgAAAAYCAMAAADXqc3KAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAyJpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuMC1jMDYwIDYxLjEzNDc3NywgMjAxMC8wMi8xMi0xNzozMjowMCAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvIiB4bWxuczp4bXBNTT0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL21tLyIgeG1sbnM6c3RSZWY9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9zVHlwZS9SZXNvdXJjZVJlZiMiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENTNSBNYWNpbnRvc2giIHhtcE1NOkluc3RhbmNlSUQ9InhtcC5paWQ6RjQ3RTc4NTA1QTZDMTFFMkI4ODRDN0YyNzhDOUM4MzQiIHhtcE1NOkRvY3VtZW50SUQ9InhtcC5kaWQ6RjQ3RTc4NTE1QTZDMTFFMkI4ODRDN0YyNzhDOUM4MzQiPiA8eG1wTU06RGVyaXZlZEZyb20gc3RSZWY6aW5zdGFuY2VJRD0ieG1wLmlpZDpFMDQwRThFQjU4MDQxMUUyQjg4NEM3RjI3OEM5QzgzNCIgc3RSZWY6ZG9jdW1lbnRJRD0ieG1wLmRpZDpFMDQwRThFQzU4MDQxMUUyQjg4NEM3RjI3OEM5QzgzNCIvPiA8L3JkZjpEZXNjcmlwdGlvbj4gPC9yZGY6UkRGPiA8L3g6eG1wbWV0YT4gPD94cGFja2V0IGVuZD0iciI/PqScQnAAAAMAUExURX9/f0BAQGBgYI+Pj7+/vyAgIJ+fn1BQUDAwMBAQEN/f38/Pz6+vr+/v73BwcAAAAP///xERERISEhMTExQUFBUVFRYWFhcXFxgYGBkZGRoaGhsbGxwcHB0dHR4eHh8fHyAgICEhISIiIiMjIyQkJCUlJSYmJicnJygoKCkpKSoqKisrKywsLC0tLS4uLi8vLzAwMDExMTIyMjMzMzQ0NDU1NTY2Njc3Nzg4ODk5OTo6Ojs7Ozw8PD09PT4+Pj8/P0BAQEFBQUJCQkNDQ0REREVFRUZGRkdHR0hISElJSUpKSktLS0xMTE1NTU5OTk9PT1BQUFFRUVJSUlNTU1RUVFVVVVZWVldXV1hYWFlZWVpaWltbW1xcXF1dXV5eXl9fX2BgYGFhYWJiYmNjY2RkZGVlZWZmZmdnZ2hoaGlpaWpqamtra2xsbG1tbW5ubm9vb3BwcHFxcXJycnNzc3R0dHV1dXZ2dnd3d3h4eHl5eXp6ent7e3x8fH19fX5+fn9/f4CAgIGBgYKCgoODg4SEhIWFhYaGhoeHh4iIiImJiYqKiouLi4yMjI2NjY6Ojo+Pj5CQkJGRkZKSkpOTk5SUlJWVlZaWlpeXl5iYmJmZmZqampubm5ycnJ2dnZ6enp+fn6CgoKGhoaKioqOjo6SkpKWlpaampqenp6ioqKmpqaqqqqurq6ysrK2tra6urq+vr7CwsLGxsbKysrOzs7S0tLW1tba2tre3t7i4uLm5ubq6uru7u7y8vL29vb6+vr+/v8DAwMHBwcLCwsPDw8TExMXFxcbGxsfHx8jIyMnJycrKysvLy8zMzM3Nzc7Ozs/Pz9DQ0NHR0dLS0tPT09TU1NXV1dbW1tfX19jY2NnZ2dra2tvb29zc3N3d3d7e3t/f3+Dg4OHh4eLi4uPj4+Tk5OXl5ebm5ufn5+jo6Onp6erq6uvr6+zs7O3t7e7u7u/v7/Dw8PHx8fLy8vPz8/T09PX19fb29vf39/j4+Pn5+fr6+vv7+/z8/P39/f7+/v///0OfdF8AAAARdFJOU/////////////////////8AJa2ZYgAAAPlJREFUeNqEklGVxSAMRPnlayIBCZWABCQgoQ6QEAlIqAQkIAEJWNgJr+2275w9m49Q5tJABpysOMpkVpU73GcAikgD+heY0R8i3YcvMDz4S2FCegElCCEwe8wnSIEAyEAMVcMvMBVbYK2Ys6YT9CFpI8jVQLM1TUZ3FRjTti1SsEU7OcoAHJe1weqhEsQTtBNYa5QukOcfoMj/YJaj0RI9aEzRfoL8NHWFajag3O6l84wKp0jxTcyZBEdnrfH81LcE74St7w9i+g5Umlit5EWo26wudyud5fywu+cYNuof23dcl5fW137fuRWw3iXiKnq/kgdYyo8AAwAWrGv5Cq8LvwAAAABJRU5ErkJggg==',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Urban',
    'description' => NULL,
    'format' => NULL,
    'weight' => '9',
    'uuid' => 'c21f466c-4fc7-4f16-98e6-9518df408c96',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'cb03a3d7-abdd-481c-86c3-8c672ece2f1c',
    ),
  );
  $terms[] = array(
    'name' => 'Recycling',
    'description' => NULL,
    'format' => NULL,
    'weight' => '2',
    'uuid' => 'c24c7d4f-412c-4bad-9e89-d5a44251ce4f',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'e1c64e63-1f7a-7bd4-b56f-928e66b711a8',
    ),
  );
  $terms[] = array(
    'name' => 'Petitions',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => 'c489eb70-7922-4ab6-8ca8-b7ab18e57551',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'cb03a3d7-abdd-481c-86c3-8c672ece2f1c',
    ),
  );
  $terms[] = array(
    'name' => 'Law & Justice',
    'description' => NULL,
    'format' => NULL,
    'weight' => '9',
    'uuid' => 'c4a3d329-5345-417f-af49-2ba1afc44caf',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'f6e42a9f-f4a0-c054-cdd4-c1ca7990ebfb',
    ),
  );
  $terms[] = array(
    'name' => 'Health',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '22',
    'uuid' => 'c974fd94-0ab0-1424-0d23-9ef2fc6484f9',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(
      'und' => array(
        0 => array(
          'fid' => NULL,
          'alt' => '',
          'title' => '',
          'width' => '100',
          'height' => '100',
          'uid' => '1',
          'filename' => 'health.png',
          'uri' => 'public://civic_category/icons/health.png',
          'filemime' => 'image/png',
          'filesize' => '2477',
          'status' => '1',
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => '36334cee-2419-4159-b911-ccee4286ec06',
          'rdf_mapping' => array(),
          'uuid_features_file_data' => 'iVBORw0KGgoAAAANSUhEUgAAAGQAAABkCAMAAABHPGVmAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAyJpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuMC1jMDYwIDYxLjEzNDc3NywgMjAxMC8wMi8xMi0xNzozMjowMCAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvIiB4bWxuczp4bXBNTT0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL21tLyIgeG1sbnM6c3RSZWY9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9zVHlwZS9SZXNvdXJjZVJlZiMiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENTNSBNYWNpbnRvc2giIHhtcE1NOkluc3RhbmNlSUQ9InhtcC5paWQ6MzM4RDE4Rjc1QTcyMTFFMkI4ODRDN0YyNzhDOUM4MzQiIHhtcE1NOkRvY3VtZW50SUQ9InhtcC5kaWQ6MzM4RDE4Rjg1QTcyMTFFMkI4ODRDN0YyNzhDOUM4MzQiPiA8eG1wTU06RGVyaXZlZEZyb20gc3RSZWY6aW5zdGFuY2VJRD0ieG1wLmlpZDozMzhEMThGNTVBNzIxMUUyQjg4NEM3RjI3OEM5QzgzNCIgc3RSZWY6ZG9jdW1lbnRJRD0ieG1wLmRpZDozMzhEMThGNjVBNzIxMUUyQjg4NEM3RjI3OEM5QzgzNCIvPiA8L3JkZjpEZXNjcmlwdGlvbj4gPC9yZGY6UkRGPiA8L3g6eG1wbWV0YT4gPD94cGFja2V0IGVuZD0iciI/Pgm3WWUAAAMAUExURUBAQL+/vxAQ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',
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
          'filename' => 'health-sm.png',
          'uri' => 'public://civic_category/icons/health-sm.png',
          'filemime' => 'image/png',
          'filesize' => '1927',
          'status' => '1',
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => 'a307b976-99aa-4bd7-94be-0f0919435a70',
          'rdf_mapping' => array(),
          'uuid_features_file_data' => 'iVBORw0KGgoAAAANSUhEUgAAABgAAAAYCAMAAADXqc3KAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAyJpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuMC1jMDYwIDYxLjEzNDc3NywgMjAxMC8wMi8xMi0xNzozMjowMCAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvIiB4bWxuczp4bXBNTT0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL21tLyIgeG1sbnM6c3RSZWY9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9zVHlwZS9SZXNvdXJjZVJlZiMiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENTNSBNYWNpbnRvc2giIHhtcE1NOkluc3RhbmNlSUQ9InhtcC5paWQ6RjE2QTU5MDI1QTcyMTFFMkI4ODRDN0YyNzhDOUM4MzQiIHhtcE1NOkRvY3VtZW50SUQ9InhtcC5kaWQ6RjE2QTU5MDM1QTcyMTFFMkI4ODRDN0YyNzhDOUM4MzQiPiA8eG1wTU06RGVyaXZlZEZyb20gc3RSZWY6aW5zdGFuY2VJRD0ieG1wLmlpZDpGMTZBNTkwMDVBNzIxMUUyQjg4NEM3RjI3OEM5QzgzNCIgc3RSZWY6ZG9jdW1lbnRJRD0ieG1wLmRpZDpGMTZBNTkwMTVBNzIxMUUyQjg4NEM3RjI3OEM5QzgzNCIvPiA8L3JkZjpEZXNjcmlwdGlvbj4gPC9yZGY6UkRGPiA8L3g6eG1wbWV0YT4gPD94cGFja2V0IGVuZD0iciI/PrG6xOQAAAMAUExURUBAQL+/v39/fxAQECAgIN/f35+fn8/PzzAwMHBwcK+vr1BQUO/v74+Pj2BgYAAAAP///xERERISEhMTExQUFBUVFRYWFhcXFxgYGBkZGRoaGhsbGxwcHB0dHR4eHh8fHyAgICEhISIiIiMjIyQkJCUlJSYmJicnJygoKCkpKSoqKisrKywsLC0tLS4uLi8vLzAwMDExMTIyMjMzMzQ0NDU1NTY2Njc3Nzg4ODk5OTo6Ojs7Ozw8PD09PT4+Pj8/P0BAQEFBQUJCQkNDQ0REREVFRUZGRkdHR0hISElJSUpKSktLS0xMTE1NTU5OTk9PT1BQUFFRUVJSUlNTU1RUVFVVVVZWVldXV1hYWFlZWVpaWltbW1xcXF1dXV5eXl9fX2BgYGFhYWJiYmNjY2RkZGVlZWZmZmdnZ2hoaGlpaWpqamtra2xsbG1tbW5ubm9vb3BwcHFxcXJycnNzc3R0dHV1dXZ2dnd3d3h4eHl5eXp6ent7e3x8fH19fX5+fn9/f4CAgIGBgYKCgoODg4SEhIWFhYaGhoeHh4iIiImJiYqKiouLi4yMjI2NjY6Ojo+Pj5CQkJGRkZKSkpOTk5SUlJWVlZaWlpeXl5iYmJmZmZqampubm5ycnJ2dnZ6enp+fn6CgoKGhoaKioqOjo6SkpKWlpaampqenp6ioqKmpqaqqqqurq6ysrK2tra6urq+vr7CwsLGxsbKysrOzs7S0tLW1tba2tre3t7i4uLm5ubq6uru7u7y8vL29vb6+vr+/v8DAwMHBwcLCwsPDw8TExMXFxcbGxsfHx8jIyMnJycrKysvLy8zMzM3Nzc7Ozs/Pz9DQ0NHR0dLS0tPT09TU1NXV1dbW1tfX19jY2NnZ2dra2tvb29zc3N3d3d7e3t/f3+Dg4OHh4eLi4uPj4+Tk5OXl5ebm5ufn5+jo6Onp6erq6uvr6+zs7O3t7e7u7u/v7/Dw8PHx8fLy8vPz8/T09PX19fb29vf39/j4+Pn5+fr6+vv7+/z8/P39/f7+/v///0uSp0kAAAARdFJOU/////////////////////8AJa2ZYgAAANJJREFUeNq00lERwyAMBuDeRUAiAQlIiAQkVAIOkFAJlYAEJCABCbOwnzBKuz2P3kHJB6FAN1nlTOfqbLc4M0Pa4BskQBJxzPEJGZClodYHtHJoKlW8zVuAFRQPx0gutQm19NTKGM14YWoDMDowYTShxqy+vIF+0syW2A2IX4B0tUPNQXMPnAuObex4BPwCv9lWZ+BqHQMs4C/w1oQJHKKlCo56b5cLdH6VFfqB3fetqzYA0Q1KYRz/OMSaeyjVH5BiIH+FF9GO/8OgFtwKIfgWYAANYF3AQ5SOogAAAABJRU5ErkJggg==',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Misc.',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '35',
    'uuid' => 'cb03a3d7-abdd-481c-86c3-8c672ece2f1c',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
  );
  $terms[] = array(
    'name' => 'Sanitation',
    'description' => NULL,
    'format' => NULL,
    'weight' => '3',
    'uuid' => 'da500a6e-be13-44f6-9edf-c1e15d756e00',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'c974fd94-0ab0-1424-0d23-9ef2fc6484f9',
    ),
  );
  $terms[] = array(
    'name' => 'Activism',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => 'dc22ec79-2c91-4cae-ad8b-d2ffa507e9ae',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'f6e42a9f-f4a0-c054-cdd4-c1ca7990ebfb',
    ),
  );
  $terms[] = array(
    'name' => 'Ratings',
    'description' => NULL,
    'format' => NULL,
    'weight' => '3',
    'uuid' => 'e1018135-c95e-45d8-b3cd-502b0360b2c4',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'cb03a3d7-abdd-481c-86c3-8c672ece2f1c',
    ),
  );
  $terms[] = array(
    'name' => 'Environment',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '8',
    'uuid' => 'e1c64e63-1f7a-7bd4-b56f-928e66b711a8',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(
      'und' => array(
        0 => array(
          'fid' => NULL,
          'alt' => '',
          'title' => '',
          'width' => '100',
          'height' => '100',
          'uid' => '1',
          'filename' => 'environment.png',
          'uri' => 'public://civic_category/icons/environment.png',
          'filemime' => 'image/png',
          'filesize' => '2473',
          'status' => '1',
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => 'af396f8d-2f48-4b86-a874-082908765e91',
          'rdf_mapping' => array(),
          'uuid_features_file_data' => 'iVBORw0KGgoAAAANSUhEUgAAAGQAAABkCAMAAABHPGVmAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAyJpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuMC1jMDYwIDYxLjEzNDc3NywgMjAxMC8wMi8xMi0xNzozMjowMCAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvIiB4bWxuczp4bXBNTT0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL21tLyIgeG1sbnM6c3RSZWY9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9zVHlwZS9SZXNvdXJjZVJlZiMiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENTNSBNYWNpbnRvc2giIHhtcE1NOkluc3RhbmNlSUQ9InhtcC5paWQ6NjEzRjEwMEU1QTcyMTFFMkI4ODRDN0YyNzhDOUM4MzQiIHhtcE1NOkRvY3VtZW50SUQ9InhtcC5kaWQ6NjEzRjEwMEY1QTcyMTFFMkI4ODRDN0YyNzhDOUM4MzQiPiA8eG1wTU06RGVyaXZlZEZyb20gc3RSZWY6aW5zdGFuY2VJRD0ieG1wLmlpZDo2MTNGMTAwQzVBNzIxMUUyQjg4NEM3RjI3OEM5QzgzNCIgc3RSZWY6ZG9jdW1lbnRJRD0ieG1wLmRpZDo2MTNGMTAwRDVBNzIxMUUyQjg4NEM3RjI3OEM5QzgzNCIvPiA8L3JkZjpEZXNjcmlwdGlvbj4gPC9yZGY6UkRGPiA8L3g6eG1wbWV0YT4gPD94cGFja2V0IGVuZD0iciI/PlgaPfQAAAMAUExURRAQEEBAQH9/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',
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
          'filename' => 'environment-sm.png',
          'uri' => 'public://civic_category/icons/environment-sm.png',
          'filemime' => 'image/png',
          'filesize' => '1904',
          'status' => '1',
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => 'ed973a6e-71ef-47a6-9890-53d5d6ab3e30',
          'rdf_mapping' => array(),
          'uuid_features_file_data' => 'iVBORw0KGgoAAAANSUhEUgAAABgAAAAYCAMAAADXqc3KAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAyJpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuMC1jMDYwIDYxLjEzNDc3NywgMjAxMC8wMi8xMi0xNzozMjowMCAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvIiB4bWxuczp4bXBNTT0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL21tLyIgeG1sbnM6c3RSZWY9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9zVHlwZS9SZXNvdXJjZVJlZiMiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENTNSBNYWNpbnRvc2giIHhtcE1NOkluc3RhbmNlSUQ9InhtcC5paWQ6MkVBNjRFNkQ1QTczMTFFMkI4ODRDN0YyNzhDOUM4MzQiIHhtcE1NOkRvY3VtZW50SUQ9InhtcC5kaWQ6MkVBNjRFNkU1QTczMTFFMkI4ODRDN0YyNzhDOUM4MzQiPiA8eG1wTU06RGVyaXZlZEZyb20gc3RSZWY6aW5zdGFuY2VJRD0ieG1wLmlpZDpGMTZBNTkwODVBNzIxMUUyQjg4NEM3RjI3OEM5QzgzNCIgc3RSZWY6ZG9jdW1lbnRJRD0ieG1wLmRpZDoyRUE2NEU2QzVBNzMxMUUyQjg4NEM3RjI3OEM5QzgzNCIvPiA8L3JkZjpEZXNjcmlwdGlvbj4gPC9yZGY6UkRGPiA8L3g6eG1wbWV0YT4gPD94cGFja2V0IGVuZD0iciI/Pv4WH5MAAAMAUExURRAQEGBgYDAwML+/v39/f+/v73BwcCAgII+Pj8/Pz9/f35+fn0BAQFBQUK+vrwAAAP///xERERISEhMTExQUFBUVFRYWFhcXFxgYGBkZGRoaGhsbGxwcHB0dHR4eHh8fHyAgICEhISIiIiMjIyQkJCUlJSYmJicnJygoKCkpKSoqKisrKywsLC0tLS4uLi8vLzAwMDExMTIyMjMzMzQ0NDU1NTY2Njc3Nzg4ODk5OTo6Ojs7Ozw8PD09PT4+Pj8/P0BAQEFBQUJCQkNDQ0REREVFRUZGRkdHR0hISElJSUpKSktLS0xMTE1NTU5OTk9PT1BQUFFRUVJSUlNTU1RUVFVVVVZWVldXV1hYWFlZWVpaWltbW1xcXF1dXV5eXl9fX2BgYGFhYWJiYmNjY2RkZGVlZWZmZmdnZ2hoaGlpaWpqamtra2xsbG1tbW5ubm9vb3BwcHFxcXJycnNzc3R0dHV1dXZ2dnd3d3h4eHl5eXp6ent7e3x8fH19fX5+fn9/f4CAgIGBgYKCgoODg4SEhIWFhYaGhoeHh4iIiImJiYqKiouLi4yMjI2NjY6Ojo+Pj5CQkJGRkZKSkpOTk5SUlJWVlZaWlpeXl5iYmJmZmZqampubm5ycnJ2dnZ6enp+fn6CgoKGhoaKioqOjo6SkpKWlpaampqenp6ioqKmpqaqqqqurq6ysrK2tra6urq+vr7CwsLGxsbKysrOzs7S0tLW1tba2tre3t7i4uLm5ubq6uru7u7y8vL29vb6+vr+/v8DAwMHBwcLCwsPDw8TExMXFxcbGxsfHx8jIyMnJycrKysvLy8zMzM3Nzc7Ozs/Pz9DQ0NHR0dLS0tPT09TU1NXV1dbW1tfX19jY2NnZ2dra2tvb29zc3N3d3d7e3t/f3+Dg4OHh4eLi4uPj4+Tk5OXl5ebm5ufn5+jo6Onp6erq6uvr6+zs7O3t7e7u7u/v7/Dw8PHx8fLy8vPz8/T09PX19fb29vf39/j4+Pn5+fr6+vv7+/z8/P39/f7+/v///5AlqVwAAAARdFJOU/////////////////////8AJa2ZYgAAALtJREFUeNqUkGEVhSAMhddgi2CERTCCERaBBkQgAhGMsAhGIMIqPBh4jiJ/nj88nu+7ssuAlk8mWPKEuhQX4AFrjvgVFhv/CBXHs7Cj020W3DHwJELPyzEdVRqt4RDgLZLHcd/m4bGBIHy3ysi7nEPAKf6HVGHenI20vlOfjwXus1GIBOLgwbdr9w4yD15DPlz8WjVwalMQaYji67Swt29Vr9jrXoyQZMuP7vBc1LUWCWkt9G9hrxk/AQYADYBIar8VJZEAAAAASUVORK5CYII=',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Direct Democracy',
    'description' => NULL,
    'format' => NULL,
    'weight' => '4',
    'uuid' => 'e3e4a8bb-1bf1-43ec-b242-57c1c745462c',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'f6e42a9f-f4a0-c054-cdd4-c1ca7990ebfb',
    ),
  );
  $terms[] = array(
    'name' => 'Information and communication technologies',
    'description' => NULL,
    'format' => NULL,
    'weight' => '7',
    'uuid' => 'ea53a1d6-3f24-4f3c-ac88-2ce8007c655d',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'f6e42a9f-f4a0-c054-cdd4-c1ca7990ebfb',
    ),
  );
  $terms[] = array(
    'name' => 'Transport',
    'description' => NULL,
    'format' => NULL,
    'weight' => '8',
    'uuid' => 'eb761a44-8155-4079-863a-d3531d14f698',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'cb03a3d7-abdd-481c-86c3-8c672ece2f1c',
    ),
  );
  $terms[] = array(
    'name' => 'Clinics',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => 'ebda5ed6-9ebd-4078-bb81-070d57f28850',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'c974fd94-0ab0-1424-0d23-9ef2fc6484f9',
    ),
  );
  $terms[] = array(
    'name' => 'Administration',
    'description' => NULL,
    'format' => NULL,
    'weight' => '1',
    'uuid' => 'ee205d1c-7359-48fd-80db-135326a7ffb6',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'f6e42a9f-f4a0-c054-cdd4-c1ca7990ebfb',
    ),
  );
  $terms[] = array(
    'name' => 'Citizen Services & 311',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => 'f136715c-d1f4-4132-b283-9933f90f4c6b',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'c214b9dd-1ad2-be94-c9bd-142ccf84e8b5',
    ),
  );
  $terms[] = array(
    'name' => 'Governance',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '16',
    'uuid' => 'f6e42a9f-f4a0-c054-cdd4-c1ca7990ebfb',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(
      'und' => array(
        0 => array(
          'fid' => NULL,
          'alt' => '',
          'title' => '',
          'width' => '100',
          'height' => '100',
          'uid' => '1',
          'filename' => 'governance.png',
          'uri' => 'public://civic_category/icons/governance.png',
          'filemime' => 'image/png',
          'filesize' => '1995',
          'status' => '1',
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => '4d8774f3-dd8a-490a-a414-a8391cbe1d4e',
          'rdf_mapping' => array(),
          'uuid_features_file_data' => 'iVBORw0KGgoAAAANSUhEUgAAAGQAAABkCAMAAABHPGVmAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAyJpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuMC1jMDYwIDYxLjEzNDc3NywgMjAxMC8wMi8xMi0xNzozMjowMCAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvIiB4bWxuczp4bXBNTT0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL21tLyIgeG1sbnM6c3RSZWY9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9zVHlwZS9SZXNvdXJjZVJlZiMiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENTNSBNYWNpbnRvc2giIHhtcE1NOkluc3RhbmNlSUQ9InhtcC5paWQ6NjEzRjEwMEE1QTcyMTFFMkI4ODRDN0YyNzhDOUM4MzQiIHhtcE1NOkRvY3VtZW50SUQ9InhtcC5kaWQ6NjEzRjEwMEI1QTcyMTFFMkI4ODRDN0YyNzhDOUM4MzQiPiA8eG1wTU06RGVyaXZlZEZyb20gc3RSZWY6aW5zdGFuY2VJRD0ieG1wLmlpZDo2MTNGMTAwODVBNzIxMUUyQjg4NEM3RjI3OEM5QzgzNCIgc3RSZWY6ZG9jdW1lbnRJRD0ieG1wLmRpZDo2MTNGMTAwOTVBNzIxMUUyQjg4NEM3RjI3OEM5QzgzNCIvPiA8L3JkZjpEZXNjcmlwdGlvbj4gPC9yZGY6UkRGPiA8L3g6eG1wbWV0YT4gPD94cGFja2V0IGVuZD0iciI/PtYU0hUAAAMAUExURb+/v39/f0BAQBAQEO/v78/PzzAwMCAgIHBwcI+Pj6+vr5+fn1BQUN/f32BgYAAAAP///xERERISEhMTExQUFBUVFRYWFhcXFxgYGBkZGRoaGhsbGxwcHB0dHR4eHh8fHyAgICEhISIiIiMjIyQkJCUlJSYmJicnJygoKCkpKSoqKisrKywsLC0tLS4uLi8vLzAwMDExMTIyMjMzMzQ0NDU1NTY2Njc3Nzg4ODk5OTo6Ojs7Ozw8PD09PT4+Pj8/P0BAQEFBQUJCQkNDQ0REREVFRUZGRkdHR0hISElJSUpKSktLS0xMTE1NTU5OTk9PT1BQUFFRUVJSUlNTU1RUVFVVVVZWVldXV1hYWFlZWVpaWltbW1xcXF1dXV5eXl9fX2BgYGFhYWJiYmNjY2RkZGVlZWZmZmdnZ2hoaGlpaWpqamtra2xsbG1tbW5ubm9vb3BwcHFxcXJycnNzc3R0dHV1dXZ2dnd3d3h4eHl5eXp6ent7e3x8fH19fX5+fn9/f4CAgIGBgYKCgoODg4SEhIWFhYaGhoeHh4iIiImJiYqKiouLi4yMjI2NjY6Ojo+Pj5CQkJGRkZKSkpOTk5SUlJWVlZaWlpeXl5iYmJmZmZqampubm5ycnJ2dnZ6enp+fn6CgoKGhoaKioqOjo6SkpKWlpaampqenp6ioqKmpqaqqqqurq6ysrK2tra6urq+vr7CwsLGxsbKysrOzs7S0tLW1tba2tre3t7i4uLm5ubq6uru7u7y8vL29vb6+vr+/v8DAwMHBwcLCwsPDw8TExMXFxcbGxsfHx8jIyMnJycrKysvLy8zMzM3Nzc7Ozs/Pz9DQ0NHR0dLS0tPT09TU1NXV1dbW1tfX19jY2NnZ2dra2tvb29zc3N3d3d7e3t/f3+Dg4OHh4eLi4uPj4+Tk5OXl5ebm5ufn5+jo6Onp6erq6uvr6+zs7O3t7e7u7u/v7/Dw8PHx8fLy8vPz8/T09PX19fb29vf39/j4+Pn5+fr6+vv7+/z8/P39/f7+/v///0ANHIUAAAARdFJOU/////////////////////8AJa2ZYgAAARZJREFUeNrs2G8NgzAQh+ElFXCTgIRKOAlImAQcnAQkIAEJlVAJSDgL6yBZsmyDZr3uH7/3Ax95kjY5Wg7HN3QAAgQIkD0gRJyeIcgQaiJ+aGmJ+1gLualpRcSHusgSECBAPoR4Sa8NwvUQ110nlo6dv8ywWGUKv2XUAwECZKUpzZSpJrLMkHl2dWMVRMXdnoVEzZHe3c13N9giyg8/I6yGSHT0OG93TH1qpCWLRog+N9L+qw3CtBabID2t1xsgq4s1b4uWI0JbSTniNpGmGBlpu1iKnDIQKUM6RzmxFCAD5SavI202wrv97aGhLM1BApUVgAABAgQIECBAgHw7wnJfY41I9t0byI8i/3PTAgIEyP8iZwEGACHF98GX7VaGAAAAAElFTkSuQmCC',
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
          'filename' => 'governance-sm.png',
          'uri' => 'public://civic_category/icons/governance-sm.png',
          'filemime' => 'image/png',
          'filesize' => '1830',
          'status' => '1',
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => '36020109-9ca4-4016-bfaf-9e79c350e36f',
          'rdf_mapping' => array(),
          'uuid_features_file_data' => 'iVBORw0KGgoAAAANSUhEUgAAABgAAAAYCAMAAADXqc3KAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAyJpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuMC1jMDYwIDYxLjEzNDc3NywgMjAxMC8wMi8xMi0xNzozMjowMCAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvIiB4bWxuczp4bXBNTT0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL21tLyIgeG1sbnM6c3RSZWY9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9zVHlwZS9SZXNvdXJjZVJlZiMiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENTNSBNYWNpbnRvc2giIHhtcE1NOkluc3RhbmNlSUQ9InhtcC5paWQ6RjE2QTU5MDY1QTcyMTFFMkI4ODRDN0YyNzhDOUM4MzQiIHhtcE1NOkRvY3VtZW50SUQ9InhtcC5kaWQ6RjE2QTU5MDc1QTcyMTFFMkI4ODRDN0YyNzhDOUM4MzQiPiA8eG1wTU06RGVyaXZlZEZyb20gc3RSZWY6aW5zdGFuY2VJRD0ieG1wLmlpZDpGMTZBNTkwNDVBNzIxMUUyQjg4NEM3RjI3OEM5QzgzNCIgc3RSZWY6ZG9jdW1lbnRJRD0ieG1wLmRpZDpGMTZBNTkwNTVBNzIxMUUyQjg4NEM3RjI3OEM5QzgzNCIvPiA8L3JkZjpEZXNjcmlwdGlvbj4gPC9yZGY6UkRGPiA8L3g6eG1wbWV0YT4gPD94cGFja2V0IGVuZD0iciI/Pl1GozwAAAMAUExURX9/f0BAQJ+fn+/v7xAQEL+/v3BwcDAwMCAgIFBQUK+vr8/PzwAAAP///w4ODg8PDxAQEBERERISEhMTExQUFBUVFRYWFhcXFxgYGBkZGRoaGhsbGxwcHB0dHR4eHh8fHyAgICEhISIiIiMjIyQkJCUlJSYmJicnJygoKCkpKSoqKisrKywsLC0tLS4uLi8vLzAwMDExMTIyMjMzMzQ0NDU1NTY2Njc3Nzg4ODk5OTo6Ojs7Ozw8PD09PT4+Pj8/P0BAQEFBQUJCQkNDQ0REREVFRUZGRkdHR0hISElJSUpKSktLS0xMTE1NTU5OTk9PT1BQUFFRUVJSUlNTU1RUVFVVVVZWVldXV1hYWFlZWVpaWltbW1xcXF1dXV5eXl9fX2BgYGFhYWJiYmNjY2RkZGVlZWZmZmdnZ2hoaGlpaWpqamtra2xsbG1tbW5ubm9vb3BwcHFxcXJycnNzc3R0dHV1dXZ2dnd3d3h4eHl5eXp6ent7e3x8fH19fX5+fn9/f4CAgIGBgYKCgoODg4SEhIWFhYaGhoeHh4iIiImJiYqKiouLi4yMjI2NjY6Ojo+Pj5CQkJGRkZKSkpOTk5SUlJWVlZaWlpeXl5iYmJmZmZqampubm5ycnJ2dnZ6enp+fn6CgoKGhoaKioqOjo6SkpKWlpaampqenp6ioqKmpqaqqqqurq6ysrK2tra6urq+vr7CwsLGxsbKysrOzs7S0tLW1tba2tre3t7i4uLm5ubq6uru7u7y8vL29vb6+vr+/v8DAwMHBwcLCwsPDw8TExMXFxcbGxsfHx8jIyMnJycrKysvLy8zMzM3Nzc7Ozs/Pz9DQ0NHR0dLS0tPT09TU1NXV1dbW1tfX19jY2NnZ2dra2tvb29zc3N3d3d7e3t/f3+Dg4OHh4eLi4uPj4+Tk5OXl5ebm5ufn5+jo6Onp6erq6uvr6+zs7O3t7e7u7u/v7/Dw8PHx8fLy8vPz8/T09PX19fb29vf39/j4+Pn5+fr6+vv7+/z8/P39/f7+/v///7+UwsoAAAAOdFJOU/////////////////8ARcDcyAAAAHRJREFUeNpi4EUC9efnr38PZTMgS/CAgIECDgkeHlIkDOoLDLBKILEpkdgfIMAjELAfQ6IA6qQCNIl6HhioR5F4LwCXEHiPJPG+gAcB6t8jJM47IIP1UIn59ZhgPkjCgQcTOAx6CQWw5xQwJeqRA9OBFyDAALq+PDJWd6SeAAAAAElFTkSuQmCC',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Energy',
    'description' => NULL,
    'format' => NULL,
    'weight' => '1',
    'uuid' => 'f7214665-fd68-40fe-9767-b320a20cef30',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'e1c64e63-1f7a-7bd4-b56f-928e66b711a8',
    ),
  );
  $terms[] = array(
    'name' => 'Anti-corruption',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '2',
    'uuid' => 'f8123076-74e9-4704-9f01-50a7e12cf348',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'f6e42a9f-f4a0-c054-cdd4-c1ca7990ebfb',
    ),
  );
  return $terms;
}
