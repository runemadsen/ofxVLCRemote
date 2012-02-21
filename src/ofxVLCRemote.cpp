#include "ofxVLCRemote.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

ofxVLCRemote::ofxVLCRemote() {}

void ofxVLCRemote::setup(string unix_socket)
{
	_unix_socket = unix_socket;
}

void ofxVLCRemote::run(string command)
{
    string cmd = "/bin/echo -n  '";
    cmd.append(command);
    cmd.append("' | nc -U ");
		cmd.append(_unix_socket);
    system(cmd.c_str());
}