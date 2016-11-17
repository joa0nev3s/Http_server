#include "http_request.h"

Http_request* create_request(char* filename,int socket){
	//int time=time();	
	Http_request * req=(Http_request*)malloc(sizeof(Http_request));
	FILE *fp=fopen(filename,"r");
	req->socket=socket;
	req->filename=filename;
	req->file=fp;
	//req->inicio=localtime(&time);
	return req;
}
