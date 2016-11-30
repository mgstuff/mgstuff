#include <stdio.h>
#include <stdlib.h>



int
main(void) {


int num_of_te = 0;
scanf("%d\n", &num_of_te);

for(int z = 0; z<num_of_te; z++) {

  int *pesel = (int*)malloc(12*sizeof(int));
  int sum = 0;
  char val;
  val = 'N';

for(int z=1; z<=11; z++) {
  scanf("%d", &pesel[z]);
}

for(int j=1; j<=11; j++) {
  if(j == 1 || j == 5 || j == 9 || j == 11) {
    sum += pesel[j] * 1;
    //printf("NOW I CALCULATE NO.[%d]\t %d\t sum {%d}\n", j, pesel[j], sum);
  }
  else if(j == 2 || j == 6 || j == 10) {
    sum += pesel[j] * 3;
    //printf("NOW I CALCULATE NO.[%d]\t %d\t sum {%d}\n", j, pesel[j], sum);
  }
  else if(j == 3 || j == 7) {
    sum +=  pesel[j] * 7;
    //printf("NOW I CALCULATE NO.[%d]\t %d\t sum {%d}\n", j, pesel[j], sum);
  }
  else if(j == 4 || j == 8) {
    sum +=  pesel[j] * 9;
    //printf("NOW I CALCULATE NO.[%d]\t %d\t sum {%d}\n", j, pesel[j], sum);
  }
}

  if((sum % 10) == 0) {
    val = 'D';
  }
  else if((sum % 10) != 0) {
    val = 'N';
  }

  printf("%c\n",val);
  free(pesel);
}
  return 0;
}
