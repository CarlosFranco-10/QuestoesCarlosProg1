#include <stdio.h> 


int main() {
    int X, Y, i;
    unsigned long long resultado = 1;

    // Ler X
    do {
        printf("Digite o valor de X (inteiro e positivo): ");
        scanf("%d", &X);
    } while (X < 0);

    // Ler Y
    do {
        printf("Digite o valor de Y (inteiro e positivo): ");
        scanf("%d", &Y);
    } while (Y < 0);

    // Calcular potência X^Y
    for (i = 1; i <= Y; i++) {
        resultado *= X;
    }

    // Exibir resultado
    printf("%d elevado a %d é: %llu\n", X, Y, resultado);

    return 0;
}