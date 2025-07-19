#include <stdio.h>

int main() {
    int count = 0;  
    int num = 2;    

    printf("Os 5 primeiros números perfeitos são:\n");

    while (count < 5) {
        int soma = 0;

        
        for (int i = 1; i <= num / 2; i++) {
            if (num % i == 0) {
                soma += i;
            }
        }

        
        if (soma == num) {
            printf("%d\n", num);
            count++;
        }

        num++;
    }

    return 0;
}