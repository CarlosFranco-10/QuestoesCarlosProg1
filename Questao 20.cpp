#include <stdio.h> 

int main() {
    int numero;         
    long long somatorioNegativos = 0; 

    printf("Digite numeros inteiros. Para encerrar, digite 0.\n");

    do {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if (numero < 0) {
            somatorioNegativos += numero; 
        }
    } while (numero != 0);

    printf("O somatorio dos numeros negativos lidos e: %lld\n", somatorioNegativos);

    return 0; 
}