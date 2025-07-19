#include <stdio.h>
int main(){
    int m;

    do{
        printf("Digite um número: ");
        scanf("%d", &m);
        
        if (m == 0){
            break;
        }
        
        int divisores = 0;
        
        if(m % 2 == 0){
            for(int i = 1; i <= m; i++){
                if (m % i == 0){
                    divisores++;
                }
            }
            printf("O número %d é par e possui %d divisores.\n", m, divisores);
        }
    } while(m !=0);

    return 0;
}