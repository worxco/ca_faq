<?php
// $Id$

?>
<div id="node-<?php print $node->nid; ?>" class="worx-node-<?php print $node->type; ?>"><div class="node-inner">

  <?php print $picture; ?>

  <?php if ($unpublished): ?>
    <div class="unpublished"><?php print t('Unpublished'); ?></div>
  <?php endif; ?>
  <?php if ($submitted || $terms): ?>
    <div class="meta">
      <?php if ($submitted): ?>
        <div class="submitted">
          <?php print $submitted; ?>
        </div>
      <?php endif; ?>

      <?php if ($terms): ?>
        <div class="terms terms-inline"><?php print t(' in ') . $terms; ?></div>
      <?php endif; ?>
    </div>
  <?php endif; ?>

  <h3 class="worx-faq">Q: <?php print $field_ca_faq_question[0]['value']; ?></h3>
  <div class="content clear-block">
    <?php print $content; ?>
  </div>

  <?php print $links; ?>

</div></div> <!-- /node-inner, /node -->
