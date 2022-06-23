#include <iostream>
#include <iomanip>

void zeraVet(int *vet, int n){
    for(int i = 0; i < n; i++){
        vet[i] = 0;
    }
}

void leVet(int *vet, int n){
    for(int i = 0; i < n; i++){
        std::cin >> vet[i];
    } 
}

void imprimeVet(int *vet, int n){
    for(int i = 0; i < n; i++){
        std::cout << vet[i] << " ";
    }
    std::cout << "\n";
}

void invertVet(int* vetor, int tamanho){
    int *ptr1 = vetor; //Ponteiro recebe o primeiro elemento
    int *ptr2 = ptr1 + tamanho - 1; //Ponteiro que recebe o último elemento
    while(ptr1 < ptr2){
        *ptr1 ^= *ptr2 ^= *ptr1 ^= *ptr2;      
        ++ptr1;
        --ptr2;
        }
    for(int a = 0; a < tamanho; a++){
        std::cout << vetor[a] << " ";
    }
}

int main(){
    int n;
    std::cout << "\nInforme n: "; std::cin >> n;
    int vet[n];
    std::cout << "Informe os valores: "; leVet(vet, n);
    std::cout << "Ordem direta: "; imprimeVet(vet, n);
    std::cout << "Ordem inversa: "; invertVet(vet, n);
    std::cout << std::endl;
    system("color 0A");
    system("PAUSE");
    return 0;
}