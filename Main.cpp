#include <iostream>
#include "JogoDaVelha.h"
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    JogoDaVelha tabuleiro;
    std::cout << "----JOGO DA VELHA----\n\n";
    std::cout << "Tabuleiro vazio: \n\n";
    tabuleiro.Display();
    std::cout << "\n";
    do{
        tabuleiro.Check();
        tabuleiro.Jogadas();
        tabuleiro.InsereXO();
        tabuleiro.Display();
    } while(tabuleiro.Check() == true && tabuleiro.CheckLin() == false && tabuleiro.CheckCol()== false && tabuleiro.CheckDiagP() == false && tabuleiro.CheckDiagS() == false);
    tabuleiro.~JogoDaVelha();
    system("PAUSE");
    return 0;
}