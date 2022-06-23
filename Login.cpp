#include <iostream>
#include <locale.h>

struct Login{
    std::string NomeUsuario;
    std::string Senha;
    std::string Email;
    long int NroContato;
};

void MostrarUsuario(Login *log){
    int tam = log->Senha.length();
    std::cout << "Usuário: " << log->NomeUsuario << "\n";
    std::cout << "Senha: " << log->Senha << "\n";
    std::cout << "Email: "<< log->Email << "\n";
    std::cout << "Número p/ contato: " << log->NroContato << "\n";
}

void CadastrarUsuario(Login *log){
    std::cout << "Informe o seu nome: "; std::getline(std::cin, log->NomeUsuario);
    std::cout << "Informe o email para cadastro: "; std::getline(std::cin, log->Email); 
    std::cout << "Informe o seu número de contato: "; std::cin.ignore(); std::cin >> log->NroContato;
    std::cout << "Digite uma senha de no mínimo 8 caracteres: "; std::cin.ignore(); std::getline(std::cin, log->Senha);
    system("CLS");
    std::cout << "Cadastro realizado com sucesso!" << "\n";
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    Login *Pessoa1 = new Login;
    CadastrarUsuario(Pessoa1);
    std::cout << "\n";
    MostrarUsuario(Pessoa1);
    system("PAUSE");
    return 0;
}