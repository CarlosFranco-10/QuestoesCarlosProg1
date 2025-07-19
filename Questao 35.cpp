
#include <stdio.h>

int main() {
    float altura;
    int sexo;
    float maiorAltura = 0, menorAltura = 999;
    float somaAlturaMulheres = 0, somaAlturaTurma = 0;
    int contMulheres = 0;

    for (int i = 1; i <= 50; i++) {
        printf("Pessoa %d:\n", i);

        // Leitura e validação da altura
        do {
            printf("Digite a altura (em metros): ");
            scanf("%f", &altura);
            if (altura <= 0) {
                printf("Altura inválida. Tente novamente.\n");
            }
        } while (altura <= 0);

        // Leitura e validação do sexo
        do {
            printf("Digite o sexo (1 = Masculino, 2 = Feminino): ");
            scanf("%d", &sexo);
            if (sexo != 1 && sexo != 2) {
                printf("Sexo inválido. Tente novamente.\n");
            }
        } while (sexo != 1 && sexo != 2);

        // Atualiza maior e menor altura
        if (altura > maiorAltura) {
            maiorAltura = altura;
        }
        if (altura < menorAltura) {
            menorAltura = altura;
        }

        // Soma para média da turma
        somaAlturaTurma += altura;

        // Soma para média das mulheres
        if (sexo == 2) {
            somaAlturaMulheres += altura;
            contMulheres++;
        }

        printf("-------------------------\n");
    }

    // Cálculo das médias
    float mediaAlturaTurma = somaAlturaTurma / 50.0;
    float mediaAlturaMulheres = contMulheres > 0 ? somaAlturaMulheres / contMulheres : 0;

    // Resultados
    printf("\n=== Resultados ===\n");
    printf("a) Maior altura da turma: %.2f m\n", maiorAltura);
    printf("   Menor altura da turma: %.2f m\n", menorAltura);
    printf("b) Média da altura das mulheres: %.2f m\n", mediaAlturaMulheres);
    printf("c) Média da altura da turma: %.2f m\n", mediaAlturaTurma);

    return 0;
}