#include <iostream>
using namespace std;

int main(){
    float notas_aluno[] = {4.9, 9.5, 5.6, 2.5, 9.6, 6.4, 7.5, 9.8, 8.7, 10.0}, acumula = 0;
    int tam = sizeof(notas_aluno) / sizeof(float);
    for(auto nota : notas_aluno){
        acumula += nota;
    }
    acumula = acumula / float(tam);
    cout << "Média do aluno: " << acumula << endl;
    system("PAUSE");
    return 0;
}