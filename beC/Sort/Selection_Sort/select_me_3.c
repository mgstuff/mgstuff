#include <stdio.h>
#include <stdlib.h>




int
main(void)
{
  int tab[100];


  for(int i=0; i<sizeof(tab)/sizeof(tab[0]); i++)
  {
    tab[i] = rand() % 10232;
  }

  int my_min;
  int tmp;

  for(int i=0; i<100; i++)
  {
    tmp=0;
    for(int j=i+1; j<100; j++)
    {
      if(tab[j] < tab[i])
      {
        my_min = j;
        tmp = tab[i];
        tab[i] = tab[j];
        tab[j] = tmp;
      }
    }
  }



  for(int i=0; i<sizeof(tab)/sizeof(tab[0]); i++)
  {
    printf("[%d]->%d\n", i, tab[i]);
  }





  return 0;
}
