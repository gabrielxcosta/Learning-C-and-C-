#include <iostream>

int main(){
    for(char aux = 65; aux <= 90; aux++){
        for(char op = 90; op >= aux; op--){
            std::cout << op;
        }
        std::cout << "\n";
    }
    system("PAUSE");
    return 0;
}