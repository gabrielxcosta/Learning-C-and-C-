#include <iostream>
#include <iomanip>

int **criaMat(int m, int n){
    int *mat = new int[m];
    for(int i = 0; i < m; i++){
        *mat = new int[n];
    }
    return mat;
}

void imprimeMat(int **mat, int lin, int col){
    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            std::cout << mat[i][j] << " ";
        }
        std::cout << "\n";
    }
}

int main(){
    setlocale(LC_ALL, "portuguese");
    int linhas, colunas;
    std::cout << "Informe as linhas e colunas: ";
    std::cin >> linhas >> colunas;
    int **matriz = criaMat(linhas, colunas);
    imprimeMat(matriz, linhas, colunas);
    system("color 0A");
    system("PAUSE");
    return 0;
}