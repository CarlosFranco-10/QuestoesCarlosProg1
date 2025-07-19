#include <stdio.h>
int main(){
    int n, m;

    do{
        printf("Digite um número inicial (digite 0 para encerrar): ");
        scanf("%d", &m);

        printf("Digite a quantidade de valores (digite 0 para encerrar): ");
        scanf("%d", &n);
        
        int soma = 0;

        if (n !=0 && m != 0){
            for (int i = 0; i < n; i++){
                soma += (m + i); 
            }
        }

        printf("Soma: %d\n", soma);

    } while (n != 0 && m != 0);

    return 0;
}