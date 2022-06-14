//Exercício 3 - Escreva um algoritmo que, dados n elementos inteiros em um vetor, retorna a soma de seus elementos.

#include <stdio.h>
#include <stdlib.h>

int ex3(int n, int *v)
{
    int soma_numeros = 0;
    
    int i;
    for( i = 0; i< n; i++){
            soma_numeros += v[i];
    }
    return soma_numeros;
    
}
