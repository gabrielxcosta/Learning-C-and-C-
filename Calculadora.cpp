#include <iostream>

void calculadora(int a, int b, char op){
    int res = 0;
    switch(op){
        case '+':
            res += (a + b);
            break;
        case '-':
            res += (a - b);
            break;
        case '*':
            res += (a * b);
            break;
        case '/':
            res += (a / b);
            break;
        default:
            std::cout << "OPERAÇÃO INVÁLIDA!";
            exit(0);
    }
    std::cout << "\nResultado da operação --> " << res << std::endl;
}

int main(){
    int n1, n2;
    std::cout << "\tCALCULADORA" << std::endl;
    std::cout << "Informe n1 e n2: "; std::cin >> n1 >> n2;
    calculadora(n1, n2, '+');
    system("PAUSE");
    return 0;
}