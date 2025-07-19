#include <stdio.h>
int main(){
    int N, i, maiorValor, menorValor;
    
    printf("Digite o 1o valor: ");
    scanf("%d", &N);

    for(i = 1; i < 50; i++){
        printf("Digite o %do valor: ", i + 1);
        scanf("%d", &N);

        if(N > maiorValor);
        maiorValor = N;

        if(N < menorValor);
        menorValor = N;
    }
    printf("\n--- Resultado Final ---\n");
    printf("O maior valor digitado foi: %d\n", maiorValor);
    printf("O menor valor digitado foi: %d\n", menorValor);

    return 0;
}