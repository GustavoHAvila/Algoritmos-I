// Exercício 05
#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"portuguese");
    int Op;
    float  Numero, Numero2;
    cout << "Analise as seguintes opções : " << endl;
    cout << " (1)                     Média entre os números digitados"   << endl;
    cout << " (2)                     Diferença do maior pelo menor"      << endl;
    cout << " (3)                     Produto entre os números digitados" << endl;
    cout << " (4)                     Divisão do primeiro pelo segundo"   << endl;
    cout << endl;
    cout << "Digite a opção escolhida : ";
    cin >> Op;
    cout << endl;
    if ((Op != 1)&&(Op != 2)&&(Op != 3)&&(Op != 4))
    {
            cout << "Opção inválida!" << endl;
            return 0;
    }
     cout << "Digite um número : ";
    cin >> Numero;
    cout << "Digite outro número : ";
    cin >> Numero2;
    if (Op == 1)
        {
            Numero = (Numero + Numero2) / 2;
            cout << "A média é : " << Numero << endl;
        }
    else
    if (Op == 2)
    {
        if (Numero > Numero2)
        {
            cout << "A diferença é : " << Numero - Numero2 << endl;
        }

    else
        if (Numero < Numero2)
        {
            cout << "A diferença é : " << Numero2 - Numero << endl;
        }
    }
    else
    if (Op == 3)
    {
            cout << "O produto é : " << Numero*Numero2 << endl;
    }
    else
    if (Op == 4)
    {
            if(Numero2 == 0)
            cout << "O número precisa ser diferente de zero!" << endl;
            else
            {
            cout << "O resultado da divisao é : " << Numero / Numero2 << endl;
            }
    }
    return 0;
}
