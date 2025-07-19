#include <stdio.h>
#include <math.h>

int main() {
    double X;

    
    printf("Digite o valor de X: ");
    scanf("%lf", &X);

    
    if (X == 0) {
        printf("Erro: divisão por zero não é permitida.\n");
        return 1;
    }

    printf("\n20 primeiros termos da série:\n");

    for (int i = 1; i <= 20; i++) {
        double termo = 1.0 / pow(X, i);
        printf("Termo %2d: %.10f\n", i, termo);
    }

    return 0;
}