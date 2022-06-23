#include <iostream>
#include <math.h>

double f(double x){
    return cos(3 * x) - (2 * x);
}

void imprimeF(){
    double res, valores[] = {0, 0.5, 1.0, 4.5, 5};
    for(int i = 0; i < 5; i++){
        res = f(valores[i]);
        std::cout << "Para x = " << valores[i] << " --> f(" << valores[i] <<") = " << res << std::endl;
    }
}

int main(){
    imprimeF();
    system("PAUSE");
    return 0;
}