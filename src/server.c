#include"../include/allHeaders.h"
#define wins printf("Window System")
#define lins printf("Linux System")
#ifdef _WIN32
	void printSystem(void){
		wins();
	}
	//create socket (Just copy the name of the function for linux section)
#endif

#ifdef linux
	#include<sys/socket.h>
	void printSystem(void){
		lins();
	}
	//create socket
	int initiateSocket()
#endif
