//Gabriel Ferreira da Costa - 19.1.4047 - Turma 44
#include <stdio.h>
#define N 30

void temp_media(double *vetor, int n){
    double soma = 0, media;
    int men = 0, mai = 0; // Contadores para temperaturas abaixo e acima da média;
    for(int i = 0; i < n; i++){
        soma += *(vetor + i);
    }
    media = soma / n;
    for(int i = 0; i < n; i++){
        if(*(vetor + i) > media){ // Queremos os maiores e não iguais a média
            mai++;
        }
        else{
            if(*(vetor + i) < media){ // Queremos os menores e não iguais a média
                men++;
            }
        }
    }
    printf("\nMÉDIA = %0.2lf", media);
    printf("\nQTDE DE DIAS COM TEMPERATURA ABAIXO DA MÉDIA: %d", men);
    printf("\nQTDE DE DIAS COM TEMPERATURA ACIMA DA MÉDIA: %d", mai);
}

int main(){
    printf("\tMÉDIA DA TEMPERATURA DE 30 DIAS\t\n\n");
    double vetor[N];

    for(int i = 0; i < N; i++){
        printf("Dia %d - Temperatura: ", i + 1); scanf("%lf", vetor + i);
    }
    
    temp_media(vetor, N);
    return 0;
}