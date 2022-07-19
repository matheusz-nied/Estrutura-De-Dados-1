#include <stdio.h>
#include <stdlib.h>

void main()
{
    int vetor[14] = {1, 2, 3, 10, 4, 5, 15, 16, 7, 34, 44, 16, 9, 10};
    int *pont;

    pont = vetor;

    for (int i = 0; i < 14; i++)
    {
        *(pont + i) += 1;
    }

    for (int i = 0; i < 14; i++)
    {

            printf("%i\n", vetor[i]);

    }
}
