#include <stdio.h>
#include <stdlib.h>


int
main(void)
{
  int tab[7];
  int y_num;
  int f=1;
  printf("What number u want:");
  scanf("%d", &y_num);

  for(int i=0; i<sizeof(tab)/sizeof(int); i++)
  {
    tab[i] = f;
    f +=1;
  }

  for(int i=0; i<sizeof(tab)/sizeof(int); i++)
  {
    printf("%d\n", tab[i]);
  }

  int min = 0; //index
  int max = sizeof(tab)/sizeof(int) - 1; //index
  int mid = (min+max)/2; //index

for(int i=min; i<=max; i++)
{
  printf("MID is now index %d\n", mid);

  if(tab[mid] < y_num)
  {
    min = mid+1;
  }
  else if(tab[mid] > y_num)
  {
    max = mid -1;
  }
  else if(tab[mid] == y_num)
  {
    printf("Your num -\t-\t-> %d is at index %d\n", y_num, mid);
    break;
  }
  if(min > max)
  {
    printf("THERES NO YOUR NUMBER\n");
    break;
  }
  mid = (min+max)/2; //index
}



  return 0;
}
