<?php

/**
 * @file
 * Template of videos wrapper.
 */
?>

<ul class="videos-wrapper">
  <?php foreach($items as $item) : ?>
    <li class="video-item"><?php print $item; ?></li>
  <?php endforeach; ?>
</ul>
