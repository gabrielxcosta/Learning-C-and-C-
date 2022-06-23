#include <iostream>

struct Ponto3D{
    int x;
    int y;
    int z;
    public:
        void DesenharPonto3D(Ponto3D Ponto){
            std::cout << "x -> " << Ponto.x << " | y -> " << Ponto.y << " | z -> " << Ponto.z << std::endl;
        }
};

int main(){
    Ponto3D Ponto = {3, 4, 5};
    Ponto.DesenharPonto3D(Ponto);
    system("PAUSE");
    return 0;
}