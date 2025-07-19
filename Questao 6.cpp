#include <stdio.h>
int main(){
    int cand_A = 0;
    int cand_B = 0;
    int cand_C = 0;
    int cand_D = 0;
    int voto_nulo = 0;
    int voto_branco = 0;
    int voto;

    do{
        printf("Lista de candidatos \n");
        printf("1 - Candidato A \n"); 
        printf("2 - Canditado B \n");
        printf("3 - Canditado C \n");
        printf("4 - Canditado D \n");
        printf("5 - Voto nulo \n");
        printf("6 - Voto em branco \n");

        printf("Digite o seu voto ou insira 0 para encerrar: ");
        scanf("%d", &voto);
        if(voto > 6){
            printf("ERRO. Digite um número de 0 a 6. \n");
        } if (voto == 1){
            cand_A++;
        }
        if (voto == 2){
            cand_B++;
        }
        if (voto == 3){
            cand_C++;
        }
        if(voto == 4){
            cand_D++;
        }
        if(voto == 5){
            voto_nulo++;
        }
        if(voto == 6){
            voto_branco++;
        }

    }while (voto != 0);

    printf("RESULTADOS\n");
    printf("Candidato A = %d\n", cand_A);
    printf("Candidato B = %d\n", cand_B);
    printf("Candidato C = %d\n", cand_C);
    printf("Candidato D = %d\n", cand_D);
    printf("Votos nulos = %d\n", voto_nulo);
    printf("Votos em branco = %d", voto_branco);
    return 0;
}