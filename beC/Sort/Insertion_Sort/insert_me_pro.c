#include <stdio.h>
#include <stdlib.h>




void sort_me(int *tab, int cap)
{
  int *im_min;
  int *im_next;



  for(int i=cap-1; i>0; i--)
  {
    im_min = &tab[cap-1];
    for(int j = cap-2; j>0; i--)
    {
      im_next = &tab[cap-2];
    }
  }
}


int
main(void)
{

  int cap = 10;
  int *tab = malloc(sizeof(int) * cap);
  sort_me(tab,cap);




  return 0;
}
