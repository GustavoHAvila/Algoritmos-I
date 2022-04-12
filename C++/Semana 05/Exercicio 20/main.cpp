// Exercício 20
#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"portuguese");
    int Idade;
    cout << "digite sua idade : ";
    cin >> Idade;
    if (Idade < 5)
    {
        cout << "Sem categoria" << endl;
    }
    else
        if ((Idade >= 5)&&(Idade <= 7))
    {
        cout << "Categoria: Infantil" << endl;
    }
    else
        if ((Idade >= 8)&&(Idade <= 10))
    {
        cout << "Categoria: Juvenil" << endl;
    }
    else
        if ((Idade >= 11)&&(Idade <= 15))
    {
        cout << "Categoria: Adolescente" << endl;
    }
    else
        if ((Idade >= 16)&&(Idade <= 30))
    {
        cout << "Categoria: Adulto" << endl;
    }
    else
        if (Idade > 30)
    {
        cout << "Categoria: Sênior" << endl;
    }
    return 0;
}
