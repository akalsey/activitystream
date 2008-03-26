$Id: README.txt,v 1.1 2008/03/26 00:46:11 akalsey Exp $

Copyright 2008 Adam Kalsey http://kalsey.com

Description
-----------

Bring all your activity on the web into Drupal. Activity Stream builds a lifestream for you by aggregating your social activities all in one place. Whether it's bookmarks on Del.icio.us and Ma.gnolia, pictures on Flickr, music on Last.fm, or posts on your blog, anything you create can be gathered into one easy to read stream. The module comes with support for a half dozen popular sites and support for any site that publishes an RSS or Atom feed. Developers can create integrations with any other site using a simple API.

Every item in your stream is a full Drupal node. This means they can be searched, promoted, commented on, and managed just like any other content in Drupal. The output is fully themeable and the default theme uses plenty of classes so you can use CSS to make sure everything fits in with your site.

Each third party site integration is a small Drupal module, so you can easily decide which ones you want to offer and which ones to leave out. Included in the download are modules for Del.icio.us, Digg, Flickr, Last.fm, Twitter, and any other site through a feed. 

Developers can build modules to add more third party integrations. The API allows you to simply add configuration options to both the admin settings and the user's profile page. It provides theme functions so you can override how Activity Stream displays items from your module, and end users can further override with their own themes. 

Developing for the API is very simple. The Flickr integration is only about 100 lines of code, and about 1/3 of that is comments.

Development sponsored by <a href="http://lockergnome.com">Lockergnome</a>.

Installation
------------

 1. Extract the compressed download
 
 2. Upload the entire activitystream directory to your site's modules directory.
    (Don't know where to put it? sites/all/modules is a good choice.)
    
 3. Go to Admin -> Site Building -> Modules and activate the Activity Stream API
    and any plugin modules for it that you'd like to use.
    
Configuration
-------------
    
 1. Go to Admin -> Settings -> Activity Stream and configure any admin settings
    required by the plugin modules. For instance, to use Flickr, you'll need a
    Flickr API key from http://www.flickr.com/services/api/misc.api_keys.html
    
 2. Go to your profile and edit it to add your account information for each service
    you would like to use. Just click the Activity Stream tab to add your streams.
    
 3. Your stream will appear in your profile. It will also appear on a page by itself
    at http://example.com/stream/{your-user-id} and on a page with all other user's
    streams at http://example.com/stream