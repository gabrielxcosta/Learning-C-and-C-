#include <stdio.h>

int main(){
    int idade, nro_pessoas = 0, soma_idade = 0, idade_max, idade_min;
    do{
        printf("Insira a idade: "); scanf("%d", &idade);
        if(idade != 0){
            nro_pessoas += 1;
            soma_idade += idade;
            if(idade < idade_min){
                idade_min = idade;
            }
            if(idade > idade_max){
                idade_max = idade;
            }
        }
    } while(idade != 0);
    
    int idade_media = soma_idade / nro_pessoas;
    printf("\nNro de pessoas = %d", nro_pessoas);
    printf("\nIdade média do grupo = %d", idade_media);
    printf("\nMaior e menor idade = %d e %d", idade_max, idade_min);
    return 0;
}