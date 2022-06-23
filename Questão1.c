//Gabriel Ferreira da Costa - 19.1.4047 - Turma 44
#include <stdio.h>
#define N 10

void imprime_vetor(int *vetor, int n){
    for(int i = 0; i < n; i++){
        printf("F[%d] = %d\n", i + 1, *(vetor + i));
    }
    printf("\n");
}

int main(){
    int vetor[N];
    *(vetor + 0) = 1;
    *(vetor + 1) = 1;
    printf("\tFIBONACCI\t\n");
    for(int i = 2; i < N; i++){
        *(vetor + i) = *(vetor + (i - 1)) + *(vetor + (i - 2));
    }
    imprime_vetor(vetor, N);
    return 0;
}