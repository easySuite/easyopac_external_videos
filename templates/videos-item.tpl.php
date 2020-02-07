<?php

/**
 * @file
 * Template for video item.
 */
?>

<a href="<?php print render($url); ?>" target="_blank">
  <div class="video-thumbnail">
    <img src="<?php print render($thumbnail); ?>" alt="">
  </div>
  <div class="video-meta">
    <h3 class="video-title">
      <a href="<?php print render($url); ?>" target="_blank"><?php print render($title); ?></a>
    </h3>
    <div class="video-description">
      <?php if (!empty($description)) : ?>
        <?php print render($description); ?>
      <?php endif; ?>
    </div>
  </div>
</a>
