# Thousand Days and a Day
By 2Cat Studios

NOTE: The README (like the project) is under construction. Expect things to change.

#NOTICE:
>This project has been merged into [LightYear by 2Cat Studios](https://github.com/2CatStudios/LightYear), please see the new repo.



### Table of Contents

0. [Preamble](#preamble)
1. [How to Build](#how-to-build)
	* [Essentials](#essentials)
	* [Required Frameworks](#required-frameworks)
	* [Beginner's Guide](#naught-to-sixty-for-the-novice)
2. [Thanks](#thanks)



#Preamble
---
*Thousand Days and a Day* is an in-development project to bring choose-your-own-adventure games into a modern digital space. The details are still emerging, however our end goal is crystal clear; *TDD* will be an open, expansive, story-driven adventure which takes players on memorable journeys, and asks weighty moral questions with no "right answers". Players will have to live with their mistakes, and the focus will be on creating a unique and engaging story, rather than winning.

Some degree of online play will exist, however we're still deciding on what this will look like. Full realtime and asychronous games are among the options we're considering. We will do all we can to make user stories, from a single addition in the main game, to full games in their own right, as easy to create as possible, and have been working from the very start with this in mind. That said, our primary focus right now is the game itself, and "modding" support will come at a later date.



#How to Build
---
We are not currently releasing compiled builds (as the project is not in a very presentable state), but we do encourage you, dear reader, to take the initiative and build from the master-branch yourself. Following are the steps we take to build the project, and support will certainly be given if you're having any trouble getting it to build on your own machine, please reach out to us on our [website](https://2catstudios.github.io/main.html).

#Essentials

You'll need a compiler that has been updated to at least the C++11 standard. For primary development, we use Apple's standard Clang & LLVM, but [GCC](https://gcc.gnu.org) 4.8.1 or greater should work just as well.

[CMake](https://cmake.org) is used to simplify the building process, and should be kept up to date. The minimum version required is 3.0.

#Required Frameworks

[SDL2](https://www.libsdl.org/download-2.0.php): The core window library we're using. Installation instructions can be found on their website.

[SDL2 TTF](https://www.libsdl.org/projects/SDL_ttf/): An extention to SDL2, which allows us to easily use TTF fonts. Follow the install instructions on their webiste.

[SDL2 Image](https://www.libsdl.org/projects/SDL_image/): Another extention, SDL2 Image allows us to display images in an SDL2 window with ease. This library goes in the same place as SDL2 and SDL2 TTF; follow the installation instructions provided on their website.

#Naught to Sixty for the Novice
### You do have a compiler, right?
If you're on Mac OS X, download the latest stable version of [XCode](https://developer.apple.com/xcode/), for Linux, try [GCC](https://gcc.gnu.org). Windows users should also consider [GCC](https://gcc.gnu.org), although [Visual Studio](https://www.visualstudio.com) may be easier to set up. Keep in mind that [VS does not have a full C++ 14/17 feature-set](https://msdn.microsoft.com/en-us/library/hh567368.aspx).

### Don't forget CMake!
Basically, CMake works with your compiler to build the program, and saves us a lot of time. Once you set everything up, you'll only use CMake every once in a while, so don't worry too much about it. If this is your first time building a program without an IDE, just remain calm, and be sure to follow the steps provided.

### Pull the master branch.
You're here on Github, so this step's a cinch. If you have the [Github Desktop](https://desktop.github.com) client (it's great, you should), just click the little "download to computer" button on this webpage (as of writing this, it's next to the "Download ZIP" button), and it'll open in the application. If you're not using the client, then you surely know how to clone from the command-line, and I don't need to go over it here. Once you've got the source somewhere on your machine, move on to the next step.

### It's time! (Time to use CMake)
Now that you have everything set up, it's time to build the project for immediate testing. Start CMake, and set the source directory to the project's parent folder (Ex: `/Users/michaelbethke/Documents/Development/Projects/Thousand Days and a Day`). Next, tell CMake where to put the applications when they're built (for me, this looks like `/Users/michaelbethke/Documents/Development/Projects/Thousand Days and a Day/build`), and remember this location, you'll need it later.

Once the source and binary directories have been set, just click "Configure". If this is the first time you're building the project (it is), you'll be prompted to specify which generator to use; we prefer Unix Makefiles, but that obviously isn't an option on Windows, so it may be a good idea to go with whatever comes up first. Native compilers should certainly be used, you don't need to mess with that right now. Click done, and hold on, you're about to look like a hacker.

Once the project has been configured, a block of red names and values will be populating the centre, several that are blank. For `CMAKE_BUILD_TYPE`, set the value to 'GENERAL' (without the quotes). Next is the `CMAKE_INSTALL_PREFIX`, which almost certainly has a value. Don't worry about it, unless it doesn't (in which case, turn to Google, this is serious!). Depending on your operating system, the next set of names will be different, but for OS X, you'll see `CMAKE_OSX_ARCHITECTURES`, and `CMAKE_OSX_DEPLOYMENT_TARGET`. For most modern Macs, set the first value to 'x86_64', and assuming that you're running the latest *El Capitan*, your deployment target is '10.11'. The `CMAKE_OSX_SYSROOT` will be set to a path inside XCode.

Now, the rest of the CMake names and values should be about SDL2, and *should* be pointing to the place you installed them. If they're not, don't worry, but you need to make sure they're linked before we move on. Check out [these files](https://github.com/AVividLight/Thousand-Days-and-a-Day/tree/master/cmake) to see where CMake will look for SDL2, if you're having issues.

Click "Generate" once each name has a value, and barring any errors, let's make the application!

### Make the application.
Open your terminal of choice, change the working directory to your build directory (where you told CMake to build the binaries), which can usually be done with the `cd ` command (Ex: `cd /Users/michaelbethke/Documents/Development/Projects/Thousand Days and a Day/build`). Do note: most terminals support drag-and-drop, so just type 'cd ' (don't forget the trailing space), then drop your build folder in, and press return. We're almost done! Just type 'make' now, and unless the project has any blatant errors, you'll eventually see `[100%] Built target ThousandDaysAndADay`. That's a good sign, and means you can navigate to `/bin`, located inside your build directory, to run the program! It'll start up with your terminal, don't let that spook you, and have fun!

Whenever a change is made to the program, whether you edit some code or sync the project with the master branch, you'll need to do this step again. In practice, 'making' can function as your debugger, and keeping a terminal around while you're working on the code is a good idea.


#Thanks
---
We'd like to thank the following for their help, without them, whether they're aware of their assistance or not, this project would not be in as complete a state as it may currently be found. This list is not exhaustive, already, I'm sure I forgot some amazing StackOverflow posts.

[Will Usher](http://www.willusher.io) for the amazing SDL2 tutorials.

[Lazy Foo' Productions](http://lazyfoo.net) for the SDL2 examples.

[Jet Brains](https://www.jetbrains.com) for your CMake explinations.

[The C++ Reference](http://en.cppreference.com/w/) for... existing.
