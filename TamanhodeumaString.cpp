#include <iostream>
#include <string.h>

int strlen(char *cad){
    int posicao = 0, i = 0;
    while(cad[i] != '\0'){
        posicao++;
        i++;
    }
    return posicao;
}

int main(){
    char *cptr = "Vai tomar no cu Bolsonaro!";
    std::printf("String --> %s\n", cptr);
    std::cout << "Tamanho: " << strlen(cptr) << std::endl;
    system("PAUSE");
    return 0;
}