#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    srand(time(NULL));

    int grupo1[4], grupo2[4], grupo3[4], grupo4[4], grupo5[4];

    for (int i = 0; i < 4; i++)
    {
        grupo1[i] = rand() % 100 + 1;
        grupo2[i] = rand() % 100 + 1;
        grupo3[i] = rand() % 100 + 1;
        grupo4[i] = rand() % 100 + 1;
        grupo5[i] = rand() % 100 + 1;
    }

    bubbleSort(grupo1, 4);
    bubbleSort(grupo2, 4);
    bubbleSort(grupo3, 4);
    bubbleSort(grupo4, 4);
    bubbleSort(grupo5, 4);

    printf("Grupo 1 ordenado: ");
    for (int i = 0; i < 4; i++)
    {
        printf("%d ", grupo1[i]);
    }
    printf("\n");

    printf("Grupo 2 ordenado: ");
    for (int i = 0; i < 4; i++)
    {
        printf("%d ", grupo2[i]);
    }
    printf("\n");

    printf("Grupo 3 ordenado: ");
    for (int i = 0; i < 4; i++)
    {
        printf("%d ", grupo3[i]);
    }
    printf("\n");

    printf("Grupo 4 ordenado: ");
    for (int i = 0; i < 4; i++)
    {
        printf("%d ", grupo4[i]);
    }
    printf("\n");

    printf("Grupo 5 ordenado: ");
    for (int i = 0; i < 4; i++)
    {
        printf("%d ", grupo5[i]);
    }
    printf("\n");

    return 0;
}