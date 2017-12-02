
#ifndef STRUCT_H
#define STRUCT_H
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct conn{
    char * ip;
    int port;
}Conn;

void set_ip(Conn connection, char *ip);
void set_port(Conn connection, int port);

#endif 

