#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"portuguese");
    int Idade,Cont2, Cont3, Cont4;
    float P1, P2, Cont, Cont5;
    Idade = Cont = Cont2 = Cont3 = Cont4 = Cont5 = P1 = P2 = 0;
    for(int n = 1; n<=8; n++)
    {
        cout << n << "ª pessoa" << endl;
        cout << "Digite sua idade : ";
        cin >> Idade;
        cout << endl;
    if (Idade <= 15)
    {
       Cont++;
    }
    if ((Idade >= 16)&&(Idade <= 30))
    {
       Cont2++;
    }
    if ((Idade >= 31)&&(Idade <= 45))
    {
       Cont3++;
    }
    if ((Idade >= 46)&&(Idade <= 60))
    {
       Cont4++;
    }
    if (Idade > 60)
    {
       Cont5++;
    }
    }
    P1 = (Cont*100)/8;
    P2 = (Cont5*100)/8;
    cout << " Faixa etária               Idade" << endl;
    cout << "      1ª                Até 15 anos : " << Cont << " Pessoas    " << P1 << "%" << endl;
    cout << "      2ª            De 16 a 30 anos : " << Cont2 << " Pessoas    " << endl;
    cout << "      3ª            De 31 a 45 anos : " << Cont3 << " Pessoas    " << endl;
    cout << "      4ª            De 46 a 60 anos : " << Cont4 << " Pessoas    " << endl;
    cout << "      5ª           Acima de 60 anos : " << Cont5 << " Pessoas    " << P2 << "%" << endl;
return 0;
}
