Instructions
------------

ofxVLCRemote is a library that allows you to communicate and control the VLC audio/video player in OpenFrameworks. The library will try to connect to a running VLC program configured with the following steps. This means that you need to open VLC before running your program. Only tested on OSX.

To setup VLC, do the following:

- Open VLC and go into preferences
- Press "Show All" in bottom left corner
- Press "Interface" > "Main Interfaces"
- Check the "RC" checkbox
- Press "RC" to the left in the menu
- Check the "Fake TTY" checkbox
- Write "/Users/yourname/vlc.sock" in the UNIX socket ... field (replace yourname with your user name)
- Press save and restart VLC

Installation
------------

To install the library, follow these instructions:

- Open Terminal
- `cd` into your OpenFrameworks addons folder (e.g. `cd Projects/of_prerelease_v007/addons`)
- Clone the repo down: `git clone git://github.com/runemadsen/ofxVLCRemote.git`

Now in the project where you want to use the library:

- Right click the "addons" folder in the XCode menu
- Choose "Add Files To ..."
- Find the "src" folder inside `/addons/ofxVLCRemote`
- include the header file in your project: `#include "ofxVLCRemote.h"`

Example
-------

    ofxVLCRemote vlc; // create the object
    vlc.setup("/Users/rune/vlc.sock"); // pass in path to socket file specified in VLC settings
    vlc.run("add http://2293.live.streamtheworld.com:80/KYSEFMAAC_SC"); // run any command

This means that any of these will do

    +----[ CLI commands ]
    | add XYZ  . . . . . . . . . . . . . . . . . . . . add XYZ to playlist
    | enqueue XYZ  . . . . . . . . . . . . . . . . . queue XYZ to playlist
    | playlist . . . . . . . . . . . . .  show items currently in playlist
    | search [string]  . .  search for items in playlist (or reset search)
    | sort key . . . . . . . . . . . . . . . . . . . . . sort the playlist
    | sd [sd]  . . . . . . . . . . . . . show services discovery or toggle
    | play . . . . . . . . . . . . . . . . . . . . . . . . . . play stream
    | stop . . . . . . . . . . . . . . . . . . . . . . . . . . stop stream
    | next . . . . . . . . . . . . . . . . . . . . . .  next playlist item
    | prev . . . . . . . . . . . . . . . . . . . .  previous playlist item
    | goto, gotoitem . . . . . . . . . . . . . . . . .  goto item at index
    | repeat [on|off]  . . . . . . . . . . . . . .  toggle playlist repeat
    | loop [on|off]  . . . . . . . . . . . . . . . .  toggle playlist loop
    | random [on|off]  . . . . . . . . . . . . . .  toggle playlist random
    | clear  . . . . . . . . . . . . . . . . . . . . .  clear the playlist
    | status . . . . . . . . . . . . . . . . . . . current playlist status
    | title [X]  . . . . . . . . . . . . . . set/get title in current item
    | title_n  . . . . . . . . . . . . . . . .  next title in current item
    | title_p  . . . . . . . . . . . . . .  previous title in current item
    | chapter [X]  . . . . . . . . . . . . set/get chapter in current item
    | chapter_n  . . . . . . . . . . . . . .  next chapter in current item
    | chapter_p  . . . . . . . . . . . .  previous chapter in current item
    | 
    | seek X . . . . . . . . . . . seek in seconds, for instance `seek 12'
    | pause  . . . . . . . . . . . . . . . . . . . . . . . .  toggle pause
    | fastforward  . . . . . . . . . . . . . . . . . . set to maximum rate
    | rewind . . . . . . . . . . . . . . . . . . . . . set to minimum rate
    | faster . . . . . . . . . . . . . . . . . .  faster playing of stream
    | slower . . . . . . . . . . . . . . . . . .  slower playing of stream
    | normal . . . . . . . . . . . . . . . . . .  normal playing of stream
    | rate [playback rate] . . . . . . . . . .  set playback rate to value
    | frame  . . . . . . . . . . . . . . . . . . . . . play frame by frame
    | fullscreen, f, F [on|off]  . . . . . . . . . . . . toggle fullscreen
    | info . . . . . . . . . . . . .  information about the current stream
    | stats  . . . . . . . . . . . . . . . .  show statistical information
    | get_time . . . . . . . . .  seconds elapsed since stream's beginning
    | is_playing . . . . . . . . . . . .  1 if a stream plays, 0 otherwise
    | get_title  . . . . . . . . . . . . . the title of the current stream
    | get_length . . . . . . . . . . . .  the length of the current stream
    | 
    | volume [X] . . . . . . . . . . . . . . . . . .  set/get audio volume
    | volup [X]  . . . . . . . . . . . . . . .  raise audio volume X steps
    | voldown [X]  . . . . . . . . . . . . . .  lower audio volume X steps
    | adev [X] . . . . . . . . . . . . . . . . . . .  set/get audio device
    | achan [X]  . . . . . . . . . . . . . . . . .  set/get audio channels
    | atrack [X] . . . . . . . . . . . . . . . . . . . set/get audio track
    | vtrack [X] . . . . . . . . . . . . . . . . . . . set/get video track
    | vratio [X] . . . . . . . . . . . . . . .  set/get video aspect ratio
    | vcrop, crop [X]  . . . . . . . . . . . . . . . .  set/get video crop
    | vzoom, zoom [X]  . . . . . . . . . . . . . . . .  set/get video zoom
    | vdeinterlace [X] . . . . . . . . . . . . .  set/get video deintelace
    | vdeinterlace_mode [X]  . . . . . . . . set/get video deintelace mode
    | snapshot . . . . . . . . . . . . . . . . . . . . take video snapshot
    | strack [X] . . . . . . . . . . . . . . . . . set/get subtitles track
    | hotkey, key [hotkey name]  . . . . . . . . . . simulate hotkey press
    | menu [on|off|up|down|left|right|select]  . . . . . . . . .  use menu
    | 
    | vlm  . . . . . . . . . . . . . . . . . . . . . . . . .  load the VLM
    | set [var [value]]  . . . . . . . . . . . . . . . . . set/get env var
    | save_env . . . . . . . . . . . .  save env vars (for future clients)
    | alias [cmd]  . . . . . . . . . . . . . . . . set/get command aliases
    | description  . . . . . . . . . . . . . . . . .  describe this module
    | license  . . . . . . . . . . . . . . . . print VLC's license message
    | help, ? [pattern]  . . . . . . . . . . . . . . . . .  a help message
    | longhelp [pattern] . . . . . . . . . . . . . . a longer help message
    | lock . . . . . . . . . . . . . . . . . . . .  lock the telnet prompt
    | logout . . . . . . . . . . . . . .  exit (if in a socket connection)
    | quit . . . . . . . .  quit VLC (or logout if in a socket connection)
    | shutdown . . . . . . . . . . . . . . . . . . . . . . .  shutdown VLC
    +----[ end of help ]
