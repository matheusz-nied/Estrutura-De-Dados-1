//Exercício 4 - Escreva um algoritmo que, ao receber um vetor com n elementos e imprime seus valores

#include <stdio.h>
#include <stdlib.h>

void ex4(int n, int *v)
{

    int i;
    for( i = 0; i< n; i++){
            printf("%d", v[i]);
    }
    
   }