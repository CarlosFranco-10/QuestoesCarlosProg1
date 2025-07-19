#include <stdio.h>
int main(){
    int N;
    int contador = 0;
    int soma = 0;

    do{
        printf("Digite um número: ");
        scanf("%d", &N);

        if(N == 0){
            break;
        }
    
        if(N != 0 && N % 2 == 0){
            contador++;
            soma += N;
        } else{
            printf("O número precisa ser par.\n");
        }
    } while (N != 0);

    if (contador > 0){
        float media = soma/contador;
        printf("A média é de: %.1f", media);
    } else{
        printf("Nenhum número par validado foi digitado.");
    }

    return 0;
    
}