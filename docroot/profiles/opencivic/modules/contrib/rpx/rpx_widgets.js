(function ($) {

Drupal.behaviors.rpx = {
  attach: function (context, settings) {
    function finishCallback(results) {
      var setting = settings.rpx.clicked_link_settings;

      if ('cookie' in setting) {
        $.cookie('Drupal.visitor.rpx_social_' + setting.cookie.type, setting.cookie.id, {path: '/'});
        location.replace(Drupal.settings.basePath + '?q=rpx/cookie_handler&destination=' + location.href);
        return false;
      }
    }

  try {
      setTimeout(function(){janrain.events.onShareSendComplete.addHandler(function(){finishCallback();});}, 300);
    }
  catch (e) {
      setTimeout(function(){janrain.events.onShareSendComplete.addHandler(function(){finishCallback();});}, 300);
    }

    function popupSocial() {
        var post          = settings.rpx.clicked_link_settings.post;
        var share_title   = '';
        var share_summary = '';
        var share_comment = '';

        if ('comment' in post) {
          share_comment = post.comment;
        }

        if ('summary' in post) {
          share_summary = post.summary;
        }

        if ('title' in post) {
          share_title = post.title;
        }

        setShare(post.link, share_comment, share_title, share_summary, 'facebook');
    };

    if ('rpx' in settings && 'atonce' in settings.rpx) {
      settings.rpx.clicked_link_settings = settings.rpx.atonce;
      setTimeout(function(){popupSocial();}, 300);
    }

    $('.rpx-link-social', context).once('rpx-link-social', function() {
      $(this).bind('click', function(e) {
        settings.rpx.clicked_link_settings = settings.rpx[$(this).attr('id')];
        return false;
      });
    });
  }
};

})(jQuery);
