#include <iostream>
#include <math.h>
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
}

void distVet(int *vet, int n, int index){
    int dist;
    for(int i = 0; i < n; i++){
        if(i != index){
            cout << "Distância do elemento " << i + 1 << " {" << vet[i] << "}" << " até o maior elemento do vetor: " << abs(i - index) << endl;
        }
    }
}

int maxVet(int *vet, int n){
    int max = vet[0], indice = 0;
    for(int i = 0; i < n; i++){
        if(vet[i] > max){
            max = vet[i];
            indice = i;
        }
    }
    return indice;
}

int main(){
    int n;
    cout << "\tDISTÂNCIA DOS ELEMENTOS DE UM VETOR" << endl;
    cout << "Informe o tamanho do vetor: "; cin >> n;
    int *vetor = new int(n); 
    cout << "Informe os elementos do vetor: "; leVet(vetor, n);
    cout << "Vetor = [ "; imprimeVet(vetor, n); cout << "]" << "\n";
    cout << "Índice do maior valor: " << maxVet(vetor, n) << endl;
    distVet(vetor, n, maxVet(vetor, n));
    system("PAUSE");
    return 0;
}