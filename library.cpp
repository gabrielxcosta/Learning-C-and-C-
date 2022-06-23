#include <iostream>
#include <math.h>
#include "library.h"

int soma(int num1, int num2){
    return num1 + num2;
}

int sub(int num1, int num2){
    return num1 - num2;
}

int mult(int num1, int num2){
    return num1 * num2;
}

float divisao(int num1, int num2){
    return float(num1) / float(num2);
}

int pot(int num1, int num2){
    return (pow(num1, num2));
}

float raiz(int num){
    return sqrt(float(num));
}