#include <stdio.h>


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

    
    printf("Digite o valor de N (tamanho do conjunto): ");
    scanf("%d", &N);

    printf("Digite o valor de P (tamanho do subconjunto): ");
    scanf("%d", &P);

   
    if (N < 0 || P < 0 || P > N) {
        printf("Valores inválidos! Certifique-se de que 0 <= P <= N.\n");
        return 1;
    }

    
    arranjo = fatorial(N) / fatorial(N - P);
    combinacao = fatorial(N) / (fatorial(P) * fatorial(N - P));

   
    printf("\nArranjo A(%d, %d) = %llu\n", N, P, arranjo);
    printf("Combinacao C(%d, %d) = %llu\n", N, P, combinacao);

    return 0;
}
