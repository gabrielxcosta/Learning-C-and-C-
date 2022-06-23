#include <stdio.h>

int main(){
    char letra;
    scanf("%c", &letra);
    switch(letra){
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
            printf("É vogal!");
            break;
        default:
            printf("É consoante!");
            break;
    }
    return 0;
}