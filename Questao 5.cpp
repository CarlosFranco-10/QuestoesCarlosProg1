#include <stdio.h>
int main(){
    int valor, denominador;
    int somaValor = 0;

    /*Laço de repetição para obtenção de valores*/
    while (valor >= 0){
        printf("Digite um número intero ou digite um número negativo para encerrar: ");
        scanf("%d", &valor);

        if(valor > 0){
            somaValor += valor;
            denominador++;
        }
    }
    /*Média aritmética*/
    float media = (float)somaValor/(float)denominador;

    printf("A média é de: %.2f", media);
    return 0;
    
}