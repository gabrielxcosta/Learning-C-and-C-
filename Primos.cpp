#include <iostream>

void imprime(int num){
    for(int i = 0; i < num; i++){
        std::cout << i << " ";
    }
}

int main(){
    int n;
    std::cout << "Informe n: "; std::cin >> n;
    n > 0 && n != 0 ? imprime(n) : exit(0);
    system("PAUSE");
    return 0; 
}