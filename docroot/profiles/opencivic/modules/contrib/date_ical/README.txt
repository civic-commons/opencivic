Date iCal Module

Roadmap and Background:

This module contains code to create an iCal feed in Views. It has been pulled
out of the Calendar iCal module because it has no dependency on Calendar and it
could be used on any view. The code has also been generalized so that it will
work for any entity, not just nodes. It creates an 'iCal' view mode for every
entity type that can be used to to configure the description used in the iCal
feed, and adds theme suggestions to tell Drupal to look for an iCal version of
the entity template.

The Calendar iCal module will be deprecated in favor of this module.

Future plans for this module:
- Add in an iCal parser for the Feeds module that can parse an iCal feed from
  another site so it is possible to import as well as export iCal information.
- Add in ways to take advantage of other parts of the iCal specification,
  like LOCATION or VALARM.
- Add some pre-configured features that illustrate how to set up a site
  that provides an iCal feed and consume iCal information from other sites.

To use this module to create an iCal feed:

- Enable Date API, Views, and Date iCal.
- Go to the Display Fields screen for the entity you want to export in an iCal
  field.  You will see that there is a new view mode for all entities, called
  'iCal'.
- Set up the iCal view mode to contain whatever should be exported as the
  'Description' field for the iCal field. You can trim the text to the desired
  size, include other fields, etc.
- Optional, but recommended, create a new node.tpl file for the iCal view mode,
  using the name ENTITYTYPE--ical.tpl.php or ENTITYTYPE--BUNDLE--ical.tpl.php.
  Make this a very simple template that omits the title, submitted by
  information, links, and comments. Place that file in the theme folder.
- Clear the cache so the new template can be discovered by Drupal.
- Create a new view containing the items you want to display in the iCal feed.
- Add a feed to the view, using the feed type 'Date iCal'.
- Choose to 'Show' the feed as 'Date iCal Entities' (rather than 'Content' or
  'Fields').
- In the settings for Date iCal Entities, select the specific date field
  that should be used as the event date for the iCal feed.
- Give the feed a path like 'calendar/ical/%/calendar.ics', where you have a
  '/%/' for every contextual filter in the view.
- Add date filters or arguments that will constrain the view to the items you
  want to display in the feed.
- Attach the feed to a page view.
- Navigate to the page view. You should see the iCal icon at the bottom of the
  view. If you click on the icon it will download an .ics file with the events
  that matched the view criteria.
