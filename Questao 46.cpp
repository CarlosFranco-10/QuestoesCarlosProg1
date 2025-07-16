#include <stdio.h>
#include <ctype.h>

#define TOTAL_ENTREVISTADOS 500

int main() {
    char sexo, corOlhos, corCabelos;
    int idade;
    int maiorIdade = 0;
    int contadorMulheresEspecificas = 0;

    for (int i = 0; i < TOTAL_ENTREVISTADOS; ++i) {
        printf("Entrevistado #%d\n", i + 1);

        // Leitura do sexo
        do {
            printf("Sexo (M/F): ");
            scanf(" %c", &sexo);
            sexo = toupper(sexo);
        } while (sexo != 'M' && sexo != 'F');

        // Leitura da cor dos olhos
        do {
            printf("Cor dos olhos (A-azuis / V-verdes / C-castanhos): ");
            scanf(" %c", &corOlhos);
            corOlhos = toupper(corOlhos);
        } while (corOlhos != 'A' && corOlhos != 'V' && corOlhos != 'C');

        // Leitura da cor dos cabelos
        do {
            printf("Cor dos cabelos (L-louros / C-castanhos / P-pretos): ");
            scanf(" %c", &corCabelos);
            corCabelos = toupper(corCabelos);
        } while (corCabelos != 'L' && corCabelos != 'C' && corCabelos != 'P');

        // Leitura da idade
        do {
            printf("Idade: ");
            scanf("%d", &idade);
        } while (idade < 0 || idade > 120);

        // Atualiza a maior idade
        if (idade > maiorIdade) {
            maiorIdade = idade;
        }

        // Verifica critério da mulher com características específicas
        if (sexo == 'F' && idade >= 18 && idade <= 35 &&
            corOlhos == 'V' && corCabelos == 'L') {
            contadorMulheresEspecificas++;
        }

        printf("-----------------------------\n");
    }

    // Exibição dos resultados
    printf("\nRESULTADOS DA PESQUISA\n");
    printf("Maior idade do grupo: %d anos\n", maiorIdade);
    printf("Quantidade de mulheres entre 18 e 35 anos com olhos verdes e cabelos louros: %d\n",
           contadorMulheresEspecificas);

    return 0;
}