#include <stdio.h>
#include <stdlib.h>

void maior_e_quantas_vezes(int *pont, int *maior_numero, int *quantas_vezes, int tamanho);
void main()
{
    int tamanho = 10;
    int maior_numero;
    int quantas_vezes = 0;
    int vetor[10] = {1, 2, 3, 10, 15, 16, 7, 16, 9, 10};

    maior_e_quantas_vezes(vetor, &maior_numero, &quantas_vezes, tamanho);

    printf("Maior numero: %d apareceu %d vezes\n", maior_numero, quantas_vezes);

    printf("\n");
}

void maior_e_quantas_vezes(int *pont, int *maior_numero, int *quantas_vezes, int tamanho){
    
    *maior_numero = *pont;

    for(int i = 0; i < tamanho; i++){
        if( *(pont + i) > *maior_numero){
            *maior_numero = *(pont + i);
        }
    }

    for(int i = 0; i < tamanho; i++){
        if( *(pont + i) == *maior_numero){
            *quantas_vezes += 1;
        }
    }
}
