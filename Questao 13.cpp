#include <stdio.h>

int main(){
    int n, i, valorLido;
    long long fatorial;

    printf("Informe quantos números: ");
    scanf("%d", &n);

    printf("\n--- Tabela de Fatoriais ---\n");
    printf("+-------+-----------+\n");
    printf("| Valor | Fatorial  |\n");
    printf("+-------+-----------+\n");

    for(i = 1; i <= n; i++){
        printf("Digite o %d. valor: ", i);
        scanf("%d", &valorLido);

        fatorial = 1;
        for(int j = 1; j<=valorLido; j++){
            fatorial*=j;
        }

        printf("| %d | %lld | \n", valorLido, fatorial);
    }

    return 0;
}