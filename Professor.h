#pragma once
#include "Pessoa.h"
#include <iostream>

class Professor : public Pessoa{
    public:
        std::string Departamento;
        void EfetuarChamada();
        void EntregarPauta();
        Professor();
        Professor(std::string Nome, int CPF, int Matricula, std::string NovoDepartamento) : Pessoa(Nome, CPF, Matricula), Departamento(NovoDepartamento){}
};

