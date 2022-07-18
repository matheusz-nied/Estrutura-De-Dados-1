#include <stdio.h>
#include <stdlib.h>

void imprimir(int *pont, int tamanho)
{

    int i;
    for (i = 0; i < tamanho; i++)
    {
        printf("%d ", *(pont + i));
    }
}
void main()
{
    int tamanho = 10;
    int vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    imprimir(vetor, tamanho);

}