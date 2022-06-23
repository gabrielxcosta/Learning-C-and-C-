#include <iostream>

class Matrix{
    private:
        int Lin = 3;
        int Col = 3;
        int **p;
    public:
        Matrix(){
            this->p = new int*[Lin]();
            for(int i = 0; i < Lin; i++){
                this->p[i] = new int[Col]();
            }
        }
        ~Matrix(){
            for(int i = 0; i < Lin; i++){
                delete p[i];
            }
            delete p;
        }
        Matrix(const Matrix&);
        void InsereMatrix(){
            for(int i = 0; i < this->Lin; i++){
                for(int j = 0; j < this->Col; j++){
                    std::cin >> this->p[i][j];
                }
            }
        }
        int Det();
        void Display();
        Matrix Transposta();
        void Inversa();
        int** getMatriz();
};

int Matrix::Det(){
    int diag_prin = (p[0][0] * p[1][1] * p[2][2]) + (p[0][1] * p[1][2] * p[2][0]) + (p[0][2] * p[1][0] * p[2][1]);
    int diag_sec = -(p[2][0] * p[1][1] * p[0][2]) - (p[2][1] * p[1][2] * p[0][0]) - (p[2][2] * p[1][0] * p[0][1]);
    return diag_prin + diag_sec;
}

Matrix Matrix::Transposta(){
    Matrix Trans;
    for(int j = 0; j < Col; j++){
        for(int i = 0; i < Lin; i++){
            Trans.p[j][i] = this->p[i][j];
        }
    }
    return Trans;
}

void Matrix::Inversa(){
    float count = 1 / Det();
    for(int i = 0; i < Lin; i++){
        for(int j = 0; j < Col; j++){
            p[i][j] *= count;
        }
    }
}

int** Matrix::getMatriz(){
    return p;
}

void Matrix::Display(){
    for(int i = 0; i < Lin; i++){
        for(int j = 0; j < Col; j++){
            std::cout << p[i][j] << " ";
        }
        std::cout << "\n";
    }
}

int main(){
    Matrix Matriz;
    std::cout << "\t*****MATRIZ COM CLASSES*****\n";
    std::cout << "Matriz 3x3 nula: \n";
    Matriz.Display();
    std::cout << "\nAgore informe os elementos da matriz: "; Matriz.InsereMatrix();
    Matriz.Display();
    std::cout << "Determinante da matriz inserida --> " << Matriz.Det() << "\n";
    Matrix Transposta = Matriz.Transposta();
    std::cout << "\nMatriz transposta: \n";
    Transposta.Display();
    if(Matriz.Det() == 0){
        std::cout << "\nMatriz não invertível! - Det(Matriz) = " << Matriz.Det() << std::endl;
    }
    else{
        Matriz.Inversa();
        std::cout << "Matriz inversa: \n";
        Matriz.Display();
    }
    Matriz.~Matrix();
    system("PAUSE");
    return 0;
}