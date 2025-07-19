#include <stdio.h>
int main(){
    float chico = 1.50;
    float ze = 1.10;
    int meses = 0;

    while (ze < chico) {
        ze += 0.03;
        chico += 0.02;
        meses++;
    }
    
    printf("Zé precisaria de %d meses para superar Chico", meses);
    return 0;
}