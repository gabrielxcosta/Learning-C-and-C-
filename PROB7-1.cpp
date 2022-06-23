#include <iostream>
#include <string.h>

int convertRomano(char *vet, int n){
    int res;
    for(int i = 0; i < n; i++){
        if(vet[i] == 'I' || vet[i] == 'i'){
            res += 1;
        }
        else if(vet[i] == 'V' || vet[i] == 'v'){
            res += 5;
        }
        else if(vet[i] == 'X' || vet[i] == 'x'){
            res += 10;
        }
        else if(vet[i] == 'L' || vet[i] == 'l'){
            res += 50;
        }
        else if(vet[i] == 'C' || vet[i] == 'c'){
            res += 100;
        }
        else if(vet[i] == 'D' || vet[i] == 'd'){
            res += 500;
        }
        else if(vet[i] == 'M' || vet[i] == 'm'){
            res += 1000;
        }
        else{
            std::cout << "ERRO!";
            system("PAUSE");
            exit(0);
        }
    }
    return res;
}

int main(){
    char num[] = "MLXVII";
    int tam = strlen(num);
    std::cout << "\tCONVERSOR DE NÚMEROS ROMANOS\n";
    std::cout << "Resultado: " << convertRomano(num, tam) << std::endl;
    system("PAUSE");
    return 0;
}