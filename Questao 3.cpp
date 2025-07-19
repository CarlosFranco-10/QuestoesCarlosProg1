#include <stdio.h>
int main(){
    float salarioTotal = 0, maiorSalario = 0, salario = 0, mediaSalario, mediaFilhos, percentual100;
    int qntFilhos, filhoTotal = 0, salario100 = 0, totalPessoas = 0;

    printf("Informe o seu salário e a quantidade de filhos. \n");

    while( salario>= 0){
        printf("Informe o salário ou digite um salário negativo para encerrar: ");
        scanf("%f", &salario);

        if (salario>0){
            printf("Informe a quantidade de filhos: ");
            scanf("%d", &qntFilhos);

            if(salario <= 100){
                salario100++;
            }

        totalPessoas++;

    
        /*Soma salários*/
        salarioTotal += salario;

        /*Soma Filhos*/
        filhoTotal = filhoTotal + qntFilhos;

        if (salario > salarioTotal){
            maiorSalario = salario;
        }
    
        }

        percentual100 = (salario100/(float)totalPessoas)*100;

        
    }
        /*Media salario*/
        mediaSalario = (float)salarioTotal/(float)totalPessoas;
        mediaFilhos = (float)filhoTotal/totalPessoas;

        printf("Média dos salários: %.2f", mediaSalario);
        printf("\n Média da quantidade de filhos: %.2f", mediaFilhos);
        printf("\n Percentual de pessoas com salário até 100: %.1f", percentual100);
        printf("\n O maior salário: %.2f", maiorSalario);

    return 0;
}