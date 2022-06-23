#include <iostream>
using namespace std;

int main(){
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(i == j){
                cout << " 0 ";
            }
            else if(j > i){
                cout << " 1 ";
            }
            else{
                cout << "-1 ";
            }
        }
        cout << "\n";
    }
    system("PAUSE");
    return 0;
}