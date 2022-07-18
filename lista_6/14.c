#include <stdio.h>
#include <stdlib.h>

void prennche(int *pont, int valor, int tamanho)
{

    int i;
    for (i = 0; i < tamanho; i++)
    {
        *(pont + i) = valor;
    }
}
void main()
{
    int tamanho = 15;
    int vetor[15];
    int valor = 10;

    prennche(vetor, valor, tamanho);

    for (int i = 0; i < 15; i++)
    {
        printf("%d - ", vetor[i]);
    }
}