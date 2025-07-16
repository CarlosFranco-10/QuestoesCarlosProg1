#include <stdio.h>

int main() {
    float num1, num2, inicio, fim, passo;

    // Leitura com consistência
    do {
        printf("Digite o primeiro número: ");
        scanf("%f", &num1);

        printf("Digite o segundo número: ");
        scanf("%f", &num2);

        if (num1 == num2) {
            printf("Os números não podem ser iguais. Tente novamente.\n\n");
        }
    } while (num1 == num2);

    // Define início e fim corretamente
    if (num1 < num2) {
        inicio = num1;
        fim = num2;
    } else {
        inicio = num2;
        fim = num1;
    }

    // Calcula o tamanho de cada parte
    passo = (fim - inicio) / 3.0;

    // Exibe os pontos de divisão
    printf("\nDividindo o intervalo entre %.2f e %.2f em 3 partes iguais:\n", inicio, fim);
    printf("Parte 1: %.2f até %.2f\n", inicio, inicio + passo);
    printf("Parte 2: %.2f até %.2f\n", inicio + passo, inicio + 2 * passo);
    printf("Parte 3: %.2f até %.2f\n", inicio + 2 * passo, fim);

    return 0;
}