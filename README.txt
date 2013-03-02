Users and Permissions

So, we're trying to emulate the Wordpress users and roles setup by default as much as possible here. The reason we're doing this is because it seems to be pretty close to how the "average joe" imagines website security should work. Note that we're not including the Super Administrator.

Obviously we're guessing as to what they "would" have selected, but there's a rundown of how things are supposed to work at http://codex.wordpress.org/Roles_and_Capabilities

The summary is:

Administrator - Somebody who has access to all the administration features
Editor - Somebody who can publish and manage posts and pages as well as manage other users' posts, etc.
Author - Somebody who can publish and manage their own posts
Contributor - Somebody who can write and manage their posts but not publish them
Subscriber - Somebody who can only manage their profile

We're treating "Subscriber" as "Authenticated User".

Justifications for straying from the Wordpress model in some cases:

- Pushing a permission into a Feature forces that module to become a dependency, this could be undesirable
- As well as the "Administrator" role, there is the actual superuser account (uid=1) that should be used by developers. While we want the Administrator to be able to do just about everything, we're not going to pretend that they're developers and should be allowed to do potentially dangerous things like reverting Features and writing their own PHP in text fields
