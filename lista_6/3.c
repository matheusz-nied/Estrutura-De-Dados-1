#include <stdio.h>
#include <stdlib.h>

void main()
{
    int x, y;

    puts("Digite o valor de x:");
    scanf("%d", &x);

    fflush(stdin);
    puts("Digite o valor de y:");

    scanf("%d",&y);

    if (x > y)
    {
        printf("Maior é %d\n", x);
    }
    else
    {
        printf("Maior é %d\n", y);
    }
}