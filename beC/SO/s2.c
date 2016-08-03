#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <getopt.h>
#include <sys/types.h>
#include <pwd.h>



int
main(int argc, char **argv)
{
  /*
  char tab[5000];
  int option;
  while((option = getopt(argc, argv, "cf")) !=-1)
  {

  }
  strcpy(tab, "who -a");
  system(tab);
*/
  int a= 4;
  int *ptr = NULL;

  ptr = &a;
  *ptr++;

  printf("%d\n", *ptr);



  return 0;





}
