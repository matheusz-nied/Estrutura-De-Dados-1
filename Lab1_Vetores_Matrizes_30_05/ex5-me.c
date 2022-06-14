// Exercício 4 - Escreva um algoritmo que, ao receber um vetor, faz a ordenação decrescente de seus elementos.

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n = 10;
    int vector[10] = {5, 9, 0, 7, 6, 3, 10, 15, 2, 200};

    int temporary = 0;

    int i;
    for (int i = 0; i < n; i++)
    {

        for (int j = i; j < n; j++)
        {
            if (vector[i] < vector[j])
            {
                temporary = vector[j];
                vector[j] = vector[i];
                vector[i] = temporary;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("%d\n", vector[i]);
    }
}