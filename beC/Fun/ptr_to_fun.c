#include <stdlib.h>
#include <stdio.h>
#include <string.h>





int
main(void) {

  char *alfa = "ABCDE";
  for(int i=0; i<strlen(alfa); i++)
  {
    if(alfa[i] == 'C')
    {
      for(int j=i; j<strlen(alfa); j++){
        printf("%c", alfa[j]);
      }
    }
  }

  return 0;
}
