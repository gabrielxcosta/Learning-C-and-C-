#include <iostream>
#include <locale.h>
#include <string>

struct Livro{
    int ID;
    std::string Titulo;
    std::string Autor;
    std::string Editora;
    int Ano;

    public:
        void ImprimeLivro(Livro livro){
            std::cout << "ID: " << livro.ID << "\n";
            std::cout << "T�tulo: " << livro.Titulo << "\n";
            std::cout << "Autor: " << livro.Autor << "\n";
            std::cout << "Editora: " << livro.Editora << "\n";
            std::cout << "Ano de publica��o: " << livro.Ano << "\n";
        }
};

int main(){
    setlocale(LC_ALL, "Portuguese");
    Livro L1;
    std::cout << "***Cadastro de Livro***" << "\n";
    std::cout << "\nInforme o ID do livro: "; std::cin >> L1.ID;
    std::cout << "Informe o t�tulo do livro: "; std::cin.ignore(); std::getline(std::cin, L1.Titulo);
    std::cout << "Informe o autor do livro: "; std::getline(std::cin, L1.Autor);
    std::cout << "Informe a editora do livro: "; std::getline(std::cin, L1.Editora);
    std::cout << "Informe o ano de publica��o do livro: "; std::cin >> L1.Ano;
    std::cout << "\n";
    L1.ImprimeLivro(L1);
    system("PAUSE");
    return 0;
}