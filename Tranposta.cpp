#include <iostream>
using namespace std;

void imprimeMatriz(int n, int m, int Matriz[2][3]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << Matriz[i][j] << " ";
        }
        cout << "\n";
    }
}

int main(){
    int A[3][2] = {{1, 2}, {3, 4}, {5, 6}}, B[2][3] = {{0, 0, 0}, {0, 0, 0}};
    for(int j = 0; j < 2; j++){
        for(int i = 0; i < 3; i++){
            B[j][i] = A[i][j];
        }
    }
    imprimeMatriz(2, 3, B);
    system("PAUSE");
    return 0;
}