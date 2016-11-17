#include "buffer.h"

Buffer* create_buffer(int size){
	Buffer* buf=(Buffer*)malloc(sizeof(Buffer));
	buf->max_size=size;
	buf->cur_size=0;
	buf->first = (Buffer_node*)malloc(sizeof(Buffer_node));
	buf->last=buf->first;

	return buf;
}

Buffer_node* create_node(Http_request* req){
	Buffer_node* bn=(Buffer_node*)malloc(sizeof(Buffer_node));
	bn->request=req;
	bn->next=NULL;
	return bn;
}

void add_node(Buffer* buf,Http_request* req){
	if(buf->cur_size!=buf->max_size){
		Buffer_node* bn=create_node(req);
		buf->last->next=bn;
		buf->last=bn;
		buf->cur_size++;
	}
	else
		printf("Buffer is Full!\n Request not added to buffer!\n");
}

Http_request* get_first(Buffer* buf){
	Http_request* req;
	Buffer_node* aux=(buf->first)->next;
	buf->first->next=NULL;
	req=buf->first->request;
	free(buf->first);
	buf->first=aux;
	return req;
}
