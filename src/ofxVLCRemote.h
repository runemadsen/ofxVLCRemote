#ifndef _OFXVLCREMOTE_H
#define _OFXVLCREMOTE_H

#include <string>
using namespace std;

class ofxVLCRemote {

	public:
		ofxVLCRemote();
		void setup(string unix_socket);
		void run(string command);
		
		string _unix_socket;
};

#endif
