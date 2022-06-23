#pragma once
#include "Pessoa.h"
#include <iostream>

class Aluno : public Pessoa{
    public:
        std::string Curso;
        void RealizarProva();
        Aluno(){}
        Aluno(std::string Nome, int CPF, int Matricula, std::string NovoCurso)
};