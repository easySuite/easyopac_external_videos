/**
 * @file
 */

(function ($) {
  'use strict';

  $(document).ready(function () {
    let loaded = false;
    let videosWrapper = $('#ting-object-ting-object-full-group-related-videos');
    let fieldGroupActivator = videosWrapper.find('h2 a');
    let providerId = videosWrapper.find('#videos').attr('data-provider-id');

    $(fieldGroupActivator).on('click', function () {
      if (!loaded) {
        videosWrapper.find('.field-items').addClass('videos-spinner');
        let postData = { faustNumber: providerId };
        $.post({
          url: "/videos",
          data: postData
        }).done(function (data) {
          if (data.length !== 0) {
            videosWrapper.find('.field-items').removeClass('videos-spinner').append(data);
          }
          else {
            videosWrapper.find('.field-items').removeClass('videos-spinner').append(Drupal.t('No results.'));
          }
          loaded = true;
        });
      }
    });
  });
})(jQuery);
