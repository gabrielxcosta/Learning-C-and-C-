#include <stdio.h>

void leNotas(double *nota1, double *nota2){
    printf("Insira a nota 1: "); scanf("%lf", nota1);
    printf("Insira a nota 2: "); scanf("%lf", nota2);
}

void mediaS_P(double *nota1, double *nota2, double *media_s, double *media_p){
    *media_s = (*nota1 + *nota2) / 2;
    *media_p = (*nota1 + *nota2 * 2) / 3;
}

int main(){
    double n1, n2, m_s, m_p;
    leNotas(&n1, &n2);
    mediaS_P(&n1, &n2, &m_s, &m_p);
    printf("\nNotas 1 e 2: %.2lf e %.2lf", n1, n2);
    printf("\nMédias simples e ponderada: %.2lf e %.2lf", m_s, m_p);
    return 0;
}