#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <arpa/inet.h>

int listener_d = socket(PF_INET, SOCK_STREAM, 0);
if(listener_d == -1) {
  error("Cant open socket");
}

struct sockaddr_in name;
name.sin_family = PF_INET;
name.sin_port = (in_port_t)htons(30000);
