#include <iostream>
#include <string>

struct Pessoa{
    std::string *nome;
    float peso;
    float altura;
    int idade;
};

void leVetStruct(Pessoa *pes, int n){
    for(int i = 0; i < n; i++){
        std::cout << "\n  Pessoa " << i + 1 << "\n";
        std::cout << "Nome: "; std::scanf("%s*c", &pes[i].nome);
        std::cout << "Peso: "; std::cin >> pes[i].peso;
        std::cout << "Altura: "; std::cin>> pes[i].altura;
        std::cout << "Idade: "; std::cin >> pes[i].idade;
    }
}

void imprimeStruct(Pessoa pes, int n){
    std::cout << "\n";
    for(int i = 0; i < n; i++){
        std
    }
}

int main(){
    int n; std::cout << "Informe n: "; std::cin >> n;
    Pessoa *p = new Pessoa[n]; //Alocando um vetor de Pessoa dinamicamente 
    leVetStruct(p, n);
    imprimeStruct(p, n);
    delete[] p;
    system("PAUSE");
    return 0;
}