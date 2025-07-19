#include <stdio.h>

int main() {
    int idade;
    char sexo, olhos, cabelos;
    int maior_idade = 0;
    int mulheres_verdes_louros = 0;

    printf("Digite os dados dos habitantes (idade -1 encerra):\n");

    while (1) {
        printf("\nIdade: ");
        scanf("%d", &idade);

        if (idade == -1) break;

        printf("Sexo (M - masculino / F - feminino): ");
        scanf(" %c", &sexo);

        printf("Cor dos olhos (A - azuis / V - verdes / C - castanhos): ");
        scanf(" %c", &olhos);

        printf("Cor dos cabelos (L - louros / C - castanhos / P - pretos): ");
        scanf(" %c", &cabelos);

        if (idade > maior_idade) {
            maior_idade = idade;
        }

        if ((sexo == 'F' || sexo == 'f') &&
            idade >= 18 && idade <= 35 &&
            (olhos == 'V' || olhos == 'v') &&
            (cabelos == 'L' || cabelos == 'l')) {
                mulheres_verdes_louros++;
        }
    }

    printf("\n----- RESULTADOS -----\n");
    printf("Maior idade entre os habitantes: %d anos\n", maior_idade);
    printf("Quantidade de mulheres (18-35 anos) com olhos verdes e cabelos louros: %d\n", mulheres_verdes_louros);

    return 0;
}