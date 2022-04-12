#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"portuguese");
    int Idade = 0, Cont = 0, ContP = 0;
    float Peso = 0, Altura = 0, Media = 0, Cont2 = 0;
    for (int i =1; i<=5; i++)
    {
    cout << i << "ª Pessoa " << endl;
    cout << "Digite a sua idade : ";
    cin >> Idade;
    cout << "Digite a sua altura : ";
    cin >> Altura;
    cout << "Digite o seu peso :";
    cin >> Peso;
    cout << endl;
    if (Idade > 50)
    {
        Cont++;
    }
        if ((Idade >= 10)&&(Idade <= 20))
    {
        Cont2++;
        Media = Media + Altura;
    }
        if (Peso < 40)
    {
        ContP++;
    }
    }
    cout << "Quantidade de pessoas com idades superior a 50 anos : " << Cont << " pessoa(s)." << endl;
    cout << "Média das alturas das pessoas com idade entre 10 e 20 anos : " << Media/Cont2 << endl;
    cout << "Porcentagem de pessoas com peso inferior a 40 Kg : " << (ContP*100)/2 << "%" << endl;
    return 0;
}
