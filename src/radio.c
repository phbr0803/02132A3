/*
 * radio.c
 *
 * Emulation of radio node using UDP (skeleton)
 */

// Implements
#include "radio.h"

// Uses
#include <sys/socket.h>
#include <arpa/inet.h>
#include <stdio.h>
#include <string.h>

int sock;    // UDP Socket used by this node
#define PORT 50


int radio_init(int addr) {
    struct sockaddr_in sa;   // Structure to set own address

    // Check validity of address
    if(addr < 0){
    	return ERR_FAILED;

    }

    // Create UDP socket
    if ((sock = socket(AF_LOCAL, SOCK_DGRAM, 0)) == -1){
    	return ERR_FAILED;

    }

    // Prepare address structure
    sa.sin_family = AF_LOCAL;
    sa.sin_port = htons(PORT);
    sa.sin_addr.s_addr = htonl(addr);

    // Bind socket to port
    if (bind(sock, (struct sockaddr *) &sa, sizeof(sa)) < 0){
    	return ERR_FAILED;

    }
    return ERR_OK;
}

int radio_send(int  dst, char* data, int len) {

    struct sockaddr_in sa;   // Structure to hold destination address

    // Check that port and len are valid


    // Emulate transmission time

    // Prepare address structure

    // Send the message

    // Check if fully sent

    return ERR_OK;
}

int radio_recv(int* src, char* data, int to_ms) {

    struct sockaddr_in sa;   // Structure to receive source address

    int len = -1;            // Size of received packet (or error code)


    // First poll/select with timeout (may be skipped at first)

    // Then get the packet

    // Zero out the address structure

    // Receive data

    // Set source from address structure
    // *src = ntohs(sa.sin_port);



    return len;
}

