#include <stdio.h> 


int main() {
    int X, Y, i;
    unsigned long long resultado = 1;

    
    do {
        printf("Digite o valor de X (inteiro e positivo): ");
        scanf("%d", &X);
    } while (X < 0);

    
    do {
        printf("Digite o valor de Y (inteiro e positivo): ");
        scanf("%d", &Y);
    } while (Y < 0);

    
    for (i = 1; i <= Y; i++) {
        resultado *= X;
    }

    
    printf("%d elevado a %d é: %llu\n", X, Y, resultado);

    return 0;
}
