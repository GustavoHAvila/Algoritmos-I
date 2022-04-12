#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL,"portuguese");
    int Idade = 0, Cont = 0;
    float Media = 0, Altura = 0, Soma = 0;
    do
    {
    cout << "Digite a sua idade : ";
    cin >> Idade;
    cout << "Digite a sua altura : ";
    cin >> Altura;
    cout << endl;
    if (Idade > 50)
    {
        Soma = Soma + Altura;
        Cont++;
    }
    } while (Idade > 0);
    cout << endl;
    Media = Soma/Cont;
    cout << "Media da altura das pessoas com mais de 50 anos : " << Media << endl;
    return 0;
}
