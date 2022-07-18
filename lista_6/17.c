#include <stdio.h>
#include <stdlib.h>

void frac(float num, int *inteiro, float *frac)
{
    *inteiro = (int)num;
    *frac = num - *inteiro;
}

void main()
{
    float number = 3.141592;
    int part_inteira;
    float part_fracionaria;

    frac(number, &part_inteira, &part_fracionaria);

    printf("Inteira: %d e Fracionaria: %f\n", part_inteira, part_fracionaria);
}