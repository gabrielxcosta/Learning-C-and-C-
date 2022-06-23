#include <stdio.h>
#include <math.h>

int main(){
    int x1,x2,x3,y;
    scanf("%d\n%d\n%d", &x1,&x2,&x3);
    y=pow(x1+3,4)+pow(x2*x3,3);
    printf("y = %d", y);
    return 0;
}