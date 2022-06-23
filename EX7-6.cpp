#include <iostream>
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

void ordenaVet(int *vet, int tam){ //Vetor e seu tamanho como parâmetro
    int aux = 0, decrescente[tam]; 
    for(int i = 0; i < tam; i++){ //i percorre o vetor {vet} a ser ordenado
        for(int j = 0; j < tam; j++){ //i anda um índice por vez enquanto a variável j percorre o vetor todo
            if(vet[i] < vet[j]){ //Maior para a direita e menor para esquerda
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }
    int j = 0;
    cout << "Ordem crescente: "; imprimeVet(vet, tam); cout << "\n";
    for(int i = tam - 1; i >= 0; i--){ //Apenas copio o vetor crescente, percorrendo-o do final para o começo e incluindo os elementos no vetor auxiliar
        decrescente[j] = vet[i];
        j++;
    }
    cout << "Ordem decrescente: "; imprimeVet(decrescente, tam); cout << "\n";
}

int main(){
    int n;
    cout << "\tORDENANDO UM VETOR\n" << endl;
    cout << "Informe o tamanho da lista: "; cin >> n;
    int *vetor = new int(n);
    cout << "Informe os elementos da lista: "; leVet(vetor, n);
    cout << "Vetor original: "; imprimeVet(vetor, n); cout << "\n";
    ordenaVet(vetor, n); cout << "\n";
    delete[] vetor;
    system("PAUSE");
    return 0;
}