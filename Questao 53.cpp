#include <stdio.h>


int ehPrimo(int num) {
    if (num < 2) return 0;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int contador = 3; 
    int numero = 4;

    
    printf("Os 20 primeiros numeros primos (incluindo 1 como pedido):\n");
    printf("1 2 3 ");

    
    while (contador < 20) {
        if (ehPrimo(numero)) {
            printf("%d ", numero);
            contador++;
        }
        numero++;
    }

    printf("\n");
    return 0;
}
