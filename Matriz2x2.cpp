#include "Matriz2x2.h"
#include <iostream>

void Matriz2X2::InsereElementos(){
    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            std::cin >> p[i][j];
        }
    }
}

int Matriz2X2::Det(){
    return (p[0][0] * p[1][1]) - (p[1][0] * p[0][1]);
}

bool Matriz2X2::EZero(){
    if(Det() != 0){
        return true;
    } else{
        return false;
    }
}

float** Matriz2X2::Inversa(){
    float **Inv = new float*[lin](), aux;
    for(int i = 0; i < lin; i++){
        Inv[i] = new float[col];
    }
    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            Inv[i][j] = (float)(p[i][j]) / (float)Det();
        }
    }
    aux = Inv[0][0];
    Inv[0][0] = Inv[1][1]; //Permutando os elementos
    Inv[1][1] = aux;       // da diagonal principal
    Inv[0][1] *= -1;
    Inv[1][0] *= -1;
    return Inv;
}

void Matriz2X2::Visualizar(){
    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            std::cout << p[i][j] << " ";
        }
    std::cout << "\n";
    }
}