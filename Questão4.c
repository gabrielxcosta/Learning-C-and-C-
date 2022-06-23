//Gabriel Ferreira da Costa - 19.1.4047 - Turma 44
#include <stdio.h>
#define N 15

void imprime_vetor(int *vetor, int n){
    for (int i = 0; i < n; i++){
        printf("%d ", *(vetor + i));
    }
    printf("\n");
}

int main(){
    printf("\tROTACIONANDO UM VETOR EM N POSIÇÕES\t\n\n");
    int vetor[N], n, j = 0;
    printf("Valor de n: "); scanf("%d", &n);
    printf("Digite os valores espaçados: ");
    
    for(int i = 0; i < N; i++){
        scanf("%d", vetor + i);
    }
    
    int aux[n]; //Vetor auxiliar para armazenar o(s) valor(es) do vetor que estão antes de "n"
    
    for(int i = 0; i < N; i++){ //Percorrendo o vetor para pegar os valores 
        if(i <= n){
            *(aux + i) = *(vetor + i); //Armazenando cada elemento no vetor auxiliar
        }
    }
    for(int i = 0; i < N; i++){
        *(vetor + i) = *(vetor + (n + i)); //O novo vetor começará de V[n + i]
        if(i >= N - n && i <= N){ //Intervalo de "n" na porção direita do vetor original 
            *(vetor + i) = *(aux + j); //Realizando as trocas
            j++; 
        } 
    }
    printf("\n");
    imprime_vetor(vetor, N);
    return 0;
}