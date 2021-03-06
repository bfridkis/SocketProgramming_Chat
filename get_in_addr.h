/***********************************************
** Program name: get_in_addr.h
** Class name: CS372
** Author: Ben Fridkis
** Date: 7/16/2018
** Description: Header file for get_in_addr.c.
************************************************/

#ifndef get_in_addr_h
#define get_in_addr_h

#include <sys/socket.h>
#include <netinet/in.h>

void *get_in_addr(struct sockaddr *sa);

#endif /* get_in_addr_h */