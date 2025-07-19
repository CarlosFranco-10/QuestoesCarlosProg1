#include <stdio.h>

int main(){
    int n, a, termoAtual, r, somaTermos = 0;

    printf("Informe o número de termos da progressão: ");
    scanf("%d", &n);

    printf("Informe o primeiro termo da progressão: ");
    scanf("%d", &a);

    printf("Informe a razão termo da progressão: ");
    scanf("%d", &r);

    termoAtual = a;

    for(int i = 0; i < n; i++){
        termoAtual *= r;
        somaTermos += termoAtual;
        printf("%d\n", termoAtual );   
    }

    printf("A soma dos termos é de: %d", somaTermos);

    return 0;
}