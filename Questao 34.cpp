#include <stdio.h>

int main() {
    int numero, altura;
    int maisBaixo, maisAlto = 0;
    int alturamaisBaixo, alturamaisAlto = 0;

    for (int i = 0; i < 5; i++){
        printf("Insira o número do Aluno %d:\n", i+1); scanf("%d", &numero);
        printf("Insira a Altura do Aluno %d(em cm):\n", i+1); scanf("%d", &altura);
        printf("\n");
        if (altura > alturamaisAlto){
            alturamaisAlto = altura;
            maisAlto = numero;
        }
        if (altura < alturamaisAlto){
            alturamaisBaixo = altura;
            maisBaixo = numero;
        }
    }
    printf("\nAluno mais Alto:\n Número: %d - Altura (em cm): %d\n", maisAlto, alturamaisAlto);
    printf("\nAluno mais Baixo:\n Número: %d - Altura (em cm): %d\n", maisBaixo, alturamaisBaixo);
    
    return 0;
}