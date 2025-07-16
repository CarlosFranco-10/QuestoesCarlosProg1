#include <stdio.h>
int main() {
    int sexo, idade;
    float altura;

    int totalPessoas = 1000;
    int contador = 0;

    int somaIdadeTotal = 0;
    int somaIdadeHomens = 0;
    int qtdHomens = 0;

    float somaAlturaMulheres = 0;
    int qtdMulheres = 0;

    int qtdIdadeEntre18e35 = 0;

    do {
        printf("Pessoa %d\n", contador + 1);

        // Leitura e validação do sexo
        do {
            printf("Sexo (0 - feminino, 1 - masculino): ");
            scanf("%d", &sexo);
        } while (sexo != 0 && sexo != 1);

        // Leitura da idade
        printf("Idade: ");
        scanf("%d", &idade);

        // Leitura da altura
        printf("Altura (em metros): ");
        scanf("%f", &altura);

        // Soma total das idades
        somaIdadeTotal += idade;

        if (sexo == 1) {
            somaIdadeHomens += idade;
            qtdHomens++;
        } else {
            somaAlturaMulheres += altura;
            qtdMulheres++;
        }

        if (idade >= 18 && idade <= 35) {
            qtdIdadeEntre18e35++;
        }

        contador++;
        printf("\n");

    } while (contador < totalPessoas);

    // Cálculos finais
    float mediaIdadeGrupo = (float)somaIdadeTotal / totalPessoas;
    float mediaAlturaMulheres = (qtdMulheres > 0) ? somaAlturaMulheres / qtdMulheres : 0;
    float mediaIdadeHomens = (qtdHomens > 0) ? (float)somaIdadeHomens / qtdHomens : 0;
    float percentualIdade18a35 = ((float)qtdIdadeEntre18e35 / totalPessoas) * 100;

    // Resultados
    printf("=== RESULTADOS ===\n");
    printf("a) Média da idade do grupo: %.2f anos\n", mediaIdadeGrupo);
    printf("b) Média da altura das mulheres: %.2f m\n", mediaAlturaMulheres);
    printf("c) Média da idade dos homens: %.2f anos\n", mediaIdadeHomens);
    printf("d) Percentual de pessoas com idade entre 18 e 35 anos: %.2f%%\n", percentualIdade18a35);

    return 0;
}