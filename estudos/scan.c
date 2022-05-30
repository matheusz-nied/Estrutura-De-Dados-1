#include <stdio.h>

void main()
{
    char ch1, ch2;
    printf("Introduza um caractere: ");
    scanf("%c", &ch1);
    printf("Introduza outro caractere: ");

    //Limpando buffer ou ignrando
    scanf(" %c", &ch2);
    fflush(stdin);

    printf("\nCaracteres '%c' e '%c'\n", ch1, ch2);
}