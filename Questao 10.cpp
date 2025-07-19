#include <stdio.h>
int main(){
    float nota1,nota2,nota3;
    int codigo;
    float media;
    float somaNota = 0.0;

    do{
        printf("Digite o código do aluno ou insira um número negativo para encerrar: ");
        scanf("%d", &codigo);

        if (codigo > 0){
            printf("Insira a primeira nota do aluno: ");
            scanf("%f", &nota1);

            printf("Insira a segunda nota do aluno: ");
            scanf("%f", &nota2);

            printf("Insira a terceira nota do aluno: ");
            scanf("%f", &nota3);

            if (nota1 >= nota2 && nota1 >= nota3){
                nota1*=4.0;
                nota2*=3.0;
                nota3*=3.0;
            } else if (nota2 >= nota1 && nota2 >= nota3){
                nota2*=4.0;
                nota1*=3.0;
                nota3*=3.0;
            } else {
                nota3*=4.0;
                nota2*=3.0;
                nota1*=3.0;
            }

            somaNota += nota1 + nota2 + nota3;
            
            media = somaNota/10.0;

            if (media >= 5){
                printf("O aluno com o código: %d teve as seguintes notas:\nNota1: %.1f\nNota2: %.1f\nNota3: %.1f\nE teve a média de %1.f, estando APROVADO\n\n", codigo, nota1, nota2, nota3, media);    
            } else {
                printf("O aluno com o código: %d teve as seguintes notas:\nNota1: %.1f\nNota2: %.1f\nNota3: %.1f\nE teve a média de %1.f, estando REPROVADO \n\n", codigo, nota1, nota2, nota3, media);
            }
            
        }
    } while (codigo > 0);
    
    return 0;
}