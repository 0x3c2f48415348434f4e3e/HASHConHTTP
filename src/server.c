#include"../include/allHeaders.h"
#define wins() \
	printf("Window System\n")
#define lins() \
	printf("Linux System\n")
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
	int initiateSocket(){
		//Here is where we are going to create our server stuff


		/*
		Now the steps involved in establising a socket on the server side are as follows
		1. Create a socket instance with the socket() system call
		2. Bind the socket to an address using the bind() system call. For a server socket
		on the internet, an address consists of a port number on the host machine.
		Listen for connections with the listen() system call
		4. Accept a connection with the accept() system call. This call typically
		blocks until a client connects with the server
		5. Send and receive data
		*/

		static int sock;

		sock = socket(AF_INET, SOCK_STREAM,0);
		//check if socket intiialization fails
		if(sock < 0)
		{
			error("Failed to initialise socket. ERROR CODE -> %d");
		}
		return 0;
	}

	//int bindCreatedSocket()
#endif
