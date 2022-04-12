#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL,"portuguese");
    string T, V, P;
    float Vista = 0, Prazo = 0, Cont = 0, Cont2 = 0;
    for (int n=1; n<=15; n++)
    {
    cout << n << "ª COMPRA" << endl;
    cout << "Qual a forma de pagamento?(V/P) ";
    cin >> T;
    if ((T == "V")||(T == "v"))
    {
        cout << "Qual o valor da compra a vista? ";
        cin >> Vista;
        Cont = Cont + Vista;
        cout << endl;
    }
    else
    if ((T == "P")||(T == "p"))
    {
        cout << "Qual o valor da compra a prazo? ";
        cin >> Prazo;
        Cont2 = Cont2 + Prazo;
        cout << endl;
    }
    }
    cout << "RESULTADO" << endl;
    cout << endl;
    cout << "Valor total das compras a vista : " << Cont << " R$" << endl;
    cout << "Valor total das compras a prazo : " << Cont2 << " R$" << endl;
    cout << "Valor total das compras efetuadas : " << Cont+Cont2 << " R$" << endl;
    cout << "Valor da primeira prestacao : " << Cont2/3 << " R$" << endl;
return 0;
}
