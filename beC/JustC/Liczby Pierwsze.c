#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void findPrime(int nTest)
{
    int toCheck;
    int sqrtCheck;

    for(int i=1; i<=nTest; i++)
    {
        scanf("%d",&toCheck);
        sqrtCheck = sqrt(toCheck);

        for(int i = 2; i<=sqrtCheck; i++)
        {
            if(!(toCheck%i == 0))
            {
                printf("TAK");
            }
        }
    }
}



