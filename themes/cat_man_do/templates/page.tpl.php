<div id="page" class="container <?php print $classes; ?>">

  <!-- region: Leaderboard -->
  <?php print render($page['leaderboard']); ?>

  <header<?php print $header_attributes; ?>>

    <?php if ($site_logo || $site_name || $site_slogan): ?>
      <!-- start: Branding -->
      <div<?php print $branding_attributes; ?>>

        <?php if ($site_logo): ?>
          <div id="logo">
            <?php print $site_logo; ?>
          </div>
        <?php endif; ?>

        <?php if ($site_name || $site_slogan): ?>
          <!-- start: Site name and Slogan hgroup -->
          <hgroup<?php print $hgroup_attributes; ?>>

            <?php if ($site_name): ?>
              <h1<?php print $site_name_attributes; ?>><?php print $site_name; ?></h1>
            <?php endif; ?>

            <?php if ($site_slogan): ?>
              <h2<?php print $site_slogan_attributes; ?>><?php print $site_slogan; ?></h2>
            <?php endif; ?>

          </hgroup><!-- /end #name-and-slogan -->
        <?php endif; ?>

      </div><!-- /end #branding -->
    <?php endif; ?>

    <!-- region: Header -->
    <?php print render($page['header']); ?>

  </header>

  <!-- Navigation elements -->
  <?php print render($page['menu_bar']); ?>
  <?php if ($primary_navigation): print $primary_navigation; endif; ?>
  <?php if ($secondary_navigation): print $secondary_navigation; endif; ?>

  <!-- Breadcrumbs -->
  <?php if ($breadcrumb): print $breadcrumb; endif; ?>

  <!-- Messages and Help -->
  <?php print $messages; ?>
  <?php print render($page['help']); ?>

  <!-- region: Secondary Content -->
  <?php print render($page['secondary_content']); ?>

  <div id="columns" class="columns clearfix">
    <div id="content-column" class="content-column" role="main">
      <div class="content-inner">

        <!-- region: Highlighted -->
        <?php print render($page['highlighted']); ?>

        <<?php print $tag; ?> id="main-content">

          <?php print render($title_prefix); // Does nothing by default in D7 core ?>

          <?php if ($title || $primary_local_tasks || $secondary_local_tasks || $action_links = render($action_links)): ?>
            <header<?php print $content_header_attributes; ?>>

              <?php if ($title): ?>
                <h1 id="page-title">
                  <?php print $title; ?>
                </h1>
              <?php endif; ?>

              <?php if ($primary_local_tasks || $secondary_local_tasks || $action_links): ?>
                <div id="tasks">

                  <?php if ($primary_local_tasks): ?>
                    <ul class="tabs primary clearfix"><?php print render($primary_local_tasks); ?></ul>
                  <?php endif; ?>

                  <?php if ($secondary_local_tasks): ?>
                    <ul class="tabs secondary clearfix"><?php print render($secondary_local_tasks); ?></ul>
                  <?php endif; ?>

                  <?php if ($action_links = render($action_links)): ?>
                    <ul class="action-links clearfix"><?php print $action_links; ?></ul>
                  <?php endif; ?>

                </div>
              <?php endif; ?>

            </header>
          <?php endif; ?>

          <!-- region: Main Content -->
          <?php if ($content = render($page['content'])): ?>
            <div id="content" class="region">
              <?php print $content; ?>
            </div>
          <?php endif; ?>

          <!-- Feed icons (RSS, Atom icons etc -->
          <?php print $feed_icons; ?>

          <?php print render($title_suffix); // Prints page level contextual links ?>

        </<?php print $tag; ?>><!-- /end #main-content -->

        <!-- region: Content Aside -->
        <?php print render($page['content_aside']); ?>

      </div><!-- /end .content-inner -->
    </div><!-- /end #content-column -->

    <!-- regions: Sidebar first and Sidebar second -->
    <?php $sidebar_first = render($page['sidebar_first']); print $sidebar_first; ?>
    <?php $sidebar_second = render($page['sidebar_second']); print $sidebar_second; ?>

  </div><!-- /end #columns -->
  <?php if (
    $page['three_33_top'] ||
    $page['three_33_first'] ||
    $page['three_33_second'] ||
    $page['three_33_third'] ||
    $page['three_33_bottom']
    ): ?>
    <!-- Three column 3x33 Gpanel -->
    <div class="at-panel gpanel panel-display three-3x33 clearfix">
      <?php print render($page['three_33_top']); ?>
      <?php print render($page['three_33_first']); ?>
      <?php print render($page['three_33_second']); ?>
      <?php print render($page['three_33_third']); ?>
      <?php print render($page['three_33_bottom']); ?>
    </div>
  <?php endif; ?>

  <!-- region: Tertiary Content -->
  <?php print render($page['tertiary_content']); ?>

  <!-- region: Footer -->
  <?php if ($page['footer']): ?>
    <footer<?php print $footer_attributes; ?>>
      <?php print render($page['footer']); ?>
    </footer>
  <?php endif; ?>

</div>
