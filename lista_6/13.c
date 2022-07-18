#include <stdio.h>
#include <stdlib.h>

int verifica(char *str1[], char *str2[])
{
    int success = 0;

    if (*str2 == 0)
    {
        return str1;
    }
    for (; *str1 != 0; str1++)
    {
        if (*str1 != *str2)
        {
            continue;
        }
        while (1)
        {
            if (*str2 == 0)
            {
                success = 1;
            }
            if (str1++ != str2++)
            {
                break;
            }
        }
    }
    return success;
}
void main()
{
    char str1[] = "ola mundo";
    char str2[] = "mundo";

    int success = verifica(&str1, &str2);

    printf("%d\n", success);
}