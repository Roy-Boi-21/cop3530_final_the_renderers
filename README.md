You must have SFML downloaded onto your system in order to use the UI. This is the link with the version we downloaded:
https://www.sfml-dev.org/download/sfml/2.5.1/

Make sure to save your SFML folder as C:/SFML so all the directories work.

Additionally go inside your SFML/bin folder. There you will see a bunch of dll files. Copy them into the cmake-build-debug folder of the project.

Finally, we reccomend using the compiler MinGW version 11 paired with GCC 13.2 as that is what allowed us to use the filesystem library as well as SFML without any issues.
You can download this specific version from here:
https://winlibs.com/

Make sure to reload your cmake project to configure it for your system.
