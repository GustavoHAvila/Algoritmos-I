// Exerc�cio 11
#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"portuguese");
    float Salario;
    cout << "Digite o valor do seu sal�rio atual : ";
    cin >> Salario;
    if (Salario <= 300)
    {
        cout << "Seu aumento sal�rial � de : " << (Salario*15)/100 << " R$" << endl;
        cout << "Seu novo salario � de : " << (Salario*15)/100 + Salario << " R$" << endl;
    }
    else
        if ((Salario > 300)&&(Salario < 600))
    {
        cout << "Seu aumento sal�rial � de : " << (Salario*10)/100 << " R$" << endl;
        cout << "Seu novo sal�rio � de : " << (Salario*10)/100 + Salario << " R$" << endl;
    }
    else
            if ((Salario >= 600)&&(Salario <= 900))
    {
        cout << "Seu aumento sal�rial � de : " << (Salario*5)/100 << " R$" << endl;
        cout << "Seu novo sal�rio � de : " << (Salario*5)/100 + Salario << " R$" << endl;
    }
    else
                 if (Salario > 900)
    {
        cout << "Seu aumento sal�rial � de : 0,00 R$ " << endl;
        cout << "Seu novo sal�rio � de : " << Salario << " R$" << endl;
    }
    return 0;
}
