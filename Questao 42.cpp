#include <stdio.h>

int main() {
    int n;
    int H;

    
    do {
        printf("Digite um número inteiro e positivo para n: ");
        scanf("%d", &n);
        if (n <= 0) {
            printf("Número inválido. Tente novamente.\n");
        }
    } while (n <= 0);

    
    H = 10 * n;

    printf("O resultado da soma H = 10 somado %d vezes é: %d\n", n, H);

    return 0;
}