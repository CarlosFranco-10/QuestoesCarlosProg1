#include <stdio.h>

int main() {
    int soma = 0;
    int contador = 0;

    for (int i = 13; i <= 73; i++) {
        soma += i;
        contador++;
    }

    float media = (float)soma / contador;

    printf("A média aritmética dos números entre 13 e 73 é: %.2f\n", media);

    return 0;
}
