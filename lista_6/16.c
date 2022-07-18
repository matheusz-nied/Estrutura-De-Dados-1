#include <stdio.h>
#include <stdlib.h>

void main()
{
    int A, *B, **C, ***D;

    puts("Digite um valor:");
    scanf("%d", &A);

    printf("A = %d\n", A);

    B = &A;
    *B += A;
    printf("B = %d\n", *B);

    C = &B;
    **C += A;
    printf("C = %d\n", **C);

    D = &C;
    ***D += A;
    printf("D = %d\n", ***D);
}