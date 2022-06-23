#pragma once
#include <iostream>
#include <string>

class Pessoa{
    public:
        std::string Nome;
        int CPF;
        int Matricula;
        Pessoa() : Nome(""), CPF(0), Matricula(0) {}
        Pessoa(std::string Nome, int CPF, int Matricula){
            this->Nome = Nome;
            this->CPF = CPF;
            this->Matricula = Matricula;
        }
        void AcessarSistema();
};