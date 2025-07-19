#include <stdio.h>
int main() {
    int valores;
    int dentroDoIntervalo = 0;
    int foraDoIntervalo = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valores);

        if (valores >= 10 && valores <= 20) {
            dentroDoIntervalo++;
        } else {
            foraDoIntervalo++;
        }
    }

    printf("\nValores dentro do intervalo [10, 20]: %d\n", dentroDoIntervalo);
    printf("Valores fora do intervalo: %d\n", foraDoIntervalo);

    return 0;
}