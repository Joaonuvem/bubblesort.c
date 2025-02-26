#include <stdio.h>

int main()
{

    int vetor1[] = {2, 5, 9, 8, 3};
    int vetor2[] = {7, 4, 1, 10, 6};
    int somavetor[10];
    int i;
    int y;

    for (i = 0; i < 5; i++)
    {
        somavetor[i] = vetor1[i];

        somavetor[i + 5] = vetor2[i];
    }

    for (i = 0; i < 10; i++)
    {
        printf(" %d", somavetor[i]);
        // 2, 5, 9, 8, 3,7, 4, 1, 10, 6
    }

    printf("\n");

/*consegui resolver isso, meu erro não estava sendo o a
 variavel de apoio, e sim as estruturas de repetição */

    for (i = 0; i < 10 - 1; i++)
    {
        for (int j = 0; j < 10 - 1; j++)
        {
            if (somavetor[j] > somavetor[j + 1])
            {
                y = somavetor[j];
                somavetor[j] = somavetor[j + 1];
                somavetor[j + 1] = y;
            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        printf(" %d", somavetor[i]);
    }

    return 0;
}
