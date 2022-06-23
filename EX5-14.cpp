#include <iostream>
#include <math.h>

int fat(int num){
    int resultado = num;
    if(num == 0){
        resultado++;
    }
    while(num > 1){
        resultado *= --num;
    }
    return resultado;
}

void euler(double x, int n){
    double res = 1;
    for(int i = 1; i <= n; i++){
        std::cout << "SOMA[" << i << "] = ";
        res += (pow(x, i)) / fat(i);
        std::cout << res << std::endl;
    }
    std::cout << "\nResultado: " << res << std::endl;
}

int main(){
    std::cout << "\tNÚMERO DE EULER\n";
    int n; double x;
    std::cout << "Informe n e x: "; std::cin >> n >> x;
    euler(x, n);
    system("PAUSE");
    return 0;
}