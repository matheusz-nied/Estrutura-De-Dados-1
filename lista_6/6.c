#include <stdio.h>
#include <stdlib.h>

int soma_dobro(int *x, int *y)
{

        *x += *x;
        *y += *y;
    
    return *x + *y;
}
void main()
{
    int x, y;

    puts("Digite o valor de x:");
    scanf("%d", &x);

    fflush(stdin);
    puts("Digite o valor de y:");

    scanf("%d", &y);

    int result = soma_dobro(&x, &y);

    printf("x = %d | y = %d | result = %d\n", x, y, result);
}