//Gabriel Ferreira da Costa - 19.1.4047 - Turma 44
#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <stdlib.h>
#define N 100000

void imprime_vetor(int *vetor, int n){
    for (int i = 0; i < n; i++){
        printf("%d ", *(vetor + i));
    }
    printf("\n");
}

int main(){
    int n, random[N];
    printf("\tFREQUÊNCIA DA OCORRÊNCIA DE INTEIROS ALEATÓRIOS\t\n");
    srand(time(NULL)); //Semente aleatória 
    printf("\nn: "); scanf("%d", &n);
    int A[n + 1];
    for(int i = 0; i < N; i++){
        *(random + i) = (rand() % n) + 1;
    }
    for(int i = 0; i < (n + 1); i++){
        *(A + i) = 0;
    }
    printf("Vetor aleatório: ");
    imprime_vetor(random, N);
    for(int i = 0; i < N; i++){
        A[random[i]]++;
    }
    printf("\n");
    for(int i = 1; i < n + 1; i++){
        printf("|ELEMENTO [%d]: %d| \n", i,  *(A + i));
    }
    return 0;
}