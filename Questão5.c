//Gabriel Ferreira da Costa - 19.1.4047 - Turma 44
#include <stdio.h>
#define N 15

int main(){
    printf("\tMÉDIA DAS NOTAS DE 15 ALUNOS\t\n\n");
    double notas1[N], notas2[N], soma = 0, media;
    for(int i = 0; i < N; i++){
        printf("Aluno %d)\nNota %d: ", i + 1, 1); scanf("%lf", notas1 + i);
        printf("Nota %d: ",2); scanf("%lf", notas2 + i);
        printf("\n");
    }
    printf("STATUS:\n");
    for(int i = 0; i < N; i++){
        soma = *(notas1 + i) + *(notas2 + i);
        media = soma / 2;
        if(media >= (0.6 * 10)){ // Se a média for maior ou igual a 60% do total - Aprovado 
            printf("Aluno %d) Aprovado!", i+1);
        }
        else{
            printf("Aluno %d) Reprovado!", i+1);
        }
        printf("\n");
    }
    return 0;
}