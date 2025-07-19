#include <stdio.h>

int main(){
    int n, valor, denominador = 0, contador_negativo = 0, contador_positivo = 0, soma = 0;

    printf("Informe quantos números deseja somar: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("Digite o %d. valor (positivo ou negativo): ", i + 1);
        scanf("%d", &valor);

        if (valor >= 0){
            contador_positivo++;
        } else {
            contador_negativo++;
        }
        
        soma += valor;
    }

    float p_negativo = ((float)contador_negativo/(float)n)*100;
    float p_positivo = ((float)contador_positivo/(float)n)*100;

    float media = (float)soma/(float)n;

    printf("A média é de: %.1f\nNúmeros positivos: %d\nNúmeros negativos: %d", media, contador_positivo, contador_negativo);
    printf("\n------ Percentual ------\n");
    printf("Positivos: %.1f\nNegativos: %.1f", p_positivo, p_negativo);

    return 0;
}