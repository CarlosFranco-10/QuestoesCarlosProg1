#include <stdio.h>

int main() {
    int codigo;
    float preco_custo, preco_novo;
    float soma_custo = 0, soma_novo = 0;
    int quantidade = 0;

    printf("Digite o código e o preço de custo dos produtos (código negativo encerra):\n");

    while (1) {
        printf("\nCódigo do produto: ");
        scanf("%d", &codigo);

        if (codigo < 0) break;

        printf("Preço de custo: R$ ");
        scanf("%f", &preco_custo);

        preco_novo = preco_custo * 1.20;

        soma_custo += preco_custo;
        soma_novo += preco_novo;
        quantidade++;

        printf("Código: %d | Novo preço (20%% de aumento): R$ %.2f\n", codigo, preco_novo);
    }

    if (quantidade > 0) {
        float media_custo = soma_custo / quantidade;
        float media_novo = soma_novo / quantidade;

        printf("\n----- RESULTADOS FINAIS -----\n");
        printf("Média dos preços de custo: R$ %.2f\n", media_custo);
        printf("Média dos preços com aumento: R$ %.2f\n", media_novo);
    } else {
        printf("\nNenhum produto foi cadastrado.\n");
    }

    return 0;
}