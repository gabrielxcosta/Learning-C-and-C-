//Gabriel Ferreira da Costa - 19.1.4047 - Turma 44
#include <stdio.h>
#include <math.h>

int main(){
    int x1, x2, x3, y;
    printf("x1 = ");
    scanf("%d", &x1);
    printf("x2 = ");
    scanf("%d", &x2);
    printf("x3 = ");
    scanf("%d", &x3);
    y = pow(x1 + pow(x2,2) + pow(x3,2),2) - pow(x1 * x2 * x3,2);
    printf("y = %d", y);
    return 0;
}