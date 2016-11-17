#ifndef buffer_h
#define buffer_h
#include "http_request.h"

typedef struct Buffer_node {
	struct Buffer_node *next;
	Http_request *request;
}Buffer_node;

typedef struct Buffer {
	Buffer_node *first;
	Buffer_node *last;
	int max_size;
	int cur_size;
}Buffer;

Buffer* create_buffer(int size);
Buffer_node* create_node(Http_request *req);
void add_node(Buffer *buf,Http_request *req);
Http_request get_node(Buffer *buf);

#endif
