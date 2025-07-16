#include <stdio.h>
int main() {
    char nome[100];
    float compras, bonus;
    int i;

    for (i = 1; i <= 150; i++) {
        printf("Cliente %d\n", i);

        printf("Digite o nome do cliente: ");
        scanf(" %[^\n]", nome);  // lê nome com espaços

        printf("Digite o valor das compras no ano passado: R$ ");
        scanf("%f", &compras);

        // Calcula o bônus
        if (compras < 500000) {
            bonus = compras * 0.10;
        } else {
            bonus = compras * 0.15;
        }

        // Exibe a correspondência
        printf("\n--- MENSAGEM PARA O CLIENTE ---\n");
        printf("Prezado(a) %s,\n", nome);
        printf("Com base em suas compras de R$ %.2f no ano passado,\n", compras);
        printf("você recebeu um bônus especial de R$ %.2f!\n", bonus);
        printf("Aproveite suas vantagens!\n\n");
    }

    return 0;
}