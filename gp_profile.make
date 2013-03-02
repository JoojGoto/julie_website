core = 7.x
api = 2

; Pull in stuff for base
includes[base_d7_build] = "base_d7_build.make"

; FYI - the name of this file needs to be the same as the project name as it is referenced in the stub
; or it won't be discovered!

; Need this or we won't be able to build the profile at all
libraries[profiler][download][type] = "get"
libraries[profiler][download][url] = "http://ftp.drupal.org/files/projects/profiler-7.x-2.0-beta1.tar.gz"

; Extend the build below here

; --Custom Modules--

; projects[example][type] = module
; projects[example][download][type] = "git"
; projects[example][download][url] = "git://github.com/godel-design/CLIENTNAME_theme.git"
; projects[example][subdir] = "custom"

; --Patches--

; projects[example][patch][] = "http://drupal.org/files/123456_example_3.patch"

; --Libraries--

; libraries[example][download][type] = "get"
; libraries[example][download][url] = "http://example.com/example.tar.gz"
; libraries[example][directory_name] = "example"
; libraries[example][destination] = "modules/contrib/example"

; --Contrib--

; Stable Version

; projects[example][version] = "3.9"
; projects[example][subdir] = "contrib"

; Dev Snapshot

; projects[example][download][type] = "git"
; projects[example][download][url] = "http://git.drupal.org/project/example.git"
; projects[example][download][revision] = "md5-hash-goes-here"
; projects[example][subdir] = contrib