#include <iostream>
#include <locale.h>

struct Data{
    int Dia;
    int Mes;
    int Ano;
};

int main(){
    setlocale(LC_ALL, "Portuguese");
    Data Agenda = {27, 12, 2001};
    std::cout << "Dia: " << Agenda.Dia << " - Mês: " << Agenda.Mes << " - Ano: " << Agenda.Ano << std::endl;
    system("PAUSE");
    return 0;
}