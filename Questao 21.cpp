#include <stdio.h>

int main() {
    int num;
    unsigned long long produtorio = 1;
    int tem_par = 0; 

    printf("Digite números inteiros e positivos (0 para encerrar):\n");

    while (1) {
        scanf("%d", &num);

        if (num == 0) break; 

        if (num > 0 && num % 2 == 0) {
            produtorio *= num;
            tem_par = 1;
        }
    }

    if (tem_par) {
        printf("\nProdutório dos números pares: %llu\n", produtorio);
    } else {
        printf("\nNenhum número par foi digitado.\n");
    }

    return 0;
}