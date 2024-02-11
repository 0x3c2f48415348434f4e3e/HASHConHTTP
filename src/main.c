#include"../include/allHeaders.h"
int main(void){

	printSystem();

	if(initiateSocket() == 0){
		printf("Successfully created socket\n");
	}
	if(bindCreatedSocket() == 0){
		printf("Successfully binded socket to address %s and port %d\n",inet_ntoa(returnAddress()),PORT);
	}
	if(listenForClient() == 0){
		printf("Server listening\n");
	}

	handleClient();

	cleanUp();
	return 0;
}
