#include <stdio.h>
#include <stdlib.h>



int
main(void)
{
  //2d array - 5 records of 10 lenght
  int i,j;

  scanf("%d %d", &i, &j);
  char name[i][j];

  for(int z=0; z<i; z++)
  {
    scanf("%10s", name[z]);
  }

  printf("\n\n");

  for(int z = 0; z<i; z++)
  {
    printf("%s\n", name[z]);
  }


  printf("\n\n");


  char *myName = malloc(j*sizeof(int));
  scanf("Which name: %s", myName);

  free(myName);

  return 0;
}
