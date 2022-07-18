#include <stdio.h>
#include <stdlib.h>

void main()
{
    int tamanho;
    int vetor[15];
    int *pont = vetor;


    *(pont + 1) = 1;
    *(pont + 2) = 2;
    *(pont + 3) = 3;
 
    for (int i = 0; i <15; i++) {
        printf("%d - ", *(pont + i));
    }
}