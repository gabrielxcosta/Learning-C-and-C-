#include <iostream>
#include "JogoDaVelha.h"

JogoDaVelha::JogoDaVelha(){
    p = new char*[lin]();
    for(int i = 0; i < lin; i++){
        p[i] = new char[col]();
        for(int j = 0; j < col; j++){
            p[i][j] = '*';
        }
    }
}

JogoDaVelha::~JogoDaVelha(){
    for(int i = 0; i < lin; i++){
        delete p[i];
    }
    delete p;
}

void JogoDaVelha::Display(){
    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            std::cout << p[i][j] << "  ";
        }
        std::cout << "\n";
    }
    std::cout << "\n";
}

void JogoDaVelha::InsereXO(){
    int aux_lin, aux_col;
    std::cout << "Informe a linha e a coluna: ";
    std::cin >> aux_lin >> aux_col;
    std::cout << "\n";
    while(aux_lin <= 0 || aux_col <= 0 || aux_lin > 3 || aux_col > 3 || p[aux_lin - 1][aux_col - 1] == 'X' || p[aux_lin - 1][aux_col - 1] == 'O' ){
        std::cout << "Valor informado inválido ou ocupado!\nInsira novamente a linha e a coluna: "; std::cin >> aux_lin >> aux_col;
    }
    std::cout << "\n";
    if(jogadas % 2 != 0){
        p[aux_lin - 1][aux_col - 1] = 'X';
    } 
    else{
        p[aux_lin - 1][aux_col - 1] = 'O';
    }
    this->jogadas++;
}

bool JogoDaVelha::Check(){
    int count = 0;
    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            if(p[i][j] == 'X' || p[i][j] == 'O'){
                count++;
            }
        }
    }

    if(count == 9){
        return false;
    } else{
        return true;
    }
}

void JogoDaVelha::Jogadas(){
    std::cout << "Jogada " << this->jogadas << ": \n";
}

bool JogoDaVelha::CheckLin(){
    int pt_x = 0, pt_o = 0;
    for(int i = 0; i < lin; i++){ // Checa as linhas da matriz
        if(p[i][0] == 'X' || p[i][1] == 'X' || p[i][2] == 'X'){
            pt_x++;
        } else if(p[i][0] == 'O' || p[i][1] == 'O' || p[i][2] == 'O'){
            pt_o++;
        }
        
        
    }
    return false;
}

bool JogoDaVelha::CheckCol(){
    int pt_x = 0, pt_o = 0;
    for(int i = 0; i < col; i++){ // Checa as colunas da matriz
        for(int j = 0; j < lin; j++){
            if(p[i][j] == 'X'){
                pt_x += 1; // Checa se o player 1 ganhou preenchendo uma coluna completa = 3 chars
            } else if(p[i][j] == 'O'){
                pt_o += 1; // Checa se o player 2 ganhou preenchendo uma coluna completa = 3 chars
            }
        }
        if(pt_x == 3){ // Se o player 1 ganhar em uma coluna completa
            return true;
        } else if(pt_o == 3){ // Se o player 1 ganhar em uma coluna completa 
            return true;
        }
    }
    return false;
}

bool JogoDaVelha::CheckDiagP(){
    int pt_x = 0, pt_o = 0;
    for(int i = 0; i < lin; i++){ // Checa a diagonal principal
        for(int j = 0; j < col; j++){ 
            if(i == j && p[i][j] == 'X'){ // Checa se o player 1 ganhou preenchendo uma diagonal completa = 3 chars
                pt_x += 1;
            } else if(i == j && p[i][j] == 'O'){ // // Checa se o player 2 ganhou preenchendo uma diagonal completa = 3 chars
                pt_o += 1;
            }
        }
        if(pt_x == 3){ // Se o player 1 ganhar em uma diagonal completa
            return true;
        } else if(pt_o == 3){ // Se o player 2 ganhar em uma diagonal completa 
            return true;
        }
    }
    return false;
}

bool JogoDaVelha::CheckDiagS(){
    int pt_x = 0, pt_o = 0;
    for(int i = 0; i < lin; i++){ // Checa a diagonal secundária
        for(int j = 0; j < col; j++){ 
            if((j == (col - 1 - i)) && (p[i][j] == 'X')){ // Checa se o player 1 ganhou preenchendo uma diagonal completa = 3 chars
                pt_x += 1;
            } else if((j == (col - 1 -  i)) && (p[i][j] == 'O')){ // // Checa se o player 2 ganhou preenchendo uma diagonal completa = 3 chars
                pt_o += 1;
            }
        }
        if(pt_x == 3){ // Se o player 1 ganhar em uma diagonal completa
            return true;
        } else if(pt_o == 3){ // Se o player 2 ganhar em uma diagonal completa 
            return true;
        }
    }
    return false;
}
