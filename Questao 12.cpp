#include <stdio.h>

int main(){
    int n, r;

    printf("Informe um número: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        r = i * n;
        if (n==i){
            printf("%d x %d = %d^2 = %d\n", i, n, n, r);
        } else{
            printf("%d x %d = %d\n", i, n, r);
        }
    }

    return 0;
}