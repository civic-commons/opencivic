<?php

/**
 * @file
 * A catalog of Engage user profile data fields for the rpx_ui module.
 */

/**
 * Define and return an array of Engage data paths.
 *
 * @see theme_rpx_path_tree()
 */
function _rpx_paths() {
  $ordinal_description = t('Replace question mark with a number (negative number means "n-th from the end").');

  $paths = array(
    array(
      'id' => 'rpxpath-profile',
      'data' => array(
        'name' => 'Profile',
        'path' => '',
        'description' => 'Profile data.',
      ),
    ),
    array(
      'id' => 'rpxpath-profile-name',
      'data' => array(
        'name' => 'Name',
        'path' => '',
        'description' => 'User\'s name.',
      ),
      'parent' => 'rpxpath-profile',
    ),
    array(
      'id' => 'rpxpath-profile-name-formatted',
      'data' => array(
        'name' => 'Formatted',
        'path' => array(
          'data' => "['profile']['name']['formatted']",
          'class' => array('rpx-path'),
        ),
        'description' => 'Formatted component.',
      ),
      'parent' => 'rpxpath-profile-name',
    ),
    array(
      'id' => 'rpxpath-profile-name-family',
      'data' => array(
        'name' => 'Family name',
        'path' => array(
          'data' => "['profile']['name']['familyName']",
          'class' => array('rpx-path'),
        ),
        'description' => 'Family name component.',
      ),
      'parent' => 'rpxpath-profile-name',
    ),
    array(
      'id' => 'rpxpath-profile-name-given',
      'data' => array(
        'name' => 'Given name',
        'path' => array(
          'data' => "['profile']['name']['givenName']",
          'class' => array('rpx-path'),
        ),
        'description' => 'Given name component.',
      ),
      'parent' => 'rpxpath-profile-name',
    ),
    array(
      'id' => 'rpxpath-profile-name-middle',
      'data' => array(
        'name' => 'Middle name',
        'path' => array(
          'data' => "['profile']['name']['middleName']",
          'class' => array('rpx-path'),
        ),
        'description' => 'Middle name component.',
      ),
      'parent' => 'rpxpath-profile-name',
    ),
    array(
      'id' => 'rpxpath-profile-name-honorific-prefix',
      'data' => array(
        'name' => 'Honorific prefix',
        'path' => array(
          'data' => "['profile']['name']['honorificPrefix']",
          'class' => array('rpx-path'),
        ),
        'description' => 'Honorific prefix component.',
      ),
      'parent' => 'rpxpath-profile-name',
    ),
    array(
      'id' => 'rpxpath-profile-name-honorific-suffix',
      'data' => array(
        'name' => 'Honorific suffix',
        'path' => array(
          'data' => "['profile']['name']['honorificSuffix']",
          'class' => array('rpx-path'),
        ),
        'description' => 'Honorific suffix component.',
      ),
      'parent' => 'rpxpath-profile-name',
    ),
    array(
      'id' => 'rpxpath-profile-address',
      'data' => array(
        'name' => 'Address',
        'path' => '',
        'description' => 'User\'s address.',
      ),
      'parent' => 'rpxpath-profile',
    ),
    array(
      'id' => 'rpxpath-profile-address-formatted',
      'data' => array(
        'name' => 'Formatted',
        'path' => array(
          'data' => "['profile']['address']['formatted']",
          'class' => array('rpx-path'),
        ),
        'description' => 'Formatted component.',
      ),
      'parent' => 'rpxpath-profile-address',
    ),
    array(
      'id' => 'rpxpath-profile-address-street',
      'data' => array(
        'name' => 'Street address',
        'path' => array(
          'data' => "['profile']['address']['streetAddress']",
          'class' => array('rpx-path'),
        ),
        'description' => 'Street address component.',
      ),
      'parent' => 'rpxpath-profile-address',
    ),
    array(
      'id' => 'rpxpath-profile-address-locality',
      'data' => array(
        'name' => 'Locality',
        'path' => array(
          'data' => "['profile']['address']['locality']",
          'class' => array('rpx-path'),
        ),
        'description' => 'Locality component.',
      ),
      'parent' => 'rpxpath-profile-address',
    ),
    array(
      'id' => 'rpxpath-profile-address-region',
      'data' => array(
        'name' => 'Region',
        'path' => array(
          'data' => "['profile']['address']['region']",
          'class' => array('rpx-path'),
        ),
        'description' => 'Region component.',
      ),
      'parent' => 'rpxpath-profile-address',
    ),
    array(
      'id' => 'rpxpath-profile-address-postal',
      'data' => array(
        'name' => 'Postal code',
        'path' => array(
          'data' => "['profile']['address']['postalCode']",
          'class' => array('rpx-path'),
        ),
        'description' => 'Postal code component.',
      ),
      'parent' => 'rpxpath-profile-address',
    ),
    array(
      'id' => 'rpxpath-profile-address-country',
      'data' => array(
        'name' => 'Country',
        'path' => array(
          'data' => "['profile']['address']['country']",
          'class' => array('rpx-path'),
        ),
        'description' => 'Country component.',
      ),
      'parent' => 'rpxpath-profile-address',
    ),
    array(
      'id' => 'rpxpath-profile-gender',
      'data' => array(
        'name' => 'Gender',
        'path' => array(
          'data' => "['profile']['gender']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s gender.',
      ),
      'parent' => 'rpxpath-profile',
    ),
    array(
      'id' => 'rpxpath-profile-birthday',
      'data' => array(
        'name' => 'Birthday',
        'path' => array(
          'data' => "['profile']['birthday']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s birthday.',
      ),
      'parent' => 'rpxpath-profile',
    ),
    array(
      'id' => 'rpxpath-profile-photo',
      'data' => array(
        'name' => 'Photo',
        'path' => array(
          'data' => "['profile']['photo']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s photo.',
      ),
      'parent' => 'rpxpath-profile',
    ),
    array(
      'id' => 'rpxpath-profile-phone',
      'data' => array(
        'name' => 'Phone number',
        'path' => array(
          'data' => "['profile']['phoneNumber']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s phone number.',
      ),
      'parent' => 'rpxpath-profile',
    ),
    array(
      'id' => 'rpxpath-profile-preferred',
      'data' => array(
        'name' => 'Preferred user name',
        'path' => array(
          'data' => "['profile']['preferredUsername']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s preferred username.',
      ),
      'parent' => 'rpxpath-profile',
    ),
    array(
      'id' => 'rpxpath-profile-provider',
      'data' => array(
        'name' => 'Provider name',
        'path' => array(
          'data' => "['profile']['providerName']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s identity provider name.',
      ),
      'parent' => 'rpxpath-profile',
    ),
    array(
      'id' => 'rpxpath-profile-verified',
      'data' => array(
        'name' => 'Verified email',
        'path' => array(
          'data' => "['profile']['verifiedEmail']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s verified email address.',
      ),
      'parent' => 'rpxpath-profile',
    ),
    array(
      'id' => 'rpxpath-profile-display',
      'data' => array(
        'name' => 'Display name',
        'path' => array(
          'data' => "['profile']['displayName']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s display name.',
      ),
      'parent' => 'rpxpath-profile',
    ),
    array(
      'id' => 'rpxpath-profile-url',
      'data' => array(
        'name' => 'URL',
        'path' => array(
          'data' => "['profile']['url']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s URL.',
      ),
      'parent' => 'rpxpath-profile',
    ),
    array(
      'id' => 'rpxpath-profile-utc',
      'data' => array(
        'name' => 'UTC offset',
        'path' => array(
          'data' => "['profile']['utcOffset']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s UTC offset.',
      ),
      'parent' => 'rpxpath-profile',
    ),
    array(
      'id' => 'rpxpath-profile-identifier',
      'data' => array(
        'name' => 'Identifier',
        'path' => array(
          'data' => "['profile']['identifier']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s identifier.',
      ),
      'parent' => 'rpxpath-profile',
    ),
    array(
      'id' => 'rpxpath-profile-email',
      'data' => array(
        'name' => 'Email',
        'path' => array(
          'data' => "['profile']['email']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s email address.',
      ),
      'parent' => 'rpxpath-profile',
    ),

    array(
      'id' => 'rpxpath-profile-google',
      'data' => array(
        'name' => 'Google user ID',
        'path' => array(
          'data' => "['profile']['googleUserId']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s Google user ID.',
      ),
      'parent' => 'rpxpath-profile',
    ),

    array(
      'id' => 'rpxpath-poco',
      'data' => array(
        'name' => 'Merged PoCo',
        'path' => '',
        'description' => 'Merged Portable Contacts data.',
      ),
    ),

    array(
      'id' => 'rpxpath-poco-id',
      'data' => array(
        'name' => 'ID',
        'path' => array(
          'data' => "['merged_poco']['id']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User ID.',
      ),
      'parent' => 'rpxpath-poco',
    ),
    array(
      'id' => 'rpxpath-poco-display',
      'data' => array(
        'name' => 'Display name',
        'path' => array(
          'data' => "['merged_poco']['displayName']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s display name.',
      ),
      'parent' => 'rpxpath-poco',
    ),
    array(
      'id' => 'rpxpath-poco-name',
      'data' => array(
        'name' => 'Name',
        'path' => '',
        'description' => 'User\'s name.',
      ),
      'parent' => 'rpxpath-poco',
    ),
    array(
      'id' => 'rpxpath-poco-name-formatted',
      'data' => array(
        'name' => 'Formatted',
        'path' => array(
          'data' => "['merged_poco']['name']['formatted']",
          'class' => array('rpx-path'),
        ),
        'description' => 'Formatted component.',
      ),
      'parent' => 'rpxpath-poco-name',
    ),
    array(
      'id' => 'rpxpath-poco-name-family',
      'data' => array(
        'name' => 'Family name',
        'path' => array(
          'data' => "['merged_poco']['name']['familyName']",
          'class' => array('rpx-path'),
        ),
        'description' => 'Family name component.',
      ),
      'parent' => 'rpxpath-poco-name',
    ),
    array(
      'id' => 'rpxpath-poco-name-given',
      'data' => array(
        'name' => 'Given name',
        'path' => array(
          'data' => "['merged_poco']['name']['givenName']",
          'class' => array('rpx-path'),
        ),
        'description' => 'Given name component.',
      ),
      'parent' => 'rpxpath-poco-name',
    ),
    array(
      'id' => 'rpxpath-poco-name-middle',
      'data' => array(
        'name' => 'Middle name',
        'path' => array(
          'data' => "['merged_poco']['name']['middleName']",
          'class' => array('rpx-path'),
        ),
        'description' => 'Middle name component.',
      ),
      'parent' => 'rpxpath-poco-name',
    ),
    array(
      'id' => 'rpxpath-poco-name-honorific-prefix',
      'data' => array(
        'name' => 'Honorific prefix',
        'path' => array(
          'data' => "['merged_poco']['name']['honorificPrefix']",
          'class' => array('rpx-path'),
        ),
        'description' => 'Honorific prefix component.',
      ),
      'parent' => 'rpxpath-poco-name',
    ),
    array(
      'id' => 'rpxpath-poco-name-honorific-suffix',
      'data' => array(
        'name' => 'Honorific suffix',
        'path' => array(
          'data' => "['merged_poco']['name']['honorificSuffix']",
          'class' => array('rpx-path'),
        ),
        'description' => 'Honorific suffix component.',
      ),
      'parent' => 'rpxpath-poco-name',
    ),
    array(
      'id' => 'rpxpath-poco-addresses',
      'data' => array(
        'name' => 'Addresses',
        'path' => '',
        'description' => 'User\'s addresses.',
      ),
      'parent' => 'rpxpath-poco',
    ),
    array(
      'id' => 'rpxpath-poco-addresses-',
      'data' => array(
        'name' => 'Address ordinal (?)',
        'path' => '',
        'description' => $ordinal_description,
      ),
      'parent' => 'rpxpath-poco-addresses',
    ),
    array(
      'id' => 'rpxpath-poco-addresses-formatted',
      'data' => array(
        'name' => 'Formatted',
        'path' => array(
          'data' => "['merged_poco']['addresses'][?]['formatted']",
          'class' => array('rpx-path'),
        ),
        'description' => 'Formatted component.',
      ),
      'parent' => 'rpxpath-poco-addresses-',
    ),
    array(
      'id' => 'rpxpath-poco-addresses-street',
      'data' => array(
        'name' => 'Street address',
        'path' => array(
          'data' => "['merged_poco']['addresses'][?]['streetAddress']",
          'class' => array('rpx-path'),
        ),
        'description' => 'Street address component.',
      ),
      'parent' => 'rpxpath-poco-addresses-',
    ),
    array(
      'id' => 'rpxpath-poco-addresses-locality',
      'data' => array(
        'name' => 'Locality',
        'path' => array(
          'data' => "['merged_poco']['addresses'][?]['locality']",
          'class' => array('rpx-path'),
        ),
        'description' => 'Locality component.',
      ),
      'parent' => 'rpxpath-poco-addresses-',
    ),
    array(
      'id' => 'rpxpath-poco-addresses-region',
      'data' => array(
        'name' => 'Region',
        'path' => array(
          'data' => "['merged_poco']['addresses'][?]['region']",
          'class' => array('rpx-path'),
        ),
        'description' => 'Region component.',
      ),
      'parent' => 'rpxpath-poco-addresses-',
    ),
    array(
      'id' => 'rpxpath-poco-addresses-postal',
      'data' => array(
        'name' => 'Postal code',
        'path' => array(
          'data' => "['merged_poco']['addresses'][?]['postalCode']",
          'class' => array('rpx-path'),
        ),
        'description' => 'Postal code component.',
      ),
      'parent' => 'rpxpath-poco-addresses-',
    ),
    array(
      'id' => 'rpxpath-poco-addresses-country',
      'data' => array(
        'name' => 'Country',
        'path' => array(
          'data' => "['merged_poco']['addresses'][?]['country']",
          'class' => array('rpx-path'),
        ),
        'description' => 'Country component.',
      ),
      'parent' => 'rpxpath-poco-addresses-',
    ),
    array(
      'id' => 'rpxpath-poco-nickname',
      'data' => array(
        'name' => 'Nickname',
        'path' => array(
          'data' => "['merged_poco']['nickname']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s nickname.',
      ),
      'parent' => 'rpxpath-poco',
    ),
    array(
      'id' => 'rpxpath-poco-published',
      'data' => array(
        'name' => 'Published',
        'path' => array(
          'data' => "['merged_poco']['published']",
          'class' => array('rpx-path'),
        ),
        'description' => 'Published date.',
      ),
      'parent' => 'rpxpath-poco',
    ),
    array(
      'id' => 'rpxpath-poco-updated',
      'data' => array(
        'name' => 'Updated',
        'path' => array(
          'data' => "['merged_poco']['updated']",
          'class' => array('rpx-path'),
        ),
        'description' => 'Updated date.',
      ),
      'parent' => 'rpxpath-poco',
    ),
    array(
      'id' => 'rpxpath-poco-birthday',
      'data' => array(
        'name' => 'Birthday',
        'path' => array(
          'data' => "['merged_poco']['birthday']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s birthday.',
      ),
      'parent' => 'rpxpath-poco',
    ),
    array(
      'id' => 'rpxpath-poco-anniversary',
      'data' => array(
        'name' => 'Anniversary',
        'path' => array(
          'data' => "['merged_poco']['anniversary']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s wedding anniversary.',
      ),
      'parent' => 'rpxpath-poco',
    ),
    array(
      'id' => 'rpxpath-poco-gender',
      'data' => array(
        'name' => 'Gender',
        'path' => array(
          'data' => "['merged_poco']['gender']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s gender.',
      ),
      'parent' => 'rpxpath-poco',
    ),
    array(
      'id' => 'rpxpath-poco-note',
      'data' => array(
        'name' => 'Note',
        'path' => array(
          'data' => "['merged_poco']['note']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s note about the contact.',
      ),
      'parent' => 'rpxpath-poco',
    ),
    array(
      'id' => 'rpxpath-poco-preferred',
      'data' => array(
        'name' => 'Preferred username',
        'path' => array(
          'data' => "['merged_poco']['preferredUsername']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s preferred username.',
      ),
      'parent' => 'rpxpath-poco',
    ),
    array(
      'id' => 'rpxpath-poco-utc',
      'data' => array(
        'name' => 'UTC offset',
        'path' => array(
          'data' => "['merged_poco']['utcOffset']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s UTC offset.',
      ),
      'parent' => 'rpxpath-poco',
    ),
    array(
      'id' => 'rpxpath-poco-about',
      'data' => array(
        'name' => 'About me',
        'path' => array(
          'data' => "['merged_poco']['aboutMe']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s "about me" info.',
      ),
      'parent' => 'rpxpath-poco',
    ),
    array(
      'id' => 'rpxpath-poco-body',
      'data' => array(
        'name' => 'Body type',
        'path' => '',
        'description' => 'User\'s body type.',
      ),
      'parent' => 'rpxpath-poco',
    ),
    array(
      'id' => 'rpxpath-poco-body-build',
      'data' => array(
        'name' => 'Build',
        'path' => array(
          'data' => "['merged_poco']['bodyType']['build']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s build.',
      ),
      'parent' => 'rpxpath-poco-body',
    ),
    array(
      'id' => 'rpxpath-poco-body-height',
      'data' => array(
        'name' => 'Height',
        'path' => array(
          'data' => "['merged_poco']['bodyType']['height']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s height.',
      ),
      'parent' => 'rpxpath-poco-body',
    ),
    array(
      'id' => 'rpxpath-poco-body-weight',
      'data' => array(
        'name' => 'Weight',
        'path' => array(
          'data' => "['merged_poco']['bodyType']['weight']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s weight.',
      ),
      'parent' => 'rpxpath-poco-body',
    ),
    array(
      'id' => 'rpxpath-poco-body-eye',
      'data' => array(
        'name' => 'Eye color',
        'path' => array(
          'data' => "['merged_poco']['bodyType']['eyeColor']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s eye color.',
      ),
      'parent' => 'rpxpath-poco-body',
    ),
    array(
      'id' => 'rpxpath-poco-body-hair',
      'data' => array(
        'name' => 'Hair color',
        'path' => array(
          'data' => "['merged_poco']['bodyType']['hairColor']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s hair color.',
      ),
      'parent' => 'rpxpath-poco-body',
    ),
    array(
      'id' => 'rpxpath-poco-drinker',
      'data' => array(
        'name' => 'Drinker status',
        'path' => array(
          'data' => "['merged_poco']['drinker']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s drinker status.',
      ),
      'parent' => 'rpxpath-poco',
    ),
    array(
      'id' => 'rpxpath-poco-ethnicity',
      'data' => array(
        'name' => 'Ethnicity',
        'path' => array(
          'data' => "['merged_poco']['ethnicity']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s ethnicity.',
      ),
      'parent' => 'rpxpath-poco',
    ),
    array(
      'id' => 'rpxpath-poco-fashion',
      'data' => array(
        'name' => 'Fashion',
        'path' => array(
          'data' => "['merged_poco']['fashion']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s thoughts on fashion.',
      ),
      'parent' => 'rpxpath-poco',
    ),
    array(
      'id' => 'rpxpath-poco-happiest',
      'data' => array(
        'name' => 'Happiest when',
        'path' => array(
          'data' => "['merged_poco']['happiestWhen']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s description of being happy.',
      ),
      'parent' => 'rpxpath-poco',
    ),
    array(
      'id' => 'rpxpath-poco-humor',
      'data' => array(
        'name' => 'Humor',
        'path' => array(
          'data' => "['merged_poco']['humor']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s thoughts on humor.',
      ),
      'parent' => 'rpxpath-poco',
    ),
    array(
      'id' => 'rpxpath-poco-living',
      'data' => array(
        'name' => 'Living arrangement',
        'path' => array(
          'data' => "['merged_poco']['livingArrangement']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s living arrangement.',
      ),
      'parent' => 'rpxpath-poco',
    ),
    array(
      'id' => 'rpxpath-poco-looking',
      'data' => array(
        'name' => 'Looking for',
        'path' => '',
        'description' => 'User\'s statement about who or what they are looking for.',
      ),
      'parent' => 'rpxpath-poco',
    ),
    array(
      'id' => 'rpxpath-poco-looking-',
      'data' => array(
        'name' => 'Looking for ordinal (?)',
        'path' => array(
          'data' => "['merged_poco']['lookingFor'][?]",
          'class' => array('rpx-path'),
        ),
        'description' => $ordinal_description,
      ),
      'parent' => 'rpxpath-poco-looking',
    ),
    array(
      'id' => 'rpxpath-poco-song',
      'data' => array(
        'name' => 'Profile song',
        'path' => array(
          'data' => "['merged_poco']['profileSong']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s profile song.',
      ),
      'parent' => 'rpxpath-poco',
    ),
    array(
      'id' => 'rpxpath-poco-video',
      'data' => array(
        'name' => 'Profile video',
        'path' => array(
          'data' => "['merged_poco']['profileVideo']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s profile video.',
      ),
      'parent' => 'rpxpath-poco',
    ),
    array(
      'id' => 'rpxpath-poco-relationship',
      'data' => array(
        'name' => 'Relationship status',
        'path' => array(
          'data' => "['merged_poco']['relationshipStatus']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s relationship status.',
      ),
      'parent' => 'rpxpath-poco',
    ),
    array(
      'id' => 'rpxpath-poco-religion',
      'data' => array(
        'name' => 'Religion',
        'path' => array(
          'data' => "['merged_poco']['religion']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s religion.',
      ),
      'parent' => 'rpxpath-poco',
    ),
    array(
      'id' => 'rpxpath-poco-romance',
      'data' => array(
        'name' => 'Romance',
        'path' => array(
          'data' => "['merged_poco']['romance']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s comments about romance.',
      ),
      'parent' => 'rpxpath-poco',
    ),
    array(
      'id' => 'rpxpath-poco-scared',
      'data' => array(
        'name' => 'Scared of',
        'path' => array(
          'data' => "['merged_poco']['scaredOf']",
          'class' => array('rpx-path'),
        ),
        'description' => 'What user is scared of.',
      ),
      'parent' => 'rpxpath-poco',
    ),
    array(
      'id' => 'rpxpath-poco-sexual',
      'data' => array(
        'name' => 'Sexual orientation',
        'path' => array(
          'data' => "['merged_poco']['sexualOrientation']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s sexual orientation.',
      ),
      'parent' => 'rpxpath-poco',
    ),
    array(
      'id' => 'rpxpath-poco-smoker',
      'data' => array(
        'name' => 'Smoker',
        'path' => array(
          'data' => "['merged_poco']['smoker']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s smoking status.',
      ),
      'parent' => 'rpxpath-poco',
    ),
    array(
      'id' => 'rpxpath-poco-status',
      'data' => array(
        'name' => 'Status',
        'path' => array(
          'data' => "['merged_poco']['status']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s status.',
      ),
      'parent' => 'rpxpath-poco',
    ),


    array(
      'id' => 'rpxpath-poco-current',
      'data' => array(
        'name' => 'Current location',
        'path' => '',
        'description' => 'User\'s current location.',
      ),
      'parent' => 'rpxpath-poco',
    ),
    array(
      'id' => 'rpxpath-poco-current-formatted',
      'data' => array(
        'name' => 'Formatted',
        'path' => array(
          'data' => "['merged_poco']['currentLocation']['formatted']",
          'class' => array('rpx-path'),
        ),
        'description' => 'Formatted component.',
      ),
      'parent' => 'rpxpath-poco-current',
    ),
    array(
      'id' => 'rpxpath-poco-current-street',
      'data' => array(
        'name' => 'Street address',
        'path' => array(
          'data' => "['merged_poco']['currentLocation']['streetAddress']",
          'class' => array('rpx-path'),
        ),
        'description' => 'Street address component.',
      ),
      'parent' => 'rpxpath-poco-current',
    ),
    array(
      'id' => 'rpxpath-poco-current-locality',
      'data' => array(
        'name' => 'Locality',
        'path' => array(
          'data' => "['merged_poco']['currentLocation']['locality']",
          'class' => array('rpx-path'),
        ),
        'description' => 'Locality component.',
      ),
      'parent' => 'rpxpath-poco-current',
    ),
    array(
      'id' => 'rpxpath-poco-current-region',
      'data' => array(
        'name' => 'Region',
        'path' => array(
          'data' => "['merged_poco']['currentLocation']['region']",
          'class' => array('rpx-path'),
        ),
        'description' => 'Region component.',
      ),
      'parent' => 'rpxpath-poco-current',
    ),
    array(
      'id' => 'rpxpath-poco-current-postal',
      'data' => array(
        'name' => 'Postal code',
        'path' => array(
          'data' => "['merged_poco']['currentLocation']['postalCode']",
          'class' => array('rpx-path'),
        ),
        'description' => 'Postal code component.',
      ),
      'parent' => 'rpxpath-poco-current',
    ),
    array(
      'id' => 'rpxpath-poco-current-country',
      'data' => array(
        'name' => 'Country',
        'path' => array(
          'data' => "['merged_poco']['currentLocation']['country']",
          'class' => array('rpx-path'),
        ),
        'description' => 'Country component.',
      ),
      'parent' => 'rpxpath-poco-current',
    ),

    array(
      'id' => 'rpxpath-poco-emails',
      'data' => array(
        'name' => 'Emails',
        'path' => '',
        'description' => 'User\'s email addresses.',
      ),
      'parent' => 'rpxpath-poco',
    ),
    array(
      'id' => 'rpxpath-poco-emails-',
      'data' => array(
        'name' => 'Emails ordinal (?)',
        'path' => '',
        'description' => $ordinal_description,
      ),
      'parent' => 'rpxpath-poco-emails',
    ),
    array(
      'id' => 'rpxpath-poco-emails-value',
      'data' => array(
        'name' => 'Email address',
        'path' => array(
          'data' => "['merged_poco']['emails'][?]['value']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s email address.',
      ),
      'parent' => 'rpxpath-poco-emails-',
    ),
    array(
      'id' => 'rpxpath-poco-emails-type',
      'data' => array(
        'name' => 'Email type',
        'path' => array(
          'data' => "['merged_poco']['emails'][?]['type']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s email type.',
      ),
      'parent' => 'rpxpath-poco-emails-',
    ),
    array(
      'id' => 'rpxpath-poco-emails-primary',
      'data' => array(
        'name' => 'Email status',
        'path' => array(
          'data' => "['merged_poco']['emails'][?]['primary']",
          'class' => array('rpx-path'),
        ),
        'description' => 'Primary email address or not.',
      ),
      'parent' => 'rpxpath-poco-emails-',
    ),

    array(
      'id' => 'rpxpath-poco-urls',
      'data' => array(
        'name' => 'URLs',
        'path' => '',
        'description' => 'User\'s URLs.',
      ),
      'parent' => 'rpxpath-poco',
    ),
    array(
      'id' => 'rpxpath-poco-urls-',
      'data' => array(
        'name' => 'URLs ordinal (?)',
        'path' => '',
        'description' => $ordinal_description,
      ),
      'parent' => 'rpxpath-poco-urls',
    ),
    array(
      'id' => 'rpxpath-poco-urls-value',
      'data' => array(
        'name' => 'URL',
        'path' => array(
          'data' => "['merged_poco']['urls'][?]['value']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s URL.',
      ),
      'parent' => 'rpxpath-poco-urls-',
    ),
    array(
      'id' => 'rpxpath-poco-urls-type',
      'data' => array(
        'name' => 'URL type',
        'path' => array(
          'data' => "['merged_poco']['urls'][?]['type']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s URL type.',
      ),
      'parent' => 'rpxpath-poco-urls-',
    ),
    array(
      'id' => 'rpxpath-poco-urls-primary',
      'data' => array(
        'name' => 'URL status',
        'path' => array(
          'data' => "['merged_poco']['urls'][?]['primary']",
          'class' => array('rpx-path'),
        ),
        'description' => 'Primary URL or not.',
      ),
      'parent' => 'rpxpath-poco-urls-',
    ),

    array(
      'id' => 'rpxpath-poco-phone',
      'data' => array(
        'name' => 'Phone numbers',
        'path' => '',
        'description' => 'User\'s phone numbers.',
      ),
      'parent' => 'rpxpath-poco',
    ),
    array(
      'id' => 'rpxpath-poco-phone-',
      'data' => array(
        'name' => 'Phone numbers ordinal (?)',
        'path' => '',
        'description' => $ordinal_description,
      ),
      'parent' => 'rpxpath-poco-phone',
    ),
    array(
      'id' => 'rpxpath-poco-phone-value',
      'data' => array(
        'name' => 'Phone number',
        'path' => array(
          'data' => "['merged_poco']['phoneNumbers'][?]['value']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s phone number.',
      ),
      'parent' => 'rpxpath-poco-phone-',
    ),
    array(
      'id' => 'rpxpath-poco-phone-type',
      'data' => array(
        'name' => 'Phone number type',
        'path' => array(
          'data' => "['merged_poco']['phoneNumbers'][?]['type']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s phone number type.',
      ),
      'parent' => 'rpxpath-poco-phone-',
    ),
    array(
      'id' => 'rpxpath-poco-phone-primary',
      'data' => array(
        'name' => 'Phone number status',
        'path' => array(
          'data' => "['merged_poco']['phoneNumbers'][?]['primary']",
          'class' => array('rpx-path'),
        ),
        'description' => 'Primary phone number or not.',
      ),
      'parent' => 'rpxpath-poco-phone-',
    ),

    array(
      'id' => 'rpxpath-poco-ims',
      'data' => array(
        'name' => 'IMs',
        'path' => '',
        'description' => 'User\'s IM addresses.',
      ),
      'parent' => 'rpxpath-poco',
    ),
    array(
      'id' => 'rpxpath-poco-ims-',
      'data' => array(
        'name' => 'IMs ordinal (?)',
        'path' => '',
        'description' => $ordinal_description,
      ),
      'parent' => 'rpxpath-poco-ims',
    ),
    array(
      'id' => 'rpxpath-poco-ims-value',
      'data' => array(
        'name' => 'IM address',
        'path' => array(
          'data' => "['merged_poco']['ims'][?]['value']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s IM address.',
      ),
      'parent' => 'rpxpath-poco-ims-',
    ),
    array(
      'id' => 'rpxpath-poco-ims-type',
      'data' => array(
        'name' => 'IM type',
        'path' => array(
          'data' => "['merged_poco']['ims'][?]['type']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s IM address type.',
      ),
      'parent' => 'rpxpath-poco-ims-',
    ),
    array(
      'id' => 'rpxpath-poco-ims-primary',
      'data' => array(
        'name' => 'IM address status',
        'path' => array(
          'data' => "['merged_poco']['ims'][?]['primary']",
          'class' => array('rpx-path'),
        ),
        'description' => 'Primary IM address or not.',
      ),
      'parent' => 'rpxpath-poco-ims-',
    ),

    array(
      'id' => 'rpxpath-poco-photos',
      'data' => array(
        'name' => 'Photos',
        'path' => '',
        'description' => 'User\'s photos.',
      ),
      'parent' => 'rpxpath-poco',
    ),
    array(
      'id' => 'rpxpath-poco-photos-',
      'data' => array(
        'name' => 'Photos ordinal (?)',
        'path' => '',
        'description' => $ordinal_description,
      ),
      'parent' => 'rpxpath-poco-photos',
    ),
    array(
      'id' => 'rpxpath-poco-photos-value',
      'data' => array(
        'name' => 'Photo',
        'path' => array(
          'data' => "['merged_poco']['photos'][?]['value']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s photo.',
      ),
      'parent' => 'rpxpath-poco-photos-',
    ),
    array(
      'id' => 'rpxpath-poco-photos-type',
      'data' => array(
        'name' => 'Photo type',
        'path' => array(
          'data' => "['merged_poco']['photos'][?]['type']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s photo type.',
      ),
      'parent' => 'rpxpath-poco-photos-',
    ),
    array(
      'id' => 'rpxpath-poco-photos-primary',
      'data' => array(
        'name' => 'Photo status',
        'path' => array(
          'data' => "['merged_poco']['photos'][?]['primary']",
          'class' => array('rpx-path'),
        ),
        'description' => 'Primary photo or not.',
      ),
      'parent' => 'rpxpath-poco-photos-',
    ),

    array(
      'id' => 'rpxpath-poco-tags',
      'data' => array(
        'name' => 'Tags',
        'path' => '',
        'description' => 'User\'s tags.',
      ),
      'parent' => 'rpxpath-poco',
    ),
    array(
      'id' => 'rpxpath-poco-tags-',
      'data' => array(
        'name' => 'Tags ordinal (?)',
        'path' => '',
        'description' => $ordinal_description,
      ),
      'parent' => 'rpxpath-poco-tags',
    ),
    array(
      'id' => 'rpxpath-poco-tags-value',
      'data' => array(
        'name' => 'Tag',
        'path' => array(
          'data' => "['merged_poco']['tags'][?]['value']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s tag.',
      ),
      'parent' => 'rpxpath-poco-tags-',
    ),
    array(
      'id' => 'rpxpath-poco-tags-type',
      'data' => array(
        'name' => 'Tag type',
        'path' => array(
          'data' => "['merged_poco']['tags'][?]['type']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s tag type.',
      ),
      'parent' => 'rpxpath-poco-tags-',
    ),
    array(
      'id' => 'rpxpath-poco-tags-primary',
      'data' => array(
        'name' => 'Tag status',
        'path' => array(
          'data' => "['merged_poco']['tags'][?]['primary']",
          'class' => array('rpx-path'),
        ),
        'description' => 'Primary tag or not.',
      ),
      'parent' => 'rpxpath-poco-tags-',
    ),

    array(
      'id' => 'rpxpath-poco-relationships',
      'data' => array(
        'name' => 'Relationships',
        'path' => '',
        'description' => 'User\'s relationships.',
      ),
      'parent' => 'rpxpath-poco',
    ),
    array(
      'id' => 'rpxpath-poco-relationships-',
      'data' => array(
        'name' => 'Relationships ordinal (?)',
        'path' => '',
        'description' => $ordinal_description,
      ),
      'parent' => 'rpxpath-poco-relationships',
    ),
    array(
      'id' => 'rpxpath-poco-relationships-value',
      'data' => array(
        'name' => 'Relationship',
        'path' => array(
          'data' => "['merged_poco']['relationships'][?]['value']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s relationship.',
      ),
      'parent' => 'rpxpath-poco-relationships-',
    ),
    array(
      'id' => 'rpxpath-poco-relationships-type',
      'data' => array(
        'name' => 'Relationship type',
        'path' => array(
          'data' => "['merged_poco']['relationships'][?]['type']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s relationship type.',
      ),
      'parent' => 'rpxpath-poco-relationships-',
    ),
    array(
      'id' => 'rpxpath-poco-relationships-primary',
      'data' => array(
        'name' => 'Relationship status',
        'path' => array(
          'data' => "['merged_poco']['relationships'][?]['primary']",
          'class' => array('rpx-path'),
        ),
        'description' => 'Primary relationship or not.',
      ),
      'parent' => 'rpxpath-poco-relationships-',
    ),

    array(
      'id' => 'rpxpath-poco-organizations',
      'data' => array(
        'name' => 'Organizations',
        'path' => '',
        'description' => 'User\'s organizations.',
      ),
      'parent' => 'rpxpath-poco',
    ),
    array(
      'id' => 'rpxpath-poco-organizations-',
      'data' => array(
        'name' => 'Organizations ordinal (?)',
        'path' => '',
        'description' => $ordinal_description,
      ),
      'parent' => 'rpxpath-poco-organizations',
    ),
    array(
      'id' => 'rpxpath-poco-organizations-name',
      'data' => array(
        'name' => 'Organization',
        'path' => array(
          'data' => "['merged_poco']['organizations'][?]['name']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s organization name.',
      ),
      'parent' => 'rpxpath-poco-organizations-',
    ),
    array(
      'id' => 'rpxpath-poco-organizations-department',
      'data' => array(
        'name' => 'Organization department',
        'path' => array(
          'data' => "['merged_poco']['organizations'][?]['department']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s organization department.',
      ),
      'parent' => 'rpxpath-poco-organizations-',
    ),
    array(
      'id' => 'rpxpath-poco-organizations-title',
      'data' => array(
        'name' => 'Job title',
        'path' => array(
          'data' => "['merged_poco']['organizations'][?]['title']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s job title or role within organization.',
      ),
      'parent' => 'rpxpath-poco-organizations-',
    ),
    array(
      'id' => 'rpxpath-poco-organizations-type',
      'data' => array(
        'name' => 'Organization type',
        'path' => array(
          'data' => "['merged_poco']['organizations'][?]['type']",
          'class' => array('rpx-path'),
        ),
        'description' => 'Type of organization (job, school).',
      ),
      'parent' => 'rpxpath-poco-organizations-',
    ),
    array(
      'id' => 'rpxpath-poco-organizations-start',
      'data' => array(
        'name' => 'Start date',
        'path' => array(
          'data' => "['merged_poco']['organizations'][?]['startDate']",
          'class' => array('rpx-path'),
        ),
        'description' => 'The date user joined this organization.',
      ),
      'parent' => 'rpxpath-poco-organizations-',
    ),
    array(
      'id' => 'rpxpath-poco-organizations-end',
      'data' => array(
        'name' => 'End date',
        'path' => array(
          'data' => "['merged_poco']['organizations'][?]['endDate']",
          'class' => array('rpx-path'),
        ),
        'description' => 'The date user left this organization.',
      ),
      'parent' => 'rpxpath-poco-organizations-',
    ),
    array(
      'id' => 'rpxpath-poco-organizations-location',
      'data' => array(
        'name' => 'Location',
        'path' => array(
          'data' => "['merged_poco']['organizations'][?]['location']",
          'class' => array('rpx-path'),
        ),
        'description' => 'Physical location of this organization.',
      ),
      'parent' => 'rpxpath-poco-organizations-',
    ),
    array(
      'id' => 'rpxpath-poco-organizations-description',
      'data' => array(
        'name' => 'Description',
        'path' => array(
          'data' => "['merged_poco']['organizations'][?]['description']",
          'class' => array('rpx-path'),
        ),
        'description' => 'Textual description of the user\'s role.',
      ),
      'parent' => 'rpxpath-poco-organizations-',
    ),

    array(
      'id' => 'rpxpath-poco-accounts',
      'data' => array(
        'name' => 'Accounts',
        'path' => '',
        'description' => 'User\'s accounts.',
      ),
      'parent' => 'rpxpath-poco',
    ),
    array(
      'id' => 'rpxpath-poco-accounts-',
      'data' => array(
        'name' => 'Accounts ordinal (?)',
        'path' => '',
        'description' => $ordinal_description,
      ),
      'parent' => 'rpxpath-poco-accounts',
    ),
    array(
      'id' => 'rpxpath-poco-accounts-domain',
      'data' => array(
        'name' => 'Account domain',
        'path' => array(
          'data' => "['merged_poco']['accounts'][?]['domain']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s account domain.',
      ),
      'parent' => 'rpxpath-poco-accounts-',
    ),
    array(
      'id' => 'rpxpath-poco-accounts-username',
      'data' => array(
        'name' => 'Account username',
        'path' => array(
          'data' => "['merged_poco']['accounts'][?]['username']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s account username.',
      ),
      'parent' => 'rpxpath-poco-accounts-',
    ),
    array(
      'id' => 'rpxpath-poco-accounts-userid',
      'data' => array(
        'name' => 'Account userid',
        'path' => array(
          'data' => "['merged_poco']['accounts'][?]['userid']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s account userid.',
      ),
      'parent' => 'rpxpath-poco-accounts-',
    ),

    array(
      'id' => 'rpxpath-poco-activities',
      'data' => array(
        'name' => 'Activities',
        'path' => '',
        'description' => 'User\'s activities.',
      ),
      'parent' => 'rpxpath-poco',
    ),
    array(
      'id' => 'rpxpath-poco-activities-',
      'data' => array(
        'name' => 'Activities ordinal (?)',
        'path' => array(
          'data' => "['merged_poco']['activities'][?]",
          'class' => array('rpx-path'),
        ),
        'description' => $ordinal_description,
      ),
      'parent' => 'rpxpath-poco-activities',
    ),

    array(
      'id' => 'rpxpath-poco-books',
      'data' => array(
        'name' => 'Books',
        'path' => '',
        'description' => 'User\'s favorite books.',
      ),
      'parent' => 'rpxpath-poco',
    ),
    array(
      'id' => 'rpxpath-poco-books-',
      'data' => array(
        'name' => 'Books ordinal (?)',
        'path' => array(
          'data' => "['merged_poco']['books'][?]",
          'class' => array('rpx-path'),
        ),
        'description' => $ordinal_description,
      ),
      'parent' => 'rpxpath-poco-books',
    ),

    array(
      'id' => 'rpxpath-poco-cars',
      'data' => array(
        'name' => 'Cars',
        'path' => '',
        'description' => 'User\'s favorite cars.',
      ),
      'parent' => 'rpxpath-poco',
    ),
    array(
      'id' => 'rpxpath-poco-cars-',
      'data' => array(
        'name' => 'Cars ordinal (?)',
        'path' => array(
          'data' => "['merged_poco']['cars'][?]",
          'class' => array('rpx-path'),
        ),
        'description' => $ordinal_description,
      ),
      'parent' => 'rpxpath-poco-cars',
    ),

    array(
      'id' => 'rpxpath-poco-children',
      'data' => array(
        'name' => 'Children',
        'path' => array(
          'data' => "['merged_poco']['children']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s children.',
      ),
      'parent' => 'rpxpath-poco',
    ),

    array(
      'id' => 'rpxpath-poco-food',
      'data' => array(
        'name' => 'Food',
        'path' => '',
        'description' => 'User\'s favorite food.',
      ),
      'parent' => 'rpxpath-poco',
    ),
    array(
      'id' => 'rpxpath-poco-food-',
      'data' => array(
        'name' => 'Food ordinal (?)',
        'path' => array(
          'data' => "['merged_poco']['food'][?]",
          'class' => array('rpx-path'),
        ),
        'description' => $ordinal_description,
      ),
      'parent' => 'rpxpath-poco-food',
    ),

    array(
      'id' => 'rpxpath-poco-heroes',
      'data' => array(
        'name' => 'Heroes',
        'path' => '',
        'description' => 'User\'s favorite heroes.',
      ),
      'parent' => 'rpxpath-poco',
    ),
    array(
      'id' => 'rpxpath-poco-heroes-',
      'data' => array(
        'name' => 'Heroes ordinal (?)',
        'path' => array(
          'data' => "['merged_poco']['heroes'][?]",
          'class' => array('rpx-path'),
        ),
        'description' => $ordinal_description,
      ),
      'parent' => 'rpxpath-poco-heroes',
    ),

    array(
      'id' => 'rpxpath-poco-interests',
      'data' => array(
        'name' => 'Interests',
        'path' => '',
        'description' => 'User\'s interests.',
      ),
      'parent' => 'rpxpath-poco',
    ),
    array(
      'id' => 'rpxpath-poco-interests-',
      'data' => array(
        'name' => 'Interests ordinal (?)',
        'path' => array(
          'data' => "['merged_poco']['interests'][?]",
          'class' => array('rpx-path'),
        ),
        'description' => $ordinal_description,
      ),
      'parent' => 'rpxpath-poco-interests',
    ),

    array(
      'id' => 'rpxpath-poco-jobinterests',
      'data' => array(
        'name' => 'Job interests',
        'path' => array(
          'data' => "['merged_poco']['jobInterests']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s job interests.',
      ),
      'parent' => 'rpxpath-poco',
    ),

    array(
      'id' => 'rpxpath-poco-languages',
      'data' => array(
        'name' => 'Languages',
        'path' => '',
        'description' => 'User\'s spoken languages.',
      ),
      'parent' => 'rpxpath-poco',
    ),
    array(
      'id' => 'rpxpath-poco-languages-',
      'data' => array(
        'name' => 'Languages ordinal (?)',
        'path' => array(
          'data' => "['merged_poco']['languagesSpoken'][?]",
          'class' => array('rpx-path'),
        ),
        'description' => $ordinal_description,
      ),
      'parent' => 'rpxpath-poco-languages',
    ),

    array(
      'id' => 'rpxpath-poco-movies',
      'data' => array(
        'name' => 'Movies',
        'path' => '',
        'description' => 'User\'s favorite movies.',
      ),
      'parent' => 'rpxpath-poco',
    ),
    array(
      'id' => 'rpxpath-poco-movies-',
      'data' => array(
        'name' => 'Movies ordinal (?)',
        'path' => array(
          'data' => "['merged_poco']['movies'][?]",
          'class' => array('rpx-path'),
        ),
        'description' => $ordinal_description,
      ),
      'parent' => 'rpxpath-poco-movies',
    ),

    array(
      'id' => 'rpxpath-poco-music',
      'data' => array(
        'name' => 'Music',
        'path' => '',
        'description' => 'User\'s favorite music.',
      ),
      'parent' => 'rpxpath-poco',
    ),
    array(
      'id' => 'rpxpath-poco-music-',
      'data' => array(
        'name' => 'Music ordinal (?)',
        'path' => array(
          'data' => "['merged_poco']['music'][?]",
          'class' => array('rpx-path'),
        ),
        'description' => $ordinal_description,
      ),
      'parent' => 'rpxpath-poco-music',
    ),

    array(
      'id' => 'rpxpath-poco-pets',
      'data' => array(
        'name' => 'Pets',
        'path' => array(
          'data' => "['merged_poco']['pets']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s pets.',
      ),
      'parent' => 'rpxpath-poco',
    ),

    array(
      'id' => 'rpxpath-poco-political',
      'data' => array(
        'name' => 'Political views',
        'path' => array(
          'data' => "['merged_poco']['politicalViews']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s political views.',
      ),
      'parent' => 'rpxpath-poco',
    ),

    array(
      'id' => 'rpxpath-poco-quotes',
      'data' => array(
        'name' => 'Quotes',
        'path' => '',
        'description' => 'User\'s favorite quotes.',
      ),
      'parent' => 'rpxpath-poco',
    ),
    array(
      'id' => 'rpxpath-poco-quotes-',
      'data' => array(
        'name' => 'Quotes ordinal (?)',
        'path' => array(
          'data' => "['merged_poco']['quotes'][?]",
          'class' => array('rpx-path'),
        ),
        'description' => $ordinal_description,
      ),
      'parent' => 'rpxpath-poco-quotes',
    ),

    array(
      'id' => 'rpxpath-poco-sports',
      'data' => array(
        'name' => 'Sports',
        'path' => '',
        'description' => 'User\'s favorite sports.',
      ),
      'parent' => 'rpxpath-poco',
    ),
    array(
      'id' => 'rpxpath-poco-sports-',
      'data' => array(
        'name' => 'Sports ordinal (?)',
        'path' => array(
          'data' => "['merged_poco']['sports'][?]",
          'class' => array('rpx-path'),
        ),
        'description' => $ordinal_description,
      ),
      'parent' => 'rpxpath-poco-sports',
    ),

    array(
      'id' => 'rpxpath-poco-turnoffs',
      'data' => array(
        'name' => 'Turn offs',
        'path' => '',
        'description' => 'User\'s turn offs.',
      ),
      'parent' => 'rpxpath-poco',
    ),
    array(
      'id' => 'rpxpath-poco-turnoffs-',
      'data' => array(
        'name' => 'Turn offs ordinal (?)',
        'path' => array(
          'data' => "['merged_poco']['turnOffs'][?]",
          'class' => array('rpx-path'),
        ),
        'description' => $ordinal_description,
      ),
      'parent' => 'rpxpath-poco-turnoffs',
    ),

    array(
      'id' => 'rpxpath-poco-turnons',
      'data' => array(
        'name' => 'Turn ons',
        'path' => '',
        'description' => 'User\'s turn ons.',
      ),
      'parent' => 'rpxpath-poco',
    ),
    array(
      'id' => 'rpxpath-poco-turnons-',
      'data' => array(
        'name' => 'Turn ons ordinal (?)',
        'path' => array(
          'data' => "['merged_poco']['turnOns'][?]",
          'class' => array('rpx-path'),
        ),
        'description' => $ordinal_description,
      ),
      'parent' => 'rpxpath-poco-turnons',
    ),

    array(
      'id' => 'rpxpath-poco-tv',
      'data' => array(
        'name' => 'TV shows',
        'path' => '',
        'description' => 'User\'s favorite TV shows.',
      ),
      'parent' => 'rpxpath-poco',
    ),
    array(
      'id' => 'rpxpath-poco-tv-',
      'data' => array(
        'name' => 'TV shows ordinal (?)',
        'path' => array(
          'data' => "['merged_poco']['tvShows'][?]",
          'class' => array('rpx-path'),
        ),
        'description' => $ordinal_description,
      ),
      'parent' => 'rpxpath-poco-tv',
    ),

    array(
      'id' => 'rpxpath-friends',
      'data' => array(
        'name' => 'Friends',
        'path' => '',
        'description' => 'User\'s friends.',
      ),
    ),
    array(
      'id' => 'rpxpath-friends-',
      'data' => array(
        'name' => 'Friend ordinal (?)',
        'path' => array(
          'data' => "['friends'][?]",
          'class' => array('rpx-path'),
        ),
        'description' => $ordinal_description,
      ),
      'parent' => 'rpxpath-friends',
    ),

    array(
      'id' => 'rpxpath-access',
      'data' => array(
        'name' => 'Access credentials',
        'path' => '',
        'description' => 'Third party access credentials.',
      ),
    ),
    array(
      'id' => 'rpxpath-access-type',
      'data' => array(
        'name' => 'Type',
        'path' => array(
          'data' => "['accessCredentials']['type']",
          'class' => array('rpx-path'),
        ),
        'description' => 'Type of access.',
      ),
      'parent' => 'rpxpath-access',
    ),
    array(
      'id' => 'rpxpath-access-access',
      'data' => array(
        'name' => 'Access token',
        'path' => array(
          'data' => "['accessCredentials']['accessToken']",
          'class' => array('rpx-path'),
        ),
        'description' => 'Access token.',
      ),
      'parent' => 'rpxpath-access',
    ),
    array(
      'id' => 'rpxpath-access-expires',
      'data' => array(
        'name' => 'Token expiry',
        'path' => array(
          'data' => "['accessCredentials']['expires']",
          'class' => array('rpx-path'),
        ),
        'description' => 'Token expiry.',
      ),
      'parent' => 'rpxpath-access',
    ),
    array(
      'id' => 'rpxpath-access-uid',
      'data' => array(
        'name' => 'UID',
        'path' => array(
          'data' => "['accessCredentials']['uid']",
          'class' => array('rpx-path'),
        ),
        'description' => 'UID.',
      ),
      'parent' => 'rpxpath-access',
    ),
    array(
      'id' => 'rpxpath-access-session',
      'data' => array(
        'name' => 'Session key',
        'path' => array(
          'data' => "['accessCredentials']['sessionKey']",
          'class' => array('rpx-path'),
        ),
        'description' => 'Session key.',
      ),
      'parent' => 'rpxpath-access',
    ),
    array(
      'id' => 'rpxpath-access-eact',
      'data' => array(
        'name' => 'EACT',
        'path' => array(
          'data' => "['accessCredentials']['eact']",
          'class' => array('rpx-path'),
        ),
        'description' => 'Windows Live EACT.',
      ),
      'parent' => 'rpxpath-access',
    ),
    array(
      'id' => 'rpxpath-access-userid',
      'data' => array(
        'name' => 'User ID',
        'path' => array(
          'data' => "['accessCredentials']['userId']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User ID.',
      ),
      'parent' => 'rpxpath-access',
    ),
    array(
      'id' => 'rpxpath-access-oauth-token',
      'data' => array(
        'name' => 'OAuth token',
        'path' => array(
          'data' => "['accessCredentials']['oauthToken']",
          'class' => array('rpx-path'),
        ),
        'description' => 'OAuth token.',
      ),
      'parent' => 'rpxpath-access',
    ),
    array(
      'id' => 'rpxpath-access-oauth-token-secret',
      'data' => array(
        'name' => 'OAuth token secret',
        'path' => array(
          'data' => "['accessCredentials']['oauthTokenSecret']",
          'class' => array('rpx-path'),
        ),
        'description' => 'OAuth token secret.',
      ),
      'parent' => 'rpxpath-access',
    ),

    array(
      'id' => 'rpxpath-sreg',
      'data' => array(
        'name' => 'SReg data',
        'path' => '',
        'description' => 'OpenID Simple Registration data.',
      ),
    ),
    array(
      'id' => 'rpxpath-sreg-dob',
      'data' => array(
        'name' => 'Date of birth',
        'path' => array(
          'data' => "['sreg']['dob']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s date of birth.',
      ),
      'parent' => 'rpxpath-sreg',
    ),
    array(
      'id' => 'rpxpath-sreg-nickname',
      'data' => array(
        'name' => 'Nickname',
        'path' => array(
          'data' => "['sreg']['nickname']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s nickname.',
      ),
      'parent' => 'rpxpath-sreg',
    ),
    array(
      'id' => 'rpxpath-sreg-email',
      'data' => array(
        'name' => 'Email',
        'path' => array(
          'data' => "['sreg']['email']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s email address.',
      ),
      'parent' => 'rpxpath-sreg',
    ),
    array(
      'id' => 'rpxpath-sreg-fullname',
      'data' => array(
        'name' => 'Full name',
        'path' => array(
          'data' => "['sreg']['fullname']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s full name.',
      ),
      'parent' => 'rpxpath-sreg',
    ),
    array(
      'id' => 'rpxpath-sreg-dob',
      'data' => array(
        'name' => 'Date of birth',
        'path' => array(
          'data' => "['sreg']['dob']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s date of birth.',
      ),
      'parent' => 'rpxpath-sreg',
    ),
    array(
      'id' => 'rpxpath-sreg-gender',
      'data' => array(
        'name' => 'Gender',
        'path' => array(
          'data' => "['sreg']['gender']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s gender.',
      ),
      'parent' => 'rpxpath-sreg',
    ),
    array(
      'id' => 'rpxpath-sreg-postcode',
      'data' => array(
        'name' => 'Postcode',
        'path' => array(
          'data' => "['sreg']['postcode']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s postcode.',
      ),
      'parent' => 'rpxpath-sreg',
    ),
    array(
      'id' => 'rpxpath-sreg-country',
      'data' => array(
        'name' => 'Country',
        'path' => array(
          'data' => "['sreg']['country']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s country of residence.',
      ),
      'parent' => 'rpxpath-sreg',
    ),
    array(
      'id' => 'rpxpath-sreg-language',
      'data' => array(
        'name' => 'Language',
        'path' => array(
          'data' => "['sreg']['language']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s preferred language.',
      ),
      'parent' => 'rpxpath-sreg',
    ),
    array(
      'id' => 'rpxpath-sreg-timezone',
      'data' => array(
        'name' => 'Timezone',
        'path' => array(
          'data' => "['sreg']['timezone']",
          'class' => array('rpx-path'),
        ),
        'description' => 'User\'s timezone.',
      ),
      'parent' => 'rpxpath-sreg',
    ),
  );
  return $paths;
}
