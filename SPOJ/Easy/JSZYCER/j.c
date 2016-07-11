#include <stdio.h>
#include <stdlib.h>
#include <string.h>





int
main(void) {



  char *l_to_me = malloc(200*sizeof(char));
  char ch;
  int i =0 ;
  //char *l_to_me = malloc(z*sizeof(char));
  fgets(l_to_me,200,stdin);
  while((ch =getchar() != EOF))
  {
    l_to_me[i] = ch;
    i++;
    if(i == 200)
    {
      break;
    }
  }
  //l_to_me = fgetc(stdin);
  //fgetc(l_to_me);



  for(int i=0; i<sizeof(l_to_me); i++) {
    if(l_to_me[i] != ' ' && l_to_me[i] != '\0') {
        l_to_me[i] = l_to_me[i] + 3;
        if(l_to_me[i] == 91) {
          l_to_me[i] = 'A';
        }
        else if(l_to_me[i] == 92) {
          l_to_me[i] = 'B';
        }
        else if(l_to_me[i] == 93) {
          l_to_me[i] = 'C';
        }
    }
  }

  puts(l_to_me);
  return 0;
  free(l_to_me);
}
