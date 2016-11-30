#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


void
calc(char *tab) {

int sum = 0;


do {
  scanf("%s", tab);
} while(strlen(tab) > 25);

for(int i=0; i<strlen(tab); i++) {
  if(tab[i] == 'a')
  {
    sum +=1;
  }
  else if(tab[i] == 'b')
  {
    sum +=2;
  }
  else if(tab[i] == 'c')
  {
    sum +=3;
  }
  else if(tab[i] == 'd')
  {
    sum +=4;
  }
  else if(tab[i] == 'e')
  {
    sum +=5;
  }
  else if(tab[i] == 'f')
  {
    sum +=6;
  }
  else if(tab[i] == 'g')
  {
    sum +=7;
  }
  else if(tab[i] == 'h')
  {
    sum +=8;
  }
  else if(tab[i] == 'i')
  {
    sum +=9;
  }
  else if(tab[i] == 'k')
  {
    sum +=10;
  }
  else if(tab[i] == 'l')
  {
    sum +=20;
  }
  else if(tab[i] == 'm')
  {
    sum +=30;
  }
  else if(tab[i] == 'n')
  {
    sum +=40;
  }
  else if(tab[i] == 'o')
  {
    sum +=50;
  }
  else if(tab[i] == 'p')
  {
    sum +=60;
  }
  else if(tab[i] == 'q')
  {
    sum +=70;
  }
  else if(tab[i] == 'r')
  {
    sum +=80;
  }
  else if(tab[i] == 's')
  {
    sum +=90;
  }
  else if(tab[i] == 't')
  {
    sum +=100;
  }
  else if(tab[i] == 'v')
  {
    sum +=200;
  }
  else if(tab[i] == 'x')
  {
    sum +=300;
  }
  else if(tab[i] == 'y')
  {
    sum +=400;
  }
  else if(tab[i] == 'z')
  {
    sum +=500;
  }
}

printf("%d\n", sum);

}


int
main(void) {

  char tab[25];
  char *ptr = tab;
  calc(ptr);


  return 0;
}
