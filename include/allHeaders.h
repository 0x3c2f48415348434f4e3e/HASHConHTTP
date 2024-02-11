#include<stdio.h>
#include<stdlib.h>
#include<netinet/in.h>
#include<stdint.h>
#include<arpa/inet.h>
#include"client.h"
#include"server.h"
#include"errorHandling.h"
#define PORT 5000 //this will be for our port for the server only
#define QUEUE_LENGTH 15

typedef enum Bool {TRUE, FALSE};