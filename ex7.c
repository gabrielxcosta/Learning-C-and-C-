#include <stdio.h>

void troca(int *a, int*b){
    int aux = *a;
    *a = *b;
    *b = aux;
}

int main(){
    int x, y;
    printf("------Trocando valores------\nx e y: "); scanf("%d %d", &x, &y);
    printf("\nANTES\nx = %d\ny = %d\n", x, y);
    troca(&x, &y);
    printf("\nDEPOIS\nx = %d\ny = %d\n", x, y);
    return 0;
}