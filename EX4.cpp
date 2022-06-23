#include <iostream>
using namespace std;

int main(){
    float vel[] = {70.9, 89.5, 65.6, 102.5, 123.6, 63.4, 74.5, 99.5, 68.7}, acumula = 0;
    int tam = sizeof(vel) / sizeof(float);
    for(auto i : vel){
        acumula += i;
    }
    acumula = acumula / float(tam);
    cout << "Média das velocidades: " << acumula << " km/h" << endl;
    system("PAUSE");
    return 0;
}