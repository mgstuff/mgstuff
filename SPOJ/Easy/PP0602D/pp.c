#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int arr_size;
  int move_me;
  int *cool_arr;
  int *am_second;
  int i_want_to_be_in_array;
  char tmp;
  int i;
  int super_tmp;

} amArray;



void
imHereTo(amArray *am)
{
  am->i = 0;

//  am->am_second = malloc(sizeof(int));
  scanf("%d %d", &am->arr_size, &am->move_me);
  am->cool_arr = (int*)calloc(am->arr_size, sizeof(int));
  //am->am_second = realloc(am->am_second, am->arr_size * sizeof(int));

  do {
		scanf("%d%c", &am->i_want_to_be_in_array, &am->tmp);
		am->cool_arr[am->i] = am->i_want_to_be_in_array;
		am->i++;
		if(am->i == am->arr_size) {
			break;
		}
	} while( am->tmp != '\n');

  for(int j=0; j<am->arr_size; j++)
  {
    am->cool_arr[j] = am->cool_arr[j<<am->move_me];
  }
  for(int j=0; j<am->arr_size; j++)
  {
    printf("[%d]%d\n", j, am->cool_arr[j]);
  }





    free(am->cool_arr);
  //  free(am->am_second);




}




int
main(void)
{
  amArray am;
  imHereTo(&am);


  return 0;
}
