#include <stdio.h>

int main() {
    int N, i;
    unsigned long long fatorial = 1;  

    
    do {
        printf("Digite um valor inteiro e positivo: ");
        scanf("%d", &N);
        if (N < 0) {
            printf("Valor inválido! Digite um número positivo.\n");
        }
    } while (N < 0);

    
    for (i = 1; i <= N; i++) {
        fatorial *= i;
    }

   
    printf("O fatorial de %d é: %llu\n", N, fatorial);

    return 0;
}
