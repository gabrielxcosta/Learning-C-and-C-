#include <iostream>

void imprimeTriangulosRotacionados(int N){ //N representa o lado do triângulo equilátero
    for(int i = 1; i <= N; i++){ //Imprime o triângulo de pé
        for(int j = 1; j <= i; j++){
            std::cout << j << " ";
        }
        std::cout << "\n";
    }
    std::cout << "\n";
    for(int i = N; i >= 0; i--){ //Imprime o triângulo deitado
        for(int j = 1; j <= i; j++){
            std::cout << j << " ";
        }
        std::cout << "\n";
    }
}

int main(){
    int n;
    std::cout << "Informe o n: "; std::cin >> n; std::cout << "\n";
    imprimeTriangulosRotacionados(n);
    system("PAUSE");
    return 0;
}