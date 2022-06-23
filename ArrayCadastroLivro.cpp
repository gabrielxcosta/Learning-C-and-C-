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
        void ImprimeLivro(Livro &livro){
            std::cout << "ID: " << livro.ID << "\n";
            std::cout << "Título: " << livro.Titulo << "\n";
            std::cout << "Autor: " << livro.Autor << "\n";
            std::cout << "Editora: " << livro.Editora << "\n";
            std::cout << "Ano de publicação: " << livro.Ano << "\n";
        }
};

int main(){
    setlocale(LC_ALL, "Portuguese");
    Livro Colecao[5];
    for(int i = 0; i < 5; i++){
        std::cout << "***Cadastro do Livro "<< i + 1 <<"***" << "\n";
        std::cout << "\nInforme o ID do livro: "; std::cin >> Colecao[i].ID;
        std::cout << "Informe o título do livro: "; std::cin.ignore(); std::getline(std::cin, Colecao[i].Titulo);
        std::cout << "Informe o autor do livro: "; std::getline(std::cin, Colecao[i].Autor);
        std::cout << "Informe a editora do livro: "; std::getline(std::cin, Colecao[i].Editora);
        std::cout << "Informe o ano de publicação do livro: "; std::cin >> Colecao[i].Ano;
        std::cout << "\n";
    }
    system("PAUSE");
    return 0;
}