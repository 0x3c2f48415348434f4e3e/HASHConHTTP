#include"../include/allHeaders.h"
#ifdef _WIN32
	void printSystem(void){
		printf("Window system");
	}
#endif

#ifdef linux
	void printSystem(void){
		printf("Linux System");
	}
#endif
