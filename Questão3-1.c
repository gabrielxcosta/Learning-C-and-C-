//Gabriel Ferreira da Costa - 19.1.4047 - Turma 44
#include <stdio.h>

int main(){
    double celsius, kelvin, fahrenheit;
    printf("Digite o valor da temperatura em °C: ");
    scanf("%lf",&celsius);
    fahrenheit = (1.8*celsius) + 32;
    kelvin = celsius + 273.15;
    printf("%0.2lf°C corresponde a %0.2lf°F e %0.2lfK!", celsius,fahrenheit,kelvin);
    return 0;
}