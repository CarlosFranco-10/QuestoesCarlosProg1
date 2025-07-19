#include <stdio.h>

int main() {
    int idade, qtd_pessoas = 0;
    float salario, soma_salario = 0;
    char sexo;
    int maior_idade = 0, menor_idade = 0;
    int mulheres_ate_100 = 0;
    int primeira_entrada = 1;

    printf("Digite os dados dos habitantes (idade negativa encerra):\n");

    while (1) {
        printf("\nIdade: ");
        scanf("%d", &idade);

        if (idade < 0) break;

        printf("Sexo (M/F): ");
        scanf(" %c", &sexo); 

        printf("Salário: R$ ");
        scanf("%f", &salario);

        soma_salario += salario;
        qtd_pessoas++;

        if (primeira_entrada) {
            maior_idade = idade;
            menor_idade = idade;
            primeira_entrada = 0;
        } else {
            if (idade > maior_idade) maior_idade = idade;
            if (idade < menor_idade) menor_idade = idade;
        }

        if ((sexo == 'F' || sexo == 'f') && salario <= 100) {
            mulheres_ate_100++;
        }
    }

    if (qtd_pessoas > 0) {
        float media_salario = soma_salario / qtd_pessoas;

        printf("\n----- RESULTADOS DA PESQUISA -----\n");
        printf("a) Média de salário do grupo: R$ %.2f\n", media_salario);
        printf("b) Maior idade do grupo: %d\n", maior_idade);
        printf("   Menor idade do grupo: %d\n", menor_idade);
        printf("c) Mulheres com salário até R$100,00: %d\n", mulheres_ate_100);
    } else {
        printf("\nNenhum dado foi inserido.\n");
    }

    return 0;
}