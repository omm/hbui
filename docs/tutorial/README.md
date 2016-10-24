# **Welcome to project HBUI**

### Hello!
If we are going to spend a few hours together, I propose - call me Rafał. I will add more only that this project was created by my good friends from the group Harbour - Teo, Viktor, Bogdan. I am impressed clarity, simplicity and logical programming in Harbour so I propose you to spend a few moments in the land of programming Harbour with me.

### Preliminary assumptions
This tutorial is designed for beginners who are getting started the adventure with Harbour, and I think that If I make mistake, you will correct me.

### My friends from the group Harbour
I invite everyone to build this guide and build project HBUI.


# Instaling in Linux
I would like to present Linux distribution called "Elementary". It is user-friendly, simple and at the same time nicely presents the operating system. This is of course free like every non-commercial Linux distribution. Don't worry if you never use the system under the sign of the penguin Tux because this is also a good suggestion to start.

### We start
Open a terminal window and write:
```
$ sudo apt-get install git
```
Elementary doesn't have `cmake` so you need to install it:
```
$ sudo apt-get install cmake
```
GTK+ is a cross-platform widget toolkit for creating graphical user interfaces:
```
$ sudo apt-get install libgtk-3-dev
```
Installation Harbour. The compilation may take a few minutes:
```
$ git clone https://github.com/harbour/core.git harbour
$ cd harbour
$ make
```
Change directory:
```
$ cd
```
Installation libui:
```
$ git clone https://github.com/andlabs/libui
$ cd libui
$ mkdir build
$ cd build
$ cmake ..
$ make
```
Change directory:
```
$ cd
```
Installation HBUI:
```
$ git clone https://github.com/rjopek/hbui
```
Run text editor:
```
$ vi .profile
```
and write in: **export HB_WITH_LIBUI="$HOME/libui"**

Open root account which is administrator of the system and then run text editor:
```
# vi /etc/ld.so.conf
```
and write in: **/home/username/libui/build/out** <br>
username = is your user name for example, on my Linux it is so: **/home/rafa/libui/build/out**
```
# reboot
```
Now we can proceed to compile hbui:
```
$ cd hbui
$ hbmk2 hbui.hbp
$ cd samples
$ hbmk2 01.prg -run
```
# Instaling in Windows
Welcome after the break. I hope that holidays were successful. Some people say that programming Windows is boring, undemanding and the programmer is wasted.

### We start
Install Microsoft Visual Studio is an integrated development environment (IDE) from Microsoft.
Visual Studio Community. Free, fully-featured IDE for students, open-source and individual developer.

Then install
`cmake` you can download [here](https://cmake.org/download/) <br>
start a command line and write:
```
c:\>cmake --version
cmake version 3.7.0-rc1
```
Then install
`make` you can download [here](http://gnuwin32.sourceforge.net/packages/make.htm) <br>
start a command line and write:
```
c:\>make --version
GNU Make 3.81
```
In both cases it should show version, if don't,  you need to add the variable - PATH

Now let's go to the Visual Studio after startup, select from the menu: <br>
Tools->External Tools... configure to your need, click Add and in the empty field, write:
- Title: HBUI
- Command: C:\Windows\System32\cmd.exe
- Arguments: /k "C:\Program Files (x86)\Microsoft Visual Studio 14.0\Common7\Tools\VsDevCmd.bat"
- Initial directory: c:/hbui/samples
- Apply OK

Now we can start again from the menu Tools->HBUI:
```
c:\hbui\samples>
```

and go to the catalog where you installed libui and follow the instructions:
```
c:\libui\build>cmake -G "Unix Makefiles" ..
c:\libui\build>make
```

We can build examples for libui:
```
c:\libui\build>make examples
```

Now we can proceed to compilation our library:
```
c:\hbui>set HB_WITH_LIBUI=c:\libui
c:\hbui>hbmk2 hbui.hbp
c:\hbui>cd samples
c:\hbui\samples>hbmk2 01.prg -run
```

Remember, you have to do a compilation Harbour from Visual Studio !!!

The only mistake lies in that I'm not able to perceive what it is that someone else did. ;-)

Do not worry, will be an easier way compilation.
