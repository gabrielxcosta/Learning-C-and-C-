#pragma once
#include <iostream>

// -----------JOGO DA VELHA------------
class JogoDaVelha{
    private:
        int lin = 3; // Qtd de linhas da minha matriz 
        int col = 3; // Qtd de Colunas da minha matriz
        int jogadas = 1; // Qtd de jogadas
        int Player1 = 0; // Score player 1
        int Player2 = 0; // Score player 2
        char **p;
    public:
        

// ---------CONSTRUTOR, DESTRUTOR, CONSTRUTOR DE CÓPIA----------
        JogoDaVelha(); // Construtor default
        ~JogoDaVelha(); // Destrutor
        JogoDaVelha(const JogoDaVelha&); // Construtor de cópia
        void Display(); // Imprime a matriz
        void InsereXO(); // Insere o caracter na matriz
        bool Check(); // Checa se há algum * ainda
        bool CheckLin(); // Checa se há algum ganhador nas linhas
        bool CheckCol(); // Checa se há algum ganhador nas colunas
        bool CheckDiagP(); // Checa se há algum ganhador na diagonal principal
        bool CheckDiagS(); // Checa se há algum ganhador na diagonal secundária
        void Jogadas(); // Visualiza na tela o número de jogadas
};