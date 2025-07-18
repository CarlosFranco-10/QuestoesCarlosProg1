#include <stdio.h>


int somatorio(int m) {
    return m * (m + 1) / 2;
}


unsigned long long fatorial(int m) {
    unsigned long long fat = 1;
    for (int i = 2; i <= m; i++) {
        fat *= i;
    }
    return fat;
}

int main() {
    int n, m;

    printf("Quantos valores você deseja ler? ");
    scanf("%d", &n);

    printf("\n%-10s | %-15s | %-20s\n", "Valor", "Somatório (1 a m)", "Fatorial (m!)");
    printf("------------|------------------|----------------------\n");

    for (int i = 1; i <= n; i++) {
        do {
            printf("Digite o %dº valor (positivo): ", i);
            scanf("%d", &m);
            if (m <= 0) {
                printf("Valor inválido! Digite um número inteiro e positivo.\n");
            }
        } while (m <= 0);

        printf("%-10d | %-15d | %-20llu\n", m, somatorio(m), fatorial(m));
    }

    return 0;
}