#include <sys/types.h>
#include <sys/socket.h>






//Socket for TCP connection on server side
int sockTCP;
sockET = socket(PF_INET,SOCK_STREAM,0);

//Socket for UDP connection
int sockUDP;
sockUDP = socket(PF_INET, SOCK_DGRAM, 0);

//After initialization of socket on client site, now we have active socket, that initiate connection to server socket

int connect(int sockfd, struct sockaddr *server_adrr, int addrlen);
/*
  * sockfd - deskryptor gniazda,jest to socket ktory wczesniej utworzylismy, czyli np sockTCP albo sockUDP,

  * struct sockaddr *server_adrr - wskaznik do struktury adresowej opisujacej proces serwera...
  * ... zazwyczaj zamiast niej uzywamy struktury dla konkretnej domeny
  * DLA PF_INET
  * sockaddr_in
  * struct sockaddr_in
  * {
  *    sa_family_t     sin_family; /* domena adresowa - dokladnie to samo co parametr domain w socket(int domain...); , wiec np PF_INETl
  *    short int       sin_port    /* numer portu
  *    struct in_addr  sin_addr;   /*adres internetowy
  * }

 * addrlen - wielkosc(w bajtach) struktury zawierajacej adres;
*/

recv(int s, void *buf, int len, usgined int flags);

/* Function to recive message from socket
  * int s - deskryptor gniazda, czyli to co zwrocilo wywolanie socket(...), czyli u nas np sockTCP
  * buf - wskaznik do buffora w ktorym zostana umieszczone odebrane dane, czyli np jakas tablica
  * len - wielkosc powyzszego buffora
  * flags - ustawienie jednej z flag
*/

send(int s, const void *msg, int len, usigned int flags);

/* Function to send messages to another socket
  * int s - deskryptor gniazda
  * *msg - wskaznik do buffora ktory chcemy wyslac
  * len - dlugosc buffora
  *
*/

int shutdown(int fd);

/* Zakoczenie polaczenia
  * int fd - standardowy parametr -> deskryptor gniazda
*/
