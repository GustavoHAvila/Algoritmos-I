#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"portuguese");

    int Prestacoes = 0, PPagas = 0;
    float ValorP = 0;

    cout << "N�mero de presta��es : ";
    cin >> Prestacoes;
    cout << "N�mero de presta��es pagas : ";
    cin >> PPagas;
    cout << "Valor de cada presta��o : ";
    cin >> ValorP;
    cout << endl;
    cout << "Valor total pago : " << PPagas*ValorP << " R$" << endl;
    cout << "Falta pagar : " << ((Prestacoes*ValorP)-(PPagas*ValorP)) << " R$" << endl;
    return 0;
}
