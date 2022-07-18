#include <stdio.h>
#include <stdlib.h>

int ordena(int *x, int *y, int *z)
{
    int aux;

    if (*x == *y == *z)
    {
        return 1;
    }

    if (*x < *y)
    {

        if (*x < *z)
        {
            if (*y < *z)
            {
                return 0;
            }
            else
            {
                aux = *y;
                *y = *z;
                *z = aux;

                return 0;
            }
        }
    }
    if (*y < *x)
    {
        aux = *x;
        *x = *y;
        *y = aux;

        if (*z < *x)
        {
            aux = *x;
            *x = *z;
            *z = aux;
            return 0;
        }
        if (*z < *y)
        {
            aux = *z;
            *z = *y;
            *y = aux;
            return 0;
        }

        return 0;
    }

    if (*z < *x)
    {
        aux = *x;
        *x = *z;
        *z = aux;

        if (*z < *x)
        {
            aux = *x;
            *x = *z;
            *z = aux;
            return 0;
        }
        if (*z < *y)
        {
            aux = *z;
            *z = *y;
            *y = aux;
            return 0;
        }

        return 0;
    }
}
void main()
{
    int x, y, z;

    puts("Digite o valor de x:");
    scanf("%d", &x);

    fflush(stdin);
    puts("Digite o valor de y:");
    scanf("%d", &y);

    fflush(stdin);
    puts("Digite o valor de z:");
    scanf("%d", &z);

    int result = ordena(&x, &y, &z);

    printf("x = %d | y = %d | z = %d\n", x, y, z);
}