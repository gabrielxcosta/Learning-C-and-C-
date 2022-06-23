#include <iostream>
#include <locale.h>
#include <ctime>

int main(){
    setlocale(LC_ALL, "Portuguese");
    time_t HoraAtual = time(0);
    tm* MinhaHora = localtime(&HoraAtual);
    std::cout << "\nHora: " << MinhaHora->tm_hour << ":" << MinhaHora->tm_min << ":" << MinhaHora->tm_sec << "\n";
    std::cout << "Dia: " << MinhaHora->tm_mday << "\n";
    std::cout << "Mês: " << 1 + MinhaHora->tm_mon << "\n";
    std::cout << "Ano: " << 1900 + MinhaHora->tm_year << "\n";
    system("PAUSE");
    return 0;
}