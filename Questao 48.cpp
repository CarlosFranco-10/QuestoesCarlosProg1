#include <stdio.h>

int main() {
    int matricula;
    float nota;
    int i, faixa;

    for (i = 1; i <= 75; i++) {
        printf("\nAluno %d\n", i);

        // Leitura da matrícula
        printf("Digite o número de matrícula: ");
        scanf("%d", &matricula);

        // Leitura da nota final
        printf("Digite a nota final do aluno (0.0 a 10.0): ");
        scanf("%f", &nota);

        // Convertendo nota em uma faixa inteira (ex: 4.5 → 4, 7.8 → 7)
        faixa = (int)nota;

        // Mostrar o conceito final com base na faixa
        printf("Matrícula: %d - Nota: %.1f - Conceito: ", matricula, nota);

        switch (faixa) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                printf("D\n");
                break;
            case 5:
            case 6:
                printf("C\n");
                break;
            case 7:
            case 8:
                printf("B\n");
                break;
            case 9:
            case 10:
                printf("A\n");
                break;
            default:
                printf("Nota inválida!\n");
        }
    }

    return 0;
}