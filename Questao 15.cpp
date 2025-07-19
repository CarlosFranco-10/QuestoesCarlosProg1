#include <stdio.h>
int main(){
    int n;
    int intervalo0 = 0, intervalo1 = 0, intervalo2 = 0, intervalo3 = 0, intervalo4 = 0;

    do{
        printf("Informe um número inteiro positivo (negativo para sair): ");
        scanf("%d", &n);

        if (n > 0){
            if (n >= 1 && n <= 25) {
                intervalo1++;
            } else if (n >= 26 && n <= 50) {
                intervalo2++;
            } else if (n >= 51 && n <= 75) {
                intervalo3++;
            } else if (n >= 76 && n <= 100) {
                intervalo4++;
            } else {
                intervalo0++;
            }
        }
    } while (n > 0);
    
    printf("Números no intervalo [1-25]: %d\n", intervalo1);
    printf("Números no intervalo [26-50]: %d\n", intervalo2);
    printf("Números no intervalo [51-75]: %d\n", intervalo3);
    printf("Números no intervalo [76-100]: %d\n", intervalo4);
    printf("Números fora dos intervalos:  %d\n", intervalo0);

    return 0;
}