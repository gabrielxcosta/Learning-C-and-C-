#include <iostream>
using namespace std;

int main(){
    int numero{ 234 };
    int *ptr = &numero;
    cout << "\nAntes da troca: \n" << endl;
    cout << "Conteúdo de nro: " << numero << " - Endereço de nro: " << &numero << endl;
    cout << "Conteúdo de ptr: " << ptr <<  " - Endereço de ptr: " << &ptr << endl;
    cout << "Conteúdo apontado por ptr: " << *ptr << endl;
    *ptr = 1456;
    int *novoPtr = ptr;
    cout << "\nNova troca: \n" << endl;
    cout << "Conteúdo de nro: " << numero << " - Endereço de nro: " << &numero << endl;
    cout << "Conteúdo de ptr: " << ptr <<  " - Endereço de ptr: " << &ptr << endl;
    cout << "Conteúdo do novo ptr: " << novoPtr <<  " - Endereço do novo ptr: " << &novoPtr << endl;
    cout << "Conteúdo apontado pelo novo ptr: " << *novoPtr << endl;
    *ptr += 200;
    cout << "\nNova troca: \n" << endl;
    cout << "Conteúdo de nro: " << *novoPtr << endl;
    system("PAUSE");
    return 0;
}