#include <stdio.h>

int main() {
    int num;
    int total = 0, pares = 0, impares = 0;
    int soma_total = 0, soma_pares = 0;

    printf("Digite números positivos (0 para encerrar):\n");

    while (1) {
        scanf("%d", &num);

        if (num == 0) break; 

        if (num < 0) {
            printf("Número negativo ignorado.\n");
            continue;
        }

        soma_total += num;
        total++;

        if (num % 2 == 0) {
            pares++;
            soma_pares += num;
        } else {
            impares++;
        }
    }

    if (total == 0) {
        printf("Nenhum número válido foi inserido.\n");
    } else {
        float media_pares = (pares > 0) ? (float)soma_pares / pares : 0;
        float media_geral = (float)soma_total / total;

        printf("\nQuantidade de pares: %d\n", pares);
        printf("Quantidade de ímpares: %d\n", impares);
        printf("Média dos números pares: %.2f\n", media_pares);
        printf("Média geral dos números: %.2f\n", media_geral);
    }

    return 0;
}