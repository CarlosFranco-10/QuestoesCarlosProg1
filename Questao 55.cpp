#include <stdio.h>


int bissexto(int ano) {
    return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
}


int diasDesdeZero(int dia, int mes, int ano) {
    int diasMeses[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int totalDias = dia;

    
    for (int i = 0; i < mes - 1; i++) {
        totalDias += diasMeses[i];
    }

    
    for (int i = 0; i < ano; i++) {
        totalDias += bissexto(i) ? 366 : 365;
    }

    
    if (bissexto(ano) && mes > 2) {
        totalDias += 1;
    }

    return totalDias;
}

int main() {
    int d1, m1, a1;
    int d2, m2, a2;
    int dias1, dias2, diferenca;

    printf("Digite a primeira data (dia mes ano): ");
    scanf("%d %d %d", &d1, &m1, &a1);

    printf("Digite a segunda data (dia mes ano): ");
    scanf("%d %d %d", &d2, &m2, &a2);

    dias1 = diasDesdeZero(d1, m1, a1);
    dias2 = diasDesdeZero(d2, m2, a2);

    diferenca = dias1 - dias2;
    if (diferenca < 0) {
        diferenca = -diferenca;
    }

    printf("A diferença entre as datas é de %d dias.\n", diferenca);

    return 0;
}
