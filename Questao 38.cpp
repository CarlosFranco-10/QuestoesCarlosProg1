#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool ehPrimo(int num) {
    if (num < 2) return false;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    unsigned long long produto = 1;

    for (int i = 92; i <= 1478; i++) {
        if (ehPrimo(i)) {
            produto *= i;

        
            if (produto == 0) {
                printf("Produto muito grande para ser representado com precisão.\n");
                return 1;
            }
        }
    }

    printf("O produto dos números primos entre 92 e 1478 é: %llu\n", produto);

    return 0;
}