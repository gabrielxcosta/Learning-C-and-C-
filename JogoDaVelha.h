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
        

// ---------CONSTRUTOR, DESTRUTOR, CONSTRUTOR DE C�PIA----------
        JogoDaVelha(); // Construtor default
        ~JogoDaVelha(); // Destrutor
        JogoDaVelha(const JogoDaVelha&); // Construtor de c�pia
        void Display(); // Imprime a matriz
        void InsereXO(); // Insere o caracter na matriz
        bool Check(); // Checa se h� algum * ainda
        bool CheckLin(); // Checa se h� algum ganhador nas linhas
        bool CheckCol(); // Checa se h� algum ganhador nas colunas
        bool CheckDiagP(); // Checa se h� algum ganhador na diagonal principal
        bool CheckDiagS(); // Checa se h� algum ganhador na diagonal secund�ria
        void Jogadas(); // Visualiza na tela o n�mero de jogadas
};