#include <stdio.h>
#include <stdlib.h>





int
main(void)
{

  int f[3] = {1,2,3};
  int *z;
  z = f;
  printf("%d\n", *z);
  z++;
  printf("%d\n", *z);






  return 0;
}
