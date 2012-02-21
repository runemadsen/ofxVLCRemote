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