#include <stdio.h>

int main(){
    int x, y, i, soma_par = 0, mult_impar = 1;
    printf("x e y: "); scanf("%d %d", &x, &y);
    while(x >= y){
        printf("ERRO: x tem que ser menor que y!\n");
        printf("x e y: "); scanf("%d %d", &x, &y);
    }
    i = x;
    while(i <= y){
        if(i % 2 == 0){
            soma_par += i;
        }
        else{
            mult_impar *=i;
        }
        i++;
    }
    
    printf("\nA soma dos pares de %d até %d é: %d", x, y, soma_par);
    printf("\nA multiplicação dos ímpares de %d até %d é: %d", x, y, mult_impar);
    return 0;
}