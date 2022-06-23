#include <stdio.h>

int main(){
    int n;
    printf("n: "); scanf("%d", &n);
    switch(n){
        case 1:
            printf("Descrição: Alimento não-perecível");
            break;
        case 2:
            printf("Descrição: Alimento perecível");
            break;
        case 3:
            printf("Descrição: Vestuário");
            break;
        case 4:
            printf("Descrição: Limpeza");
            break;
        default:
            printf("ERRO: Código inválido!");
            break;
    }
    return 0;   
}