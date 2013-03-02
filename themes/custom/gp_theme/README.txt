It is very important that the first time you use CLIENTNAME_theme that you read INSTALL.txt!

Notes:

* Bootstrap is a LESS library provided by Twitter, in its default form it uses the comma separated syntax for arguments passed to LESS mixins, but lessphp (the php parser used by the drupal less module) uses a semicolon separated syntax for arguments. To get Bootstrap working, we've had to manually replace commas with semicolons in the library where appropriate, but we're still not 100% certain that we got every single one or that we weren't over-zealous in places. If you're trying out a new mixin from bootstrap and can't get it to work then one of the first things to check (after your own code) is the syntax in the library.

Usage:

* The online documentation for bootstrap is not bad - http://twitter.github.com/bootstrap/
  
These files have default variables inside them and ignoring or not setting these can cause some Bootstrap functionality to break to various extents. Losing purple buttons might not be the end of the world, but failing to set layout variables can completely disable the CSS grid functionality which is a bit worse.

Mixins/Constants Quick Reference

The constants and mixins files are meant to help you split out your code so that you and anyone else who works on your project know exactly where to look for different types of values and stored information. The names of the files are fairly self-explanatory but we'll break it down here for you anyway:

* We're not using the default variables.less provided by bootstrap as it is a bit limiting, instead everything is split across a few different files in "css"

CONSTANTS
constants-filepaths.less 
* A good place to store filepaths. These can later be used in functions that rely on filepaths to locate images etc. (eg. background images, sprites, logos.)
* eg. @base-url: "http://assets.fnord.com";

constants-swatch.less
* Store colours here. Hex, RGB, RGBa. Good for CSS3 issues with compatibility and general reusable colours. 
* eg. @dark-red {
    		background-color: transparent;
  			background-color: rgba(180, 180, 144, 0.6);  /* Firefox 3+, Safari 3+, Opera 10.10+, Chrome, IE9 */
            filter: progid:DXImageTransform.Microsoft.gradient(startColorstr=#99B4B490,endColorstr=#99B4B490); /* IE6–IE9 */
            zoom: 1;
}

constants-type.less 
* For fonts and basic styles taken directly from indesign. Best practice we've found is to namespace them exactly the same as in your .indd but prefixed with @p- or @c- depending on whether they're paragraph or character styles.
* eg. @p-bodycopy {
			font-face: 'Basic Font';
			font-size: 13.5px; 
			font-weight: bold;
			text-decoration: none;
}

constants-layout.less 
* Keep fixed heights, widths, margins, paddings, borders, and other construction-based values in this file to reuse in nice, well-thought-out designs. 
* eg. @box-front {
		height: 300px;
		width: 130px;
		border-top: 2px solid @colour;
		margin: 0 auto;
}

MIXINS
mixins-bootstrap.less
* Pre-established mixins from Bootstrap. Useful; use your own parameters. 

mixins-styles.less
* Make more complex mixins using pre-established constants and parameters set in your major stylesheet. "styles" is in opposition to "utility" so use this for less hectic, more subtle styling issues that probably won't break the site if you get them wrong?
* eg. .border-radius (@radius) {
  border-radius: @radius;
  -moz-border-radius: @radius;
  -webkit-border-radius: @radius;
}

mixins-utility.less
* Make calculations using variables set in constants and parameters set in your major stylesheet to create complex variables to be reused.
* eg. .border-radius (@radius: 5px) {
  border-radius: @radius;
  -moz-border-radius: @radius;
  -webkit-border-radius: @radius;
}


Please help me flesh this out, it just involves reading through patterns.less and mixins.less in bootstrap, and mixins.less in css/patterns, trying them out and then documenting them here! really not hard.