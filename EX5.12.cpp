#include <iostream>
#include <math.h>

int series(int qtd_max){
    int res = 0, temp = 0;
    while(res < qtd_max && res + ((pow(temp, 2)) - temp - 2) < qtd_max){
        temp++;
        res += ((pow(temp, 2)) - temp - 2);
    }
    return temp;
}

int main(){
    int max;
    std::cout << "\nEncontre o menor natural n, tal que a soma dos \nprimeiros termos da série exceda uma quantidade\nmax introduzida pelo teclado: \n  (i : 1 --> i <= n) ∑ (i * i - i - 2) \n";
    std::cout << "\nInforme qtd_max: "; std::cin >> max; 
    std::cout << "Menor natural: " << series(max) << std::endl;
    system("PAUSE");
    return 0;
}