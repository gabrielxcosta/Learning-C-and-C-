#include <stdio.h>
#include <math.h>

int main(){
    double peso, h, IMC;
    scanf("%lf %lf", &peso, &h);
    IMC = peso / pow(h, 2);
    if(IMC < 20){
        printf("abaixo do normal ");
    }
    else if(IMC < 25){
        printf("normal ");
    }
    else if(IMC < 40){
        printf("sobrepeso ");
    }
    else{
        printf("obesidade mórbida ");
    }
    return 0;
}