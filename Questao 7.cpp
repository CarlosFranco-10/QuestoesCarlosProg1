#include <stdio.h>

int main(){
    float nota_A,nota_B,nota_C;
    float somaNota = 0;
    int codigo;
    float media;

    do{
         /*Codigo e laço de repetição*/
        printf("Digite o código do aluno ou digite 0 para encerrar: ");
        scanf("%d", &codigo);

        if (codigo != 0){
            /*Atribuição de nota*/
        printf("Digite a nota A do aluno: ");
        scanf("%f", &nota_A);

        printf("Digite a nota B do aluno: ");
        scanf("%f", &nota_B);

        printf("Digite a nota C do aluno: ");
        scanf("%f", &nota_C);

        /*media*/
        somaNota += nota_A+nota_B+nota_C;
        media = somaNota/3.0;

        printf("A média do aluno com código %d foi de: %1.f\n \n",codigo, media);
        }
    } while(codigo != 0);
    
    return 0;
}