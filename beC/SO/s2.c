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

  char tab[65000];

  struct passwd *p;
  uid_t uid;

  p = getpwuid(1);
  printf("%s\t%s\t%d\t%d\t%s",p->pw_name, p->pw_passwd, p->pw_uid, p->pw_gid,p->pw_gecos);

  return 0;





}
