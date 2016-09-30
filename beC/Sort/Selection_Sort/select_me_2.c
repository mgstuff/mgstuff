#include <stdio.h>
#include <stdlib.h>


typedef struct
{
  int arr_size;
  int *arr;
  int min;
  int pos;
  int tmp;

} selection;


void find_min(int *arr, int arr_size, int *min, int position, int *min_index)
{

  *min = arr[position];
  for(int i = position+1; i<arr_size-1; i++)
  {
    if(*min > arr[i])
    {
      *min = arr[i];
      *min_index = i;
    }
  }
}

void swap_and_sort(int *arr, int arr_size, int *min)
{
  int min_index;
  int temp = 0;
  min_index = 0;

  for(int i=0; i<arr_size-1; i++)
  {
      temp = 0;
      temp = arr[i];
      find_min(arr,arr_size, min, i, &min_index);
      arr[i] = arr[min_index];
      arr[min_index] = temp;
  }

}

int
main(void)
{

  selection sel;
  sel.min = 0;
  sel.arr_size = 7;
  sel.arr = malloc(sel.arr_size * sizeof(int));
  sel.pos = 0;
  sel.tmp = 0;

  for(int i=0; i<sel.arr_size; i++)
  {
    scanf("%d", &sel.arr[i]);
  }

  for(int c=0; c< sel.arr_size - 1; c++)
  {
    sel.pos = c;
    for(int d = c+1; d<sel.arr_size; d++)
    {
      if(sel.arr[sel.pos] > sel.arr[d])
      {
        sel.pos = d;
      }
    }
    if(sel.pos != c)
    {
      sel.tmp = sel.arr[c];
      sel.arr[c] = sel.arr[sel.pos];
      sel.arr[sel.pos] = sel.tmp;
    }
  }




  //swap_and_sort(sel.arr, sel.arr_size, &sel.min

  for(int i=0; i<sel.arr_size; i++)
  {
    printf("[%d]%d\n", i, sel.arr[i]);
  }


  free(sel.arr);






  return 0;
}
