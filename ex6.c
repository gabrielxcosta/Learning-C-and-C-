#include <stdio.h>
#include <math.h>
#define pi 3.14159265359

void calc_esfera(float R, float *area, float *volume){
    *area = 4 * pi * pow(R,2);
    *volume = (4 * pi * pow(R, 3)) / 3;
}

int main(){
    float raio, a, vol;
    printf("Digite o valor do raio: "); scanf("%f", &raio);
    calc_esfera(raio, &a, &vol);
    printf("\nRaio, área e volume da esfera: %.2f, %.2f e %.2f", raio, a, vol);
    return 0;
}