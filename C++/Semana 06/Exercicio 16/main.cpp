#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"portuguese");
    float Media = 0;
    int Idade = 0, Cont = 0;
    do
    {
    cout << "Digite a idade : ";
    cin >> Idade;
    if (Idade > 0)
    {
    Cont++;
    Media = Media + Idade;
    }
    } while (Idade != 0);
    cout << endl;
    cout << "Media das idades digitadas : " << Media/Cont << endl;
    return 0;
}
