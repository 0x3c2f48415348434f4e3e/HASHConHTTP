#include"../include/allHeaders.h"
#define wins() \
	printf("Window System\n")
#define lins() \
	printf("Linux System\n")

	struct sockaddr_in *server;//*client;
	//define the struct(for internet stuff) for our server and client
	int serverSocket;
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

		//allocate mempry for the server
		server = (struct sockaddr_in *) malloc(sizeof(struct sockaddr_in));
		/*
		Now the steps involved in establising a socket on the server side are as follows
		1. Create a socket instance with the socket() system call
		2. Bind the socket to an address using the bind() system call. For a server socket
		on the internet, an address consists of a port number on the host machine.
		3. Listen for connections with the listen() system call
		4. Accept a connection with the accept() system call. This call typically
		blocks until a client connects with the server
		5. Send and receive data
		*/
		//populate our structure for the server only. Remeber we create a pointer to the struct
		server->sin_family = AF_INET;
		//for now, lets focus on making the serve work on our local host and later will will migrate to the internet
		server->sin_port = htons(PORT); //for now lets pick port 5000 as that is the port i usually used for live server
		//What is htons() -> https://stackoverflow.com/questions/19207745/htons-function-in-socket-programing
		server->sin_addr.s_addr = htonl(INADDR_LOOPBACK); //using documentation: https://www.man7.org/linux/man-pages/man7/ip.7.html
		//what is htonl
		serverSocket = socket(AF_INET, SOCK_STREAM,0);
		//check if socket intiialization fails
		if(serverSocket < 0)
		{
			error("Failed to initialise socket\n");
		}
		return 0;
	}

	int bindCreatedSocket(){
		int __bind;
		//Bind our socket with the address and port we set
		__bind = bind(serverSocket, (const struct sockaddr *) server, sizeof(*server));
		if(__bind < 0){
			error("Failed to bind socket\n");
		}
		return 0;
	}

	struct in_addr returnAddress(void){
		return server->sin_addr;
	}


	void cleanUp(void){
		free(server);
		server = NULL;
	}

	int listenForClient(void){
		int __listen;
		__listen = listen(serverSocket,QUEUE_LENGTH); //listen has the backlog parsmeter that is essentially the queue for our clients.
		if(__listen < 0){
			error("Failed to bind socket\n");

		}
		return 0;
	}

	void handleClient(){
		while
	}
#endif
