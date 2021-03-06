#include "network.hpp"
#ifndef __V_TYPES__
#define __V_TYPES__
  #define _INTSIZE(n) ((n+ 7 - 1) % ~(7 - 1))

typedef struct{
    char actualsize;
    int data;
}varint;
typedef struct{
    varint sz;
    char data[256];
}mc_str;
char* readmc_str(int sockfd);
varint readvarint(int fd);
void writevarint(varint value,int sockfd) ;
void getactualvarintsize(varint *v);
void writemc_str(mc_str in,int sockfd);
#endif
