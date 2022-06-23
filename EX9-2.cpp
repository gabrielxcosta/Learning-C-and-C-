#include <iostream>
using namespace std;

int main(){
    int vet[] = {1, 2, 3, 4};
    int *ptr = vet;
    for(int i = 0; i < 4; i++){
        cout << *(ptr + i) << " ";
    }
    cout << "\n";
    system("PAUSE");
    return 0;
}