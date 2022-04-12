// Exercício 10
#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"portuguese");
    float Valor;
    cout << "Digite o valor de fábrica do carro : " ;
    cin >> Valor;
     if (Valor <= 12000)
     {
      cout << "O preço final desse carro é : " << (Valor*5)/100 + Valor << endl;
     }
     else
        if ((Valor > 12000)&&(Valor < 25000))
     {
         cout << "O preço final desse carro é : " << (Valor*25)/100 + Valor << endl;
     }
     else
        if (Valor >= 25000)
     {
         cout << "O praço final desse carro é : " << (Valor*35)/100 + Valor << endl;
     }
     return 0;
}
