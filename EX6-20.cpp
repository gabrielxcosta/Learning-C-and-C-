#include <iostream>
#include <math.h>
#define n 2

int fatorial(int num){
    int resultado = num;
    if(num == 0){
        resultado++;
    }
    while(num > 1){
        resultado *= --num;
    }
    return resultado;
}

double clotoide(double A, double omega){
    double vet[n];
    int i = 0;
    do{
        vet[0] += (pow(-1, i) * (pow(omega, 2 * i)) / fatorial((4 * i + 1) * (2 * i)));
        vet[1] += (pow(-1, i) * (pow(omega, 2 * i)) / fatorial((4 * i + 1) * (2 * i)));
    } while(i <= n);
}