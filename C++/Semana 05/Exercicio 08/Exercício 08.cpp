// Exercício 08
#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"portuguese");
    float Salario;
    cout << "Digite o valor do seu salário atual : " ;
    cin >> Salario;
    if (Salario <= 300)
    {
        cout << "Seu novo salário é : " << (Salario*35)/100 + Salario << endl;
    }
    else
    if (Salario > 300)
    {
        cout << "Seu novo salário é : " << (Salario*15)/100 + Salario << endl;
    }
    return 0;
}
