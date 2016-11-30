#include <stdio.h>
#include <stdlib.h>
#include <time.h>




int
main(void)
{
  srand(time(NULL));
  int *tab;
  int how_m_bits;
  int polynomial_size;
  int polynomial[4] = {1,0,1,1};
  int new_size;

  scanf("%d", &how_m_bits);
  tab = malloc(how_m_bits * sizeof(int));
  for(int i=0; i<how_m_bits; i++)
  {
    tab[i] = rand() & 1;
  }

  for(int i=0; i<how_m_bits; i++)
  {
    printf("[%d]%d\n",i,tab[i]);
  }

  //scanf("%d", &polynomial_size);
  polynomial_size = 4;

  new_size = how_m_bits + polynomial_size-1;
  tab = realloc(tab, new_size * sizeof(int));

  printf("%d\n", how_m_bits);
  for(int i=how_m_bits; i<new_size; i++)
  {
    tab[i] = 0;
  }


  for(int i=0; i<new_size; i++)
  {
    if(i>=how_m_bits)
    {
      printf("[%d]%d CRC BIT\n",i, tab[i]);
    }
    else
    {
      printf("[%d]%d\n",i,tab[i]);
    }
  }



  free(tab);

  return 0;
}
