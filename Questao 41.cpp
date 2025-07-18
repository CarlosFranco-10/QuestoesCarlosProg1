#include <stdio.h>

int main() {
    float n1, n2, n3, media;
    float somaMedias = 0;
    int totalAlunos = 50;

    for (int i = 1; i <= totalAlunos; i++) {
        printf("Aluno %d:\n", i);

        printf("Digite a nota 1: ");
        scanf("%f", &n1);

        printf("Digite a nota 2: ");
        scanf("%f", &n2);

        printf("Digite a nota 3: ");
        scanf("%f", &n3);

        media = (n1 * 2 + n2 * 4 + n3 * 3) / 9.0;  

       
        media = (n1 * 2 + n2 * 4 + n3 * 3) / 10.0;

        somaMedias += media;

        printf("Média ponderada: %.2f - ", media);

        if (media >= 7.0) {
            printf("Aprovado\n");
        } else {
            printf("Reprovado\n");
        }

        printf("-------------------------\n");
    }

    float mediaGeral = somaMedias / totalAlunos;
    printf("Média geral da turma: %.2f\n", mediaGeral);

    return 0;
}