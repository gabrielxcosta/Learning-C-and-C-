#include <stdio.h>

int main(){
    int i = 1, n = 7; 
    double pi = 0, aux_i = i;
    while (i <= n){
        if (i % 2 == 0){
            pi += -4 / aux_i;
        }
        else{
            pi += 4 / aux_i;
        }
        aux_i += 2;
    }
    printf("PI = %lf", pi);
    return 0;
}