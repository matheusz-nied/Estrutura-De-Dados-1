#include <stdio.h>
#include <stdlib.h>

void main()
{
    int number[5];

    int *pont = number;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o %dª valor: ", i + 1);
        scanf("%d", &pont[i]);

        fflush(stdin);
    }

    for (int i = 0; i < 5; i++)
    {

        printf("%d\n", pont[i] * 2);
    }
}