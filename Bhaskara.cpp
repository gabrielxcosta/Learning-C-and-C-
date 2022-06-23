#include <iostream>
#include <math.h>
using namespace std;

void bhaskara(float *a, float *b, float *c){
    float delta = pow(*b, 2) - (4 * (*a) * (*c)), x[] = {0, 0};
    if(delta >= 0){
        x[0] = (-(*b) + sqrt(delta)) / 2 * (*a);
        x[1] = (-(*b) - sqrt(delta)) / 2 * (*a);
        cout << "Função --> a = " << *a << ", b = " << *b << ", c = " << *c << endl;
        cout << "Delta >= 0 { " << delta <<" } --> x1 e x2: " << x[0] << ", " << x[1] << endl;
    }
    else{
        cout << "Delta >= 0 { " << delta <<" } Raiz negativa! - Sem solução real!" << endl;
    }
}

int main(){
    float a, b, c;
    cout << "Informe a, b, c: "; cin >> a >> b >> c;
    bhaskara(&a, &b, &c);
    system("PAUSE");
    return 0;
}