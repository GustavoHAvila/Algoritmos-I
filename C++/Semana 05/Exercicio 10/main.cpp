// Exerc�cio 10
#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"portuguese");
    float Valor;
    cout << "Digite o valor de f�brica do carro : " ;
    cin >> Valor;
     if (Valor <= 12000)
     {
      cout << "O pre�o final desse carro � : " << (Valor*5)/100 + Valor << endl;
     }
     else
        if ((Valor > 12000)&&(Valor < 25000))
     {
         cout << "O pre�o final desse carro � : " << (Valor*25)/100 + Valor << endl;
     }
     else
        if (Valor >= 25000)
     {
         cout << "O pra�o final desse carro � : " << (Valor*35)/100 + Valor << endl;
     }
     return 0;
}
