#include <iostream>
#include <string>
using namespace std;

class Aluno{
    private:
        string Nome;
        int Matricula;
        int CPF;
        char Sexo;

    public:
        string getNome();
        int getMatricula();
        int getCPF();
        char getSexo();
        void setMatricula();
        void setNome();
};

int main(){
    cout << "\tEXEMPLO 1 - POO - ALUNOS\n" << endl;
    Aluno A;
    A.setNome();
    cout << A.getNome() << "\n";
    A.setMatricula();
    cout << A.getMatricula() << "\n";
    system("PAUSE");
    return 0;
}

void Aluno::setNome(){
    string aux;
    cout << "Informe o nome do aluno: "; cin >> aux;
    Nome = aux;
}

string Aluno::getNome(){
    return Nome;
}

void Aluno::setMatricula(){
    int mat;
    cout << "Informe a matricula: "; cin >> mat;
    Matricula = mat;
}

int Aluno::getMatricula(){
    return Matricula;
}
