#include <stdio.h>

// Função para verificar se um número é primo (exceto 1)
int ehPrimo(int num) {
    if (num < 2) return 0;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int contador = 3; // já temos 1, 2 e 3
    int numero = 4;

    // Imprime os três primeiros manualmente
    printf("Os 20 primeiros numeros primos (incluindo 1 como pedido):\n");
    printf("1 2 3 ");

    // Busca os próximos 17 números primos
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