#include <iostream>
#include <math.h>

double fat(int n){
    double resultado = n;
    if(n == 0){
        resultado++;
    }
    while(n > 1){
        resultado *= --n;
    }
    return resultado;
}

double cos(double x, double erro){
    while()
}

int main(){
    std::cout << "Resultado: " << cos(PI, 0.000001) << std::endl;
    system("PAUSE");
    return 0;
}