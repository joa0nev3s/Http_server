#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct Config{
	int port;
	char *schedule;
	int nthreads;
	char * allowed;
}Config;




Config* config_read();
//int split (const char *str, char c, char ***arr);
