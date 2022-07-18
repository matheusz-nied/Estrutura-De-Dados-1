#include <stdio.h>

void main()
{
    int n = 10;
    int vector[10] = {5, 0, 0, 3, 4, 4, 1, 5, 10, 8};

    int temporary = 0;

    for (int i = 0; i < n; i++)
    {

        for (int j = i; j < n; j++)
        {
            if (vector[i] < vector[j])
            {
                temporary = vector[i];
                vector[i] = vector[j];
                vector[j] = temporary;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", vector[i]);
    }

}