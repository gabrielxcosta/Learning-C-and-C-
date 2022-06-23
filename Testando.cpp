#include <iostream>
#include "library.cpp"

int main(){
    int n1, n2;
    std::cout << "Informe n1 e n2: "; std::cin >> n1 >> n2;
    std::cout << "Soma --> " << n1 << " + " << n2 << " = " << soma(n1, n2) << std::endl;
    std::cout << "Subtração --> " << n1 << " - " << n2 << " = " << sub(n1, n2) << std::endl;
    std::cout << "Multiplicação --> " << n1 << " * " << n2 << " = " << mult(n1, n2) << std::endl;
    std::cout << "Divisão --> " << n1 << " / " << n2 << " = " << divisao(n1, n2) << std::endl;
    std::cout << "Potência --> " << n1 << " ^ " << n2 << " = " << pot(n1, n2) << std::endl;
    std::cout << "Raiz de " << n1 << " = " << raiz(n1) << " - Raiz de " << n2 << " = " << raiz(n2) << std::endl;
    system("PAUSE");
    return 0;
}