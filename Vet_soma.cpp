#include <iostream>
#define TAM 10
using namespace std;

void leVet(int *vet, int n){
    for(int i = 0; i < n; i++){
        cin >> vet[i];
    }
}

void imprimeVet(int *vet, int n){
    for(int i = 0; i < n; i++){
        cout << vet[i] << " ";
    }
    cout << "\n";
}

void maiorMenorVet(int *vet, int n){
    int maior = vet[0], menor = vet[0];
    for(int i = 0; i < n; i++){
        if(vet[i] > maior){
            maior = vet[i];
        }
        if(vet[i] < menor){
            menor = vet[i];
        }
    }
    cout << "Maior elemento do Vetor: " << maior << endl;
    cout << "Menor elemento do Vetor: " << menor << endl;
}

int somaVet(int *vet, int n){
    int soma = 0;
    for(int i = 0; i < n; i++){
        soma += (vet[i]);
    }
    return soma;
}

int main(){
    int vet[TAM];
    cout << "Informe os elementos do vetor: "; leVet(vet, TAM);
    cout << "Vetor = "; imprimeVet(vet, TAM);
    cout << "Soma = " << somaVet(vet, TAM) << "\n" <<endl;
    maiorMenorVet(vet, TAM);
    system("PAUSE");
    return 0;
}