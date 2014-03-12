<?php

/**
 * Store an Engage identifier and related data in a flat file database instead
 * of Drupal tables (authmap, etc.)
 *
 * In addition to storing the passed information, the hook implementation should
 * also store an external aid (authmap ID) that rpx_core can use to refer to the
 * authmap. The format of this aid is up to the implementing module. The only
 * requirement is that it uniquely identifies the authmap entry.
 *
 * @see hook_rpx_authmap_enumerate()
 * @see hook_rpx_authmap_delete()
 * @see hook_rpx_authmap_lookup()
 *
 * @param $uid
 *   Drupal ID for the user we are storing an authname for.
 * @param $authname
 *   Authname (external user name a.k.a Engage identifier) to store.
 * @param $provider_name
 *   Name of the identity provider the authname is coming from.
 */
function hook_rpx_authmap_insert($uid, $authname, $provider_name) {
  $fp = fopen('/tmp/authmap.db', 'r');

  $data = unserialize(fread($fp, 65536));
  fclose($fp);

  if (!is_array($data)) {
    $data = array();
  }

  // We use the numeric array keys as aids.
  $data[] = array(
    'uid' => $uid,
    'authname' => $authname,
    'provider_name' => $provider_name,
  );

  file_put_contents('/tmp/authmap.db', serialize($data));
}

/**
 * Return an array of all Engage identifiers for a Drupal user. This hook should
 * return the authmap information that was passed to the hook_rpx_authmap_insert()
 * implementation at user signup / 3rd party account linking.
 *
 * @param $uid
 *   Drupal ID for the user we are returning authmaps for.
 *
 * @return
 *   An array of authmap entries. Each entry is keyed by aid and is an
 *   associative array with the following keys:
 *   - uid: Drupal user ID.
 *   - authname: Engage identifier.
 *   - provider_name: identity provider for this 3rd party account.
 */
function hook_rpx_authmap_enumerate($uid) {
  $fp = fopen("/tmp/authmap.db", "r");
  $data = unserialize(fread($fp, 65536));
  fclose($fp);

  // Filter out other users' authmaps.
  foreach ($data as $aid => $authmap) {
    if ($authmap['uid'] != $uid) {
      unset($data[$aid]);
    }
  }
  return $data;
}

/**
 * Delete authmaps.
 *
 * @param $aids
 *   Array of aids for the authmaps that should be deleted.
 */
function hook_rpx_authmap_delete($aids) {
  $fp = fopen('/tmp/authmap.db', 'r');

  $data = unserialize(fread($fp, 65536));
  fclose($fp);

  if (!is_array($data)) {
    $data = array();
  }

  foreach ($data as $aid => $authmap) {
    if (in_array($aid, $aids))  {
      unset($data[$aid]);
    }
  }

  file_put_contents('/tmp/authmap.db', serialize($data));
}

/**
 * Look up a Drupal user ID by Engage identifier (authmap).
 *
 * @param $authname
 *   Engage identifier.
 *
 * @return
 *   ID of the Drupal user the 3rd party account is linked to.
 */
function hook_rpx_authmap_lookup($authname) {
  $fp = fopen("/tmp/authmap.db", "r");
  $data = unserialize(fread($fp, 65536));
  fclose($fp);

  foreach ($data as $aid => $authmap) {
    if ($authmap['authname'] == $authname) {
      return $authmap['uid'];
    }
  }

  return NULL;
}
