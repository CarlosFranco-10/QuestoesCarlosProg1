#include <stdio.h>
int main(){
    int N;
    long long i = 1;
    double e;

    printf("Informe um valor para N: ");
    scanf("%d", &N);

    /*Parte fatorial do número*/
    for(i = 1; N > 1; N = N - 1){
        i = i*N;
        e += 1.0/i;
    }

    printf("%.2f", e);
    return 0;
}