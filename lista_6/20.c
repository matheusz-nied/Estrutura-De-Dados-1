#include <stdio.h>
#include <stdlib.h>

int negativos(float *vet, int N);

void main()
{
    int count;
    float vetor[14] = {1, 2, 3, 10, -4, -5, 15, 16, 7, -34, -44, -16, 9, 10};

    count = negativos(vetor, 14);
    printf("%d\n", count);
}

int negativos(float *vet, int N)
{
    int count;

    for (int i = 0; i < N; i++)
    {
        if (*(vet + i) < 0)
        {
            count++;
        }
    }

    return count;
}
