<?php
/**
 * @file
 * Displays a single spellcheck suggestion
 *
 * Available variables
 * - $suggestion
 *   - $suggestion->link
 *   - $suggestion->suggestion
 *   - $suggestion->original
 *   - $suggestion->url
 *
 * @ingroup themeable
 */
?>
<?php print t('Did you mean: !link?', array('!link' => $suggestion->link)); ?>
