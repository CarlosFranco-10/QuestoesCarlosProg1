#include <stdio.h>

int main() {
    int N;
    int resultado;

    for (int i = 0; i < 20; i++) {
        printf("Digite o valor %d: ", i + 1); scanf("%d", &N);
        printf("Tabuada de %d:\n", N);
        for (int j = 1; j <= N; j++) {
            resultado = j * N;
            printf("%d x %d = %d\n", j, N, resultado);
        }

        printf("\n");
    }

    return 0;
}