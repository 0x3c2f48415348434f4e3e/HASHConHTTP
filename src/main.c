#include"../include/allHeaders.h"
int main(void){

	printSystem();
	if(initiateSocket() == 0){
		printf("Successfully created socket");
	};
	return 0;
}
