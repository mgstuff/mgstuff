#include <stdio.h>
#include <stdlib.h>



int
main(void) {

  char *val;
  char temp;
  int *pesel = (int*)malloc(11*sizeof(int));;
  int i;
  int l_val;
  int num_to_arr;

  val = "N";
  i = 0;

do {
  scanf("%d%c", &num_to_arr, &temp);
  pesel[i] = num_to_arr;
  i++;
} while (temp != '\n');

for(int j=0; j<11; j++) {
  printf("Val no.[%d]\t%d\n", j, pesel[j]);
}


  free(pesel);

  return 0;
}
