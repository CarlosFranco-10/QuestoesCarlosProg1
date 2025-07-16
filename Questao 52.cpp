#include <stdio.h>

// Função para calcular o fatorial
unsigned long long fatorial(int num) {
    unsigned long long fat = 1;
    for (int i = 1; i <= num; i++) {
        fat *= i;
    }
    return fat;
}

int main() {
    int N, P;
    unsigned long long arranjo, combinacao;

    // Leitura dos valores de N e P
    printf("Digite o valor de N (tamanho do conjunto): ");
    scanf("%d", &N);

    printf("Digite o valor de P (tamanho do subconjunto): ");
    scanf("%d", &P);

    // Verificação básica
    if (N < 0 || P < 0 || P > N) {
        printf("Valores inválidos! Certifique-se de que 0 <= P <= N.\n");
        return 1;
    }

    // Cálculo de arranjo e combinação
    arranjo = fatorial(N) / fatorial(N - P);
    combinacao = fatorial(N) / (fatorial(P) * fatorial(N - P));

    // Resultados
    printf("\nArranjo A(%d, %d) = %llu\n", N, P, arranjo);
    printf("Combinacao C(%d, %d) = %llu\n", N, P, combinacao);

    return 0;
}