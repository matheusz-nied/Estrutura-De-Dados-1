#include <stdio.h>
#include <stdlib.h>

void soma(int *x, int *y)
{
    *x += *y;
}
void main()
{
    int x, y;

    puts("Digite o valor de x:");
    scanf("%d", &x);

    fflush(stdin);
    puts("Digite o valor de y:");

    scanf("%d", &y);

    soma(&x, &y);

    printf("x = %d | y = %d\n", x, y);
}