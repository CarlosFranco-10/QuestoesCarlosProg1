#include <stdio.h>
#include <string.h>

#define TOTAL_CIDADES 200

int main() {
    int codCidade[TOTAL_CIDADES];
    char estado[TOTAL_CIDADES][3];
    int veiculos[TOTAL_CIDADES];
    int acidentes[TOTAL_CIDADES];

    int i;
    int maiorIndice = -1, menorIndice = -1;
    int codMaior = 0, codMenor = 0;
    int somaVeiculos = 0;
    int somaAcidentesRS = 0, contRS = 0;

    for (i = 0; i < TOTAL_CIDADES; i++) {
        printf("Cidade %d\n", i + 1);

        printf("Código da cidade: ");
        scanf("%d", &codCidade[i]);

        printf("Estado (ex: RS, SC, SP): ");
        scanf("%s", estado[i]);

        printf("Número de veículos de passeio em 1992: ");
        scanf("%d", &veiculos[i]);

        printf("Número de acidentes com vítimas em 1992: ");
        scanf("%d", &acidentes[i]);

        
        if (i == 0 || acidentes[i] > maiorIndice) {
            maiorIndice = acidentes[i];
            codMaior = codCidade[i];
        }

        if (i == 0 || acidentes[i] < menorIndice) {
            menorIndice = acidentes[i];
            codMenor = codCidade[i];
        }

        
        somaVeiculos += veiculos[i];

        
        if (strcmp(estado[i], "RS") == 0) {
            somaAcidentesRS += acidentes[i];
            contRS++;
        }

        printf("\n");
    }

    printf("a) Maior índice de acidentes: %d (Cidade %d)\n", maiorIndice, codMaior);
    printf("   Menor índice de acidentes: %d (Cidade %d)\n", menorIndice, codMenor);

    printf("b) Média de veículos nas cidades: %.2f\n", somaVeiculos / (float)TOTAL_CIDADES);

    if (contRS > 0) {
        printf("c) Média de acidentes com vítimas no RS: %.2f\n", somaAcidentesRS / (float)contRS);
    } else {
        printf("c) Nenhuma cidade do Rio Grande do Sul foi registrada.\n");
    }

    return 0;
}