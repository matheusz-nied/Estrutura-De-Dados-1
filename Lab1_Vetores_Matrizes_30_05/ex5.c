//Exercício 4 - Escreva um algoritmo que, ao receber um vetor, faz a ordenação decrescente de seus elementos.

#include <stdio.h>
#include <stdlib.h>

void ex5(int n, int *v)
{
    int temporary = 0;

    int i;
    for (i = 0; i < n; i++)
    {
    
        int j;
        for(j = i ; j < n; j++)
        {
            if (v[i] < v[j])
            {
                temporary = v[j];
                v[j] = v[i];
                v[i] = temporary;
            }
        }
    }

   
    
}