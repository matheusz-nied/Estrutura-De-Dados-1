//Exercício 2 - Escreva um algoritmo que, dados n elementos inteiros em um vetor, retorna o maior elemento entre eles.

#include <stdio.h>
#include <stdlib.h>

int ex2(int n, int *v)
{
    int maior_numero = 0;
    
    int i;
    for( i = 0; i< n; i++){
        if(maior_numero < v[i]){
            maior_numero = v[i];
        }
    }
    return maior_numero;
}
