#include <stdio.h>
#include <math.h>

int main(){
    int n, valor;

    printf("Informe a quantidade de valores a serem lidos: ");
    scanf("%d", &n);

    printf("+-------+-----------+-----+---------------+\n");
    printf("| Valor | Quadrado | Cubo | Raiz quadrada |\n");
    printf("+-------+-----------+-----+---------------+\n");

    for (int i = 0; i < n; i++){
        printf("Informe o %d. valor: ", i + 1);
        scanf("%d", &valor);

        int quad = pow((double)valor, 2.0); /*Quadrado*/
        int cubo = pow((double)valor, 3.0); /*Cubo*/
        double raiz = sqrt((double)valor); /*Raiz quadrada*/

        printf("| %d | %d | %d | %.2lf |\n\n", valor, quad, cubo, raiz);
    }

    return 0;
}