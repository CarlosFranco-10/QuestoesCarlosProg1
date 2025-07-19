#include <stdio.h>

unsigned long long fatorial(int num) {
    unsigned long long fat = 1;
    for (int i = 2; i <= num; i++) {
        fat *= i;
    }
    return fat;
}

int main() {
    int N, valor;

    printf("Quantos valores você quer ler? ");
    scanf("%d", &N);

    printf("\n%-10s | %s\n", "Valor", "Fatorial");
    printf("-----------|-------------------------\n");

    for (int i = 1; i <= N; i++) {
        printf("Digite o %dº valor: ", i);
        scanf("%d", &valor);

        if (valor < 0) {
            printf("Fatorial não definido para números negativos.\n");
        } else {
            printf("%-10d | %llu\n", valor, fatorial(valor));
        }
    }

    return 0;
}