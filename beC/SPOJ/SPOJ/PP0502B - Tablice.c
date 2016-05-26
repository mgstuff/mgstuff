//
//  PP0502B - Tablice.c
//  SPOJ http://pl.spoj.com/problems/PP0502B/
//
//  Created by Michał Grycki on 26.05.2016.
//  Copyright © 2016 Michał Grycki. All rights reserved.
//

#include <stdio.h>


void
reverseArray()
{
    int numberOfTests;
    int howManyNumbers;
    int test;
    
    scanf("%d", &numberOfTests);
    do
    {
        scanf("%d", &test);
        howManyNumbers = test;
    } while( test > 100 || test<=0);
    
    
    char temp;
    int tabToStore[howManyNumbers];
    
    for(int i=0; i<=numberOfTests; i++)
    {
        for(int j=1; j<=howManyNumbers; j++)
        {
            scanf("%d%c", &tabToStore[j], &temp);
        }
        
        for(int z=howManyNumbers; z>=1; z--)
        {
            printf("%d ",tabToStore[z]);
        }
        printf("\n");
    }
    
    
    
}



int
main(void)
{
    reverseArray();
}