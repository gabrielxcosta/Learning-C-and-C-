//Gabriel Ferreira da Costa - 19.1.4047 - Turma 44
#include <stdio.h>
#include <math.h>

int main(){
    double a, b, c, d, x;
    printf("Digite os valores de a, b, c, d:\n");
    scanf("%lf %lf %lf %lf", &a,&b,&c,&d);
    x = pow(a,3) * ( (b+c) / d);
    printf("\na = %0.lf, b = %0.lf, c = %0.lf, d = %0.lf\nx = %0.lf", a,b,c,d,x);
    return 0;
}