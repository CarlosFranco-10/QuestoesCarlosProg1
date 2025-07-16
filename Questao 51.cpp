#include <stdio.h>

int main() {
    int n, i;
    unsigned long long fatorial = 1;

    // Ler número do usuário
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    // Verifica se o número é válido
    if (n < 0) {
        printf("Fatorial não é definido para números negativos.\n");
        return 1;
    }

    // Calcula o fatorial
    for (i = 1; i <= n; i++) {
        fatorial *= i;
    }

    // Exibe o resultado
    printf("O fatorial de %d é: %llu\n", n, fatorial);

    return 0;
}