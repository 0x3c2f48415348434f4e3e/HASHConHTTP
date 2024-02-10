#include"../include/allHeaders.h"
int main(void){

	printSystem();

	if(initiateSocket() == 0){
		printf("Successfully created socket");
	}
	if(bindCreatedSocket() == 0){
		printf("Successfully binded socket to address %s and port %d\n",inet_ntoa(returnAddress()),PORT);
	}

	return 0;
}
