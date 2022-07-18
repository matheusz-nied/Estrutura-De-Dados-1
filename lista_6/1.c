#include <stdio.h>
#include <stdlib.h>

void main()
{
    int x = 0;
    float y = 3.14;
    char z = 'z';

    int *pont_x = &x;
    float *pont_y = &y;
    char *pont_z = &z;

    printf("x = %d\n", x);
    printf("y = %f\n", y);
    printf("z = %c\n", z);

    *pont_x = 1;
    *pont_y = 1.66667;
    *pont_z = 'O';

    printf("Mudando as variaveis\n");

    printf("x = %d\n", x);
    printf("y = %f\n", y);
    printf("z = %c\n", z);
}