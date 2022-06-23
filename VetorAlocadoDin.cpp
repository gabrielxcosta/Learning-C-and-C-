#include <iostream>

void imprimeVet(int *vet, int n){
    std::cout << "V = [ ";
    for(int i = 0; i < n; i++){
        std::cout << vet[i] << " ";
    }
    std::cout << "]" << "\n";
}

int main(){
    int n; std::cout << "Informe n: "; std::cin >> n;
    int *v = new int[n];
    for(int i = 0; i < n; i++){
        v[i] = i + 1;
    }
    imprimeVet(v, n);
    delete[] v;
    system("PAUSE");
    return 0;
}