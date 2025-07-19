#include <stdio.h>

int main() {
    int valor;
    int maior, menor;
    long soma = 0;
    int contador = 0;

    printf("Digite até 500 valores inteiros e positivos.\n");
    printf("Para encerrar antes, digite um número negativo.\n");

    while (contador < 500) {
        printf("Valor %d: ", contador + 1);
        scanf("%d", &valor);

        if (valor < 0) {
            printf("Entrada encerrada pelo usuário.\n");
            break;
        }

        if (valor == 0) {
            printf("Valor zero ignorado. Digite um número positivo.\n");
            continue;
        }

        if (contador == 0) {
            maior = menor = valor;
        } else {
            if (valor > maior) maior = valor;
            if (valor < menor) menor = valor;
        }

        soma += valor;
        contador++;
    }

    if (contador > 0) {
        float media = (float)soma / contador;

        printf("\n----- RESULTADOS -----\n");
        printf("Quantidade de valores lidos: %d\n", contador);
        printf("Maior valor: %d\n", maior);
        printf("Menor valor: %d\n", menor);
        printf("Média dos valores: %.2f\n", media);
    } else {
        printf("\nNenhum valor válido foi lido.\n");
    }

    return 0;
}