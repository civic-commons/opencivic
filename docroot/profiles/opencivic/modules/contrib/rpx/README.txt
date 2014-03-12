Module:  Janrain Engage (formerly RPX)


Description
===========

The Janrain Engage module (formerly RPX) integrates Drupal sites with
the powerful Janrain Engage service (www.janrain.com/products/engage).
Using Janrain Engage, Drupal sites can authenticate new and existing
users with popular third-party websites, map user profile data from
these websites to Drupal fields, and share Drupal content with a
user's existing social network on multiple third-party sites. The
result is an accelerated user registration process, an enhanced
ability to gather user data, and increased site traffic from the viral
promotion of website content.

In particular, the module helps Drupal websites quickly and seamlessly
integrate with 18 social networks and service providers, including
Facebook, Twitter, Google, Yahoo!, LinkedIn, Myspace, AOL, PayPal, and
Windows Live. Instead of having to integrate with each of these
websites on your own, the Janrain Engage module (and the underlying
Janrain Engage service) do the heavy lifting for you.


Features
===========

Some notable features of the module include:

* AUTHENTICATION:  Allow site visitors to register and login with one
  of their existing accounts at popular third-party websites. Support
  is included for both the Drupal user login block and the user login
  page. Quickly and easily converting anonymous site visitors into
  active registered users.

* LINKED ACCOUNT MANAGEMENT: A "Linked accounts" tab is provided to
  the end user (who has the appropriate module permission). Using this
  tab, a user can add, remove, or otherwise manage the third-party
  accounts connected to his/her Drupal site account.

* DATA MAPPING:  With permission of the user, you can map third-party
  user profile data to specific Drupal fields. A variety of fields
  are supported, including User fields, old-style Profile fields, and
  Profile2 contributed module fields.

* SOCIAL SHARING:  Make it easy for users to share their Drupal
  content and comments with friends and followers on other social
  networks. A "Share" button or link may be included on specific
  content types, which triggers the Janrain Engage social sharing
  widget.

