#include <stdio.h>
#include <math.h>

int main(){
    long long int n = 52998224725;
    int dig = n / 10000000000, sobra = dig % 10;
    printf("dig = %d / sobra = %d", dig, sobra);
    return 0;
}