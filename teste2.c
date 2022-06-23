#include <stdio.h>

int main(){
    int n = 10, i = 0;
    while (i <= n){
        if (i % 2 == 0){
            printf("O número %d é par!\n", i);
        }
        else{
            printf("O número %d é ímpar!\n", i);
        }
        i++;
    }
    return 0;
}