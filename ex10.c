#include <stdio.h>

int main(){
    float x, y, resultado;
    char operacao;
    printf("Valor de x e y: "); scanf("%f %f", &x, &y);
    printf("\nQual a operação desejada? "); scanf("%s", &operacao);
    switch(operacao){
        case '+':
            resultado = x + y;
            break;
        case '-':
            resultado = x - y;
            break;
        case '*':
            resultado = x * y;
            break;
        case '/':
            resultado = x / y;
            break;
        default:
            ("ERRO: Operação inválida!");
            break;
    }
    printf("Resultado: %.2f %c %.2f = %.2f", x, operacao, y, resultado);
    return 0;
}