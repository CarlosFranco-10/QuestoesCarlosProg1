#include <stdio.h>
int main(){
    int a;
    int contador_negativo = 0;

    printf("Digite 5 números inteiros. \n");

    for(int i = 1; i <= 5; i++){
        printf("Digite o %dº valor: ", i);
        scanf("%d", &a);

        if( a < 0 ){
            contador_negativo++;
        }
    }
    printf("\n--- Resultado ---\n");
    printf("Dos 5 valores digitados, %d sao negativos.\n", contador_negativo);

    return 0;
}