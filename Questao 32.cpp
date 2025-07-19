#include <stdio.h>
int main (){
    int a, b;
    for (int i = 0; i < 5; i++){
        printf("Par %d:\n", i + 1);
    do {
            printf("Digite o valor de a: ");
            scanf("%d", &a);
            printf("Digite o valor de b (maior que a): ");
            scanf("%d", &b);

            if (a >= b || a <= 0 || b <= 0) {
                printf("Valores inválidos. Tente novamente.\n");
            }
        } while (a >= b || a <= 0 || b <= 0);

        printf("Números pares entre %d e %d:\n", a, b);
        for (int i = a; i <= b; i++) {
            if (i % 2 == 0) {
                printf("%d ", i);
            }
        }
        printf("\n");
    }

    return 0;
}