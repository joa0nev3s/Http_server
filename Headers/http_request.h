#include <time.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct Http_request {
	int type;
	int socket;
	char* filename;
	FILE * file;
	time_t inicio;
	time_t fim;
}Http_request;


Http_request* create_request(char* filename,int socket);
