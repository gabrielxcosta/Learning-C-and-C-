#include <stdio.h>

int main(){
    char plano;
    int qtd_jogos;
    double per_jogo, assinatura, resultado, p_medio;
    printf("Plano desejado: "); scanf("%c", &plano);
    printf("Jogos: "); scanf("%d", &qtd_jogos);
    if(plano == 'l'){
        assinatura = 9.9;
        if(qtd_jogos <= 5){
            per_jogo = 5.45 * qtd_jogos;
        }
        else if(qtd_jogos > 5 && qtd_jogos <=15){
            per_jogo = (4 * (qtd_jogos - 5)) + (4.5 * 5);
        }
        else{
            per_jogo = (2.95 * (qtd_jogos - 15)) + (3.5 * 15); 
        }
    } //
    else{
        assinatura = 19.9;
        if(qtd_jogos <= 5){
            per_jogo = 4 * qtd_jogos;
        }
        else if(qtd_jogos > 5 && qtd_jogos <= 15){
            per_jogo = (2.95 * (qtd_jogos - 5)) + (3.55 * 5);
        }
        else{
            per_jogo = 1.5 * qtd_jogos;
        }
    }
    resultado = assinatura + per_jogo;
    p_medio = resultado / qtd_jogos;

}