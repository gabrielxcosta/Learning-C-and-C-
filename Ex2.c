#include <stdio.h>

void duplica(int *p){
    *p = *p * 2;
    return *p;
}

int main(){
    int valor;
    printf("Digite o valor a ser duplicado: "); scanf("%d", &valor);
    duplica(&valor);
    printf("%d", valor);
    return 0;
}