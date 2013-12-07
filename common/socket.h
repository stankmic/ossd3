/*
 * Socket manipulation functions
 */
#ifndef SOCKET_H
#define SOCKET_H

#include "common/datatypes.h"

#define FAIL_PROBABILITY 0.3

/* Get IP address based on protocol version (IPv4 or IPv6) */
void *get_in_addr(struct sockaddr *sa);

/* Receive the whole message */
int mesg_recv(int socket, message_t **msg);

/* Send message as defined by the protocol
 * if can_fail > 0: message will fail to send with defined probability */
int mesg_send(int socket, uint_8 type, 
    uint_32 id, const char *msg, int can_fail);


#endif /* end of include guard: SOCKET_H */
