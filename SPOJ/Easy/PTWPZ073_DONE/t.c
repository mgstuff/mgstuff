#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void
trans() {

  char tabe[20];


do{
  scanf("%s", tabe);
}while(strlen(tabe) < 4 || strlen(tabe) > 20);

  int f = 0;
  f = strlen(tabe);


  int *tab = calloc(f, sizeof(int));

  for(int i=0; i<f; i++)
  {
    if(tabe[i] == 'A' || tabe[i] == 'B' || tabe[i] == 'C')
    {
      tab[i] = 2;
    }
    else if(tabe[i] == 'D' || tabe[i] == 'E' || tabe[i] == 'F')
    {
      tab[i] = 3;
    }
    else if(tabe[i] == 'G' || tabe[i] == 'H' || tabe[i] == 'I')
    {
      tab[i] = 4;
    }
    else if(tabe[i] == 'J' || tabe[i] == 'K' || tabe[i] == 'L')
    {
      tab[i] = 5;
    }
    else if(tabe[i] == 'M' || tabe[i] == 'N' || tabe[i] == 'O')
    {
      tab[i] = 6;
    }
    else if(tabe[i] == 'P' || tabe[i] == 'Q' || tabe[i] == 'R' || tabe[i] == 'S')
    {
      tab[i] = 7;
    }
    else if(tabe[i] == 'T' || tabe[i] == 'U' || tabe[i] == 'V')
    {
      tab[i] = 8;
    }
    else if(tabe[i] == 'W' || tabe[i] == 'X' || tabe[i] == 'Y' || tabe[i] == 'Z')
    {
      tab[i] = 9;
    }
  }


  for(int i=0; i<strlen(tabe); i++)
  {
    printf("%d",tab[i]);
  }

  free(tab);
}





int
main(void)
{
  int t;
  int z = 0;

do{
    scanf("%d", &t);
}while(t < 1 || t > 20);

for(int i=0;i <t; i++)
{
  trans();
  printf("\n");
}



  return 0;
}
