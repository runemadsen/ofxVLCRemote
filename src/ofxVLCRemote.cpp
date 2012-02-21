ofxVLCRemote::ofxVLCRemote() {}

ofxVLCRemote::setup(string unix_socket);
{
	_unix_socket = unix_socket;
}

ofxVLCRemote::run(string command);
{
	system("/bin/echo -n  '"+command+"' | nc -U /Users/rune/vlc.sock");
}