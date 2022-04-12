#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"portuguese");

    float Divida = 0, Juros = 0;
    int Parcelas = 0;

    cout << "Digite o valor da dívida : ";
    cin >> Divida;
    cout << "Digite a quantidade de parcelas : ";
    cin >> Parcelas;

    switch (Parcelas)
       {
      case 1:
           Juros = Divida;
       break;

      case 2:
           Juros = (Divida*5/100);
       break;

      case 4:
           Juros = (Divida*10/100);
       break;

      case 6:
           Juros = (Divida*15/100);
       break;

      case 10:
           Juros = (Divida*20/100);
       break;
       }

    cout << endl;
    cout << "Valor do juros a ser pago : " << Juros << " R$" << endl;
    cout << "Valor das parcelas : " << (Juros + Divida) / Parcelas << " R$" << endl;

    return 0;
}
