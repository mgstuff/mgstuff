#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int
main(void)
{
  srand(time(NULL));
  int how_big = 100000;
  int *tab = malloc(how_big * sizeof(int));
  //int tab[] = {8,5,7,1,9,3,6,4,2,7,8,4,3,4};
  int cap = how_big;
  int my_turn;
  int your_turn;

  for(int i=0; i<cap; i++)
  {
    tab[i] = rand() % 235312;
  }

clock_t start = clock(), diff;
  for(int i=0; i<cap; i++)
  {
    your_turn = 0;
    my_turn = 0;
    my_turn = tab[i];
    for(int j=i+1; j<cap; j++)
    {
      if(tab[j] < my_turn)
      {
        my_turn = tab[j];
        your_turn = tab[i];
        tab[i] = my_turn;
        tab[j] = your_turn;
      }
    }
  }
  diff = clock() - start;
  int msec = diff * 1000/ CLOCKS_PER_SEC;

for(int i=0; i<cap; i++)
{
  printf("[%d]->%d\n", i, tab[i]);
}
  printf("Time taken %d seconds %d miliseconds", msec/1000, msec %1000);

free(tab);

  return 0;
}
