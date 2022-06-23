#include <stdio.h>

int main(){
    int valor;
    scanf("%d", &valor);
    int *p = &valor;
    p = (*p) * (*p);
    printf("Valor ao quadrado = %d\n", p);
    return 0;
}