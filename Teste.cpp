#include "Matriz2x2.h"
#include <iostream>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    Matriz2X2 Matriz;
    std::cout << "Matriz nula: \n"; Matriz.Visualizar();
    std::cout << "\nAgora informe os elementos da matriz: "; Matriz.InsereElementos();
    std::cout << "\nMatriz informada: \n"; Matriz.Visualizar();
    if(Matriz.EZero() == true){
        std::cout << "\nDet(Matriz) da matriz inserida: " << Matriz.Det() << "\n";
        float **Inversa = Matriz.Inversa();
        std::cout << "\nMatriz inversa: \n";
        for(int i = 0; i < 2; i++){
            for(int j = 0; j < 2; j++){
                std::printf(" %2.1f", Inversa[i][j]); std::cout << " ";
            }
            std:: cout << "\n";
        }
    }
    else{
        std::cout << "Det(Matriz) = 0 - Matriz não inversível!" << std::endl;
    }
    system("PAUSE");
    return 0;
}