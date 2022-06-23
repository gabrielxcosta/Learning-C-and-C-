#include <stdio.h>
#include <math.h>

void calc_hexa(float L, float *area, float *perimetro){
    *area = (3 * pow(L,2) * sqrt(3)) / 2;
    *perimetro = 6 * L;
}

int main(){
    float lado, a, p;
    printf("Insira o lado do Hexágono: "); scanf("%f", &lado);
    if(lado > 0){
        calc_hexa(lado, &a, &p);
        printf("\nÁrea do Hexágono = %.2f", a);
        printf("\nPerímetro do Hexágono = %.2f", p);
    }
    return 0;
}