servidor: main.o buffer.o config.o http_request.o
	gcc -Wall -o servidor main.o buffer.o config.o http_request.o -D_REENTRANT -lpthread

main: main.c 
	gcc -c main.c

buffer: buffer.c
	gcc -c buffer.c

config: confic.c
	gcc -c config.c

http_request: http_request.c
	gcc -c http_request.c
