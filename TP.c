#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
    printf("\nBem vindo ao Caça Palavras\nO que deseja fazer:\n\n");
    printf("1. Começar um novo jogo\n2. Continuar um novo jogo\n3. Instruções do jogo\n\n");
    printf("Escolha a opção (digite ”sair” em qualquer lugar para sair do jogo): ");
    int op; scanf("%d", &op);

    //Menu
    switch(op){
        case 1:
            printf("NOVO JOGO!");
            break;
        case 2:
            printf("CONTINUAR JOGO!");
            break;
        case 3:
            printf("\tINSTRUÇÕES\n");
            printf("\nCOMANDOS POSSÍVEIS:\n\n• marcar -> Digite no terminal durante o jogo especificando as coordenadas da palavra para marcá-la. Exemplo: 'marcar CD CJ' indica que a palavra começa na linha 'C', coluna 'D' e termina na linha 'C', coluna 'J'. Exemplo: 'marcar CD CJ' indica que a palavra começa na linha 'C', coluna 'D' e termina na linha 'C', coluna 'J';");
            printf("\n\n• salvar -> Digite no terminal durante o jogo para armazenar em um arquivo o progresso atual da partida. Obs: informe o tipo do arquivo. Exemplo: 'salvar jogo.txt' salva o jogo no arquivo 'jogo.txt';");
            printf("\n\n• resolver -> Exibe a matriz resolvida com as palavras em destaque e finaliza o jogo;\n");
            printf("\n• sair -> encerra o programa, abandonando o jogo (sem salvar as alterações).");
            break;
        default:
            exit(1);
    }

    return 0;
}