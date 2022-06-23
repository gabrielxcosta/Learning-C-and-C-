#include <iostream>
#include <string>
using namespace std;

struct Aluno{
    string Nome;
    float Notas[3];
};

int main(){
    Aluno a1;
    cout << "Informe o nome do aluno: "; cin >> a1.Nome;
    float media = 0;
    for(int i = 0; i < 3; i++){
        cout << "Nota " << i + 1 << " de " << a1.Nome << ": ";
        cin >> a1.Notas[i];
        media += a1.Notas[i];
    }
    media = (media / 3.0);
    cout << "Média de " << a1.Nome << ": " << media << endl;
    system("PAUSE");
    return 0;
}
