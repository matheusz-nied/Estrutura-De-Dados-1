#include <stdio.h>
#include <stdlib.h>

void main()
{
   float number[10] = {1,2,3,4,5,6,7,8,9,10};

   for(int i=0; i<10; i++)
        printf("%x\n", &number[i]);
}