* RULES INTEGRATION: For those using the popular Rules module
  (http://drupal.org/project/rules), you can configure the full range
  of Rules-based actions to occur (change a role, send an e-mail,
  etc.) whenever a user triggers certain events via Janrain
  Engage. The module currently provides the following Rules events:

     Linked account was added
     Linked account was deleted
     Social sharing cookie was set for shared content
     Social sharing cookie was set for shared comments
     Social sharing cookie was set for other information

  Additionally, the module provides a "Launch social sharing widget"
  action that enables a user to share with their third-party social
  network any other events provided by the Rules module or other
  contributed modules.

* VIEWS INTEGRATION: You can easily create views of your users that
  include data such as linked account type (i.e. Facebook), linked
  account ID, linked account icon, as well as an operation link to
  delete the linked account. These views can be used by site
  administrators, for example, to manage all of the linked third-party
  accounts on the site. Or you can use these views to create an
  alternate linked account management UI for end users. You can also
  configure a view to display reporting and analytics about the number
  of linked accounts of a given type that have been created on the
  site.


Supported Third-Party Websites
===========

The Janrain Engage service currently supports the following social
networks and service providers:

Facebook
Google+
Google
Twitter
PayPal
Yahoo!
LinkedIn
Microsoft Account
Salesforce
Foursquare
Orkut
Amazon
AOL
Blogger
Disqus
Flickr
Hyves
Instagram
Livejournal
Mixi
MyOpenID
Netlog
Renren
Sina Weibo
SoundCloud
Tumblr
Verisign
VK
Wordpress
XING

Because new providers are added on a regular basis, you can view the
most current list of providers at: https://rpxnow.com/docs/providers


Installation and Configuration
============

To install and configure this module, do the following:

1. Download the module's tarball, extract its contents, and move the
   resulting "rpx" directory into your site's "modules" directory.

2. Visit admin/modules and enable the "Janrain Engage Core," "Janrain
   Engage UI," and "Janrain Engage Widgets" modules. The "Janrain
   Engage Rules integration" module is optional if you would like
   those features. All of these modules can be found within the
   "Janrain Engage" fieldset.

3. Visit admin/people/permissions and configure available module
   permissions. This includes the "Administer Janrain Engage
   settings" permission and the "Manage own 3rd party identities"
   permission.

4. If you want users to be able to create their own accounts using
   Janrain Engage, you should visit admin/config/people/accounts and
   choose "Visitors" under the "Who can register accounts?" setting.

5. Visit admin/config/people/rpx and enter your Janrain Engage API
   key. This API key must be entered for the module to function. Once
   this API key is entered, the module will automatically populate
   your "Engage Realm" and "Engage Admin URL".

6. Also at admin/config/people/rpx, configure other module settings
   related to the user interface, authentication, social sharing, and
   verification e-mails.

7. Visit admin/config/people/rpx/profile and configure Field Mapping
   if you would like third-party profile data to be mapped to Drupal
   fields. You can map data to User fields
   (admin/config/people/accounts/fields), legacy Profile fields (for
   sites that have been upgraded from Drupal 6), or Profile2
   contributed module fields (http://drupal.org/project/profile2).

8. Login as a user with the "Manage own 3rd party identities"
   permission. Each user with this permission will have a "Linked
   accounts" tab by default on their account page.

NOTE: If you don't yet have a Janrain Engage API Key, please visit
the following link to create a Janrain Engage account:

http://www.janrain.com/products/engage/get-janrain-engage

You will be able to choose from a Basic (free), Plus, Pro, or
Enterprise level account. All account types are supported by this
module.

Additionally, in order to enable sign-in with Facebook, Linkedin,
Twitter, MySpace, Paypal, and Windows Live accounts (as well as social
publishing to Facebook, Twitter, Myspace, Linkedin and Yahoo!), you
must first create a free developer account with each respective
service. Easy-to-follow links and step-by-step instructions are
provided from your account control panel on the Janrain Engage
website.


RECOMMENDED MODULES
===============

* Rules (http://drupal.org/project/rules):  Allows you to configure
  actions that occur when a linked third-party account is added or
  removed. The Janrain Engage module also provides a social sharing
  action that allows you to post to third-party websites on other
  Drupal events.

* Profile2 (http://drupal.org/project/profile2):  Designed to be the
  successor of the core Profile module (which is deprecated for Drupal
  7), this module provides a new, fieldable "profile" entity.
  Third-party user data may be mapped directly to fields attached to
  these profile entities.

* Token (http://drupal.org/project/token): Tokens are small bits of
  text that can be placed into larger documents via simple
  placeholders. Although Drupal core supports tokens, this module adds
  some additional features. By enabling this module, you will see a
  browsable interface of available tokens in several administrative
  areas of the Janrain Engage module (where tokens are supported). You
  will be able to include a token (for instance, when defining your
  social sharing message text) simply by clicking on it).

* Views (http://drupal.org/project/views): Views provides a powerful
  and flexible way to display lists of content, users, and more. By
  enabling this module, you will be able to create user views that
  include field-level information about a user's linked accounts (via
  Janrain Engage). Views fields including linked account type, linked
  account ID, and linked account icon are supported.


FAQ
===============

Q: My users get an error during registration that says "The configured
   token URL has not been whitelisted."  What should I do?

A: This is probably not a problem with the module itself. Try editing
   the app settings in your Janrain Engage account to use a wildcard
   for subdomains. So your domains would include mysite.com and also
   *.mysite.com.

Q: I want to set-up a Rules action that only happens when a user adds
   his Facebook account. How do it do this?

A: First, create a rule on the "Linked account was added" event.
   Then, create a "data comparison" condition and choose
   "rpx:provider-title" as the data to compare. Select "equals" as
   your comparison operator and enter "Facebook" as the data value.
   Any action that you now configure will only occur if the user adds
   a Facebook account. You can follow the same procedure for any
   other supported third-party website. Note that to get the same
   result you could also use "rpx:provider-machinename" as the data to
   compare and "facebook" (not capitalized) as the data value.
