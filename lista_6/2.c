#include <stdio.h>
#include <stdlib.h>

void main()
{
   int x, y;

   if (&x > &y){
    printf("%x\n", &x);
   }
   if (&y > &x){
    printf("%x\n", &y);
   }


}