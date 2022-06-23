#include <stdio.h>

int main() {
    for ( int i = 1 ; i <= 20 ; i++ ){
        if ( i == 2 ) continue;
        if ( i == 5 ) break;
        printf("i = %d\n",i);
    }
    return 0;
}