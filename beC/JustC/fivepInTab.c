#include <stdio.h>
#include <stdlib.h>


int *SortAscending(int *array,int arraySize)
{
    
    
    return 0;
}


int main(void)
{
    int arraySize = 10;
    int arrayToStore[arraySize];
    
    arrayToStore = (int *)malloc(arraySize * sizeof(int));
    
    
    int *array = arrayToStore;
    
    printf("%d\n\n",*array);
    
    SortAscending(array,arraySize);
    
    
    return 0;
}