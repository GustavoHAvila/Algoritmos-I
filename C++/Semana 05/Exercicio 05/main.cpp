// Exerc�cio 05
#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"portuguese");
    int Op;
    float  Numero, Numero2;
    cout << "Analise as seguintes op��es : " << endl;
    cout << " (1)                     M�dia entre os n�meros digitados"   << endl;
    cout << " (2)                     Diferen�a do maior pelo menor"      << endl;
    cout << " (3)                     Produto entre os n�meros digitados" << endl;
    cout << " (4)                     Divis�o do primeiro pelo segundo"   << endl;
    cout << endl;
    cout << "Digite a op��o escolhida : ";
    cin >> Op;
    cout << endl;
    if ((Op != 1)&&(Op != 2)&&(Op != 3)&&(Op != 4))
    {
            cout << "Op��o inv�lida!" << endl;
            return 0;
    }
     cout << "Digite um n�mero : ";
    cin >> Numero;
    cout << "Digite outro n�mero : ";
    cin >> Numero2;
    if (Op == 1)
        {
            Numero = (Numero + Numero2) / 2;
            cout << "A m�dia � : " << Numero << endl;
        }
    else
    if (Op == 2)
    {
        if (Numero > Numero2)
        {
            cout << "A diferen�a � : " << Numero - Numero2 << endl;
        }

    else
        if (Numero < Numero2)
        {
            cout << "A diferen�a � : " << Numero2 - Numero << endl;
        }
    }
    else
    if (Op == 3)
    {
            cout << "O produto � : " << Numero*Numero2 << endl;
    }
    else
    if (Op == 4)
    {
            if(Numero2 == 0)
            cout << "O n�mero precisa ser diferente de zero!" << endl;
            else
            {
            cout << "O resultado da divisao � : " << Numero / Numero2 << endl;
            }
    }
    return 0;
}
