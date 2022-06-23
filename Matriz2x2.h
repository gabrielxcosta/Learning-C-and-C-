#pragma once
#include <iostream>
#include <locale.h>

class Matriz2X2{
    private:
        int lin = 2;
        int col = 2;
        int **p;
    public:
        Matriz2X2(){ //Construtor default --> Preenchendo os elementos com zeros
            p = new int*[lin]();
            for(int i = 0; i < lin; i++){
                p[i] = new int[col]();
            }
        }
        ~Matriz2X2(){ //Destrutor
            for(int i = 0; i < lin; i++){
                delete p[i];
            }
            delete p;
        }
        Matriz2X2(const Matriz2X2&); //Construtor de cópia
        void InsereElementos();
        int Det(); //Determinante
        bool EZero(); //Retorna "true" se det != 0 e "false" caso contrário
        float** Inversa();
        void Visualizar();
};