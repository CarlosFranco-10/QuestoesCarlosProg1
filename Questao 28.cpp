#include <stdio.h>

int main() {
    int n, i;
    float S = 0;

    printf("Digite um valor inteiro e positivo para n: ");
    scanf("%d", &n);

    while (n <= 0) {
        printf("Valor inválido. Digite um número inteiro **positivo**: ");
        scanf("%d", &n);
    }

    printf("\nS = ");

    for (i = 1; i <= n; i++) {
        S += 1.0 / i;

        if (i == 1)
            printf("1");
        else
            printf(" + 1/%d", i);
    }

    printf("\n\nValor final de S: %.6f\n", S);

    return 0;
}