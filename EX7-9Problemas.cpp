#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
#define B 5 //Bairros/
#define C 4 //Candidatos

void imprimeVet(int *vet, int n, int tot){
    char aux[] = {'A', 'B', 'C', 'D'};
    int maior = vet[0], index;
    for(int i = 0; i < n; i++){
        if(vet[i] > maior){
            maior = vet[i];
            index = i;
        }
        cout << "Candidato " << aux[i] << ": " << vet[i] << " - "<< setprecision(4) <<(float(vet[i] * 100) / float(tot)) << "%" <<  " dos votos" << endl;
    }
    cout << "Candidato mais votado: " << aux[index] << " - " << maior << " votos" << endl;
}

int total_votos(int matriz[][4]){
    int acumula = 0;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 4; j++){
            acumula += matriz[i][j];
        }
    }
    return acumula;
}

float porcentagem(int *vet, int tot){
    
}

int main(){
    cout << "\t\tELEIÇÕES\n";
    int BairroCandidato[5][4] = {{194, 48, 206, 45}, {180, 20, 320, 16}, {221, 90, 140, 20}, {432, 50, 821, 14} ,{820, 61, 946, 18}};
    cout << "Bairro  Candidato  Candidato  Candidato  Candidato" << endl;
    cout << "            ";
    for(char aux = 65; aux < 69; aux++){
        cout << aux << "          ";
    }
    cout << "\n";   
    for(int i = 0; i < B; i++){
        cout << "  " << i + 1 << "        ";
        for(int j = 0; j < C; j++){
            cout << BairroCandidato[i][j] << "        ";
        }
        cout << "\n";
    }
    int votos[4] = {0, 0, 0, 0};
    
    //Parcial dos Votos
    for(int i = 0; i < B; i++){
        votos[0] += BairroCandidato[i][0];
        votos[1] += BairroCandidato[i][1];
        votos[2] += BairroCandidato[i][2];
        votos[3] += BairroCandidato[i][3];
    }

    cout <<"\nTotal de votos registrados: " << total_votos(BairroCandidato) << endl;
    imprimeVet(votos, 4, total_votos(BairroCandidato)); cout << "\n";
    system("PAUSE");
    return 0;
}