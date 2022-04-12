#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL,"portuguese");
    int P = 0;
    float Pro1=0,Pro2=0,Pro3=0,Pro4=0,Pro5=0,Pro6=0,Pro7=0,Pro8=0,Pro9=0,Pro10=0,Pro11=0,Pro12=0,Pro13=0,Pro14=0,Pro15=0,Pro16=0,Total=0,RN=0,RD=0,Carvao=0,Sal=0,Papel=0;
    string Nome;
    do
    {
    cout << "Digite o número de participantes : ";
    cin >> P;
    if (P <= 0)
    {
        cout << "Digite um valor positivo!" << endl;
        cout << endl;
    }
    }while (P <= 0);
    for (int i = 1;i <=P ;i++)
    {
        cout << "Digite o nome do "<< i << "º participante: ";
        cin >> Nome;
    }
    cout << endl;
    cout << "     Produto              Preço" << endl;
    cout << "     Cerveja :              ";
    cin >> Pro1;
    Pro1 = Pro1*3;
    cout << "Refrigerante normal :       ";
    cin >> Pro2;
    Pro2 = Pro2*0.8;
    cout << "Refrigerante diet :         ";
    cin >> Pro3;
    Pro3 = Pro3*0.2;
    cout << "Carne :                     ";
    cin >> Pro4;
    Pro4 = Pro4*0.250;
    cout << "Linguiça toscana :          ";
    cin >> Pro5;
    Pro5 = Pro5*0.050;
    cout << "Linguiça de frango :        ";
    cin >> Pro6;
    Pro6 = Pro6*0.050;
    cout << "Tomate (vinagrete) :        ";
    cin >> Pro7;
    Pro7 = Pro7*0.050;
    cout << "Cebola (vinagrete) :        ";
    cin >> Pro8;
    Pro8 = Pro8*0.020;
    cout << "Vinagre :                   ";
    cin >> Pro9;
    Pro9 = Pro9*1;
    cout << "Limão :                     ";
    cin >> Pro10;
    Pro10 = Pro10*0.050;
    cout << "Pão :                       ";
    cin >> Pro11;
    Pro11 = Pro11*3;
    cout << "Carvão :                    ";
    cin >> Pro12;
    Pro12 = Pro12*0.05;
    cout << "Sal grosso :                ";
    cin >> Pro13;
    Pro13 = Pro13*0.02;
    cout << "Detergente :                ";
    cin >> Pro14;
    Pro14 = Pro14*1;
    cout << "Esponja de pia :            ";
    cin >> Pro15;
    Pro15 = Pro15*1;
    cout << "Papel higiênico :           ";
    cin >> Pro16;
    Pro16 = Pro16*0.025;

    RN = 0.8*P/2;
     RN = ceil(RN);
    RD = 0.2*P/2;
     RD = ceil(RD);
    Carvao = 0.05*P;
     Carvao = ceil(Carvao);
    Sal = 0.02*P;
     Sal = ceil(Sal);
    Papel = 0.025*P;
     Papel = ceil(Papel);
    cout << endl;
    cout << " Número de participante : " << P << endl;
    cout << endl;
    cout << "            Quantidade de cada item  " << endl;
    cout << " Cerveja               =     " << 3*P << " latas" << endl;
    cout << " Refrigerante normal   =     " << RN << " refrigerante(s) de 2 litros" << endl;
    cout << " Refrigerante diet     =     " << RD << " refrigerante(s) de 2 litros" <<  endl;
    cout << " Carne                 =     " << 0.250*P << " Kg" << endl;
    cout << " Linguiça toscana      =     " << 0.050*P << " Kg" << endl;
    cout << " Linguiça de frango    =     " << 0.050*P << " Kg" << endl;
    cout << " Tomate (vinagrete)    =     " << 0.050*P << " Kg" << endl;
    cout << " Cebola (vinagrete)    =     " << 0.020*P << " Kg" << endl;
    cout << " Vinagre               =     " << "1" << " Unid." << endl;
    cout << " Limão                 =     " << 0.050*P << " Kg" << endl;
    cout << " Pão                   =     " << 3*P << " Unid." << endl;
    cout << " Carvão                =     " << Carvao << " Saco(s)" << endl;
    cout << " Sal grosso            =     " << Sal << " Saco(s)" << endl;
    cout << " Detergente            =     " << "1" << " Unid." << endl;
    cout << " Esponja de pia        =     " << "1" << " Unid." << endl;
    cout << " Papel higiênico       =     " << Papel << " Pacote(s)" << endl;
    cout << endl;
    Total = (Pro1+Pro2+Pro3+Pro4+Pro5+Pro6+Pro7+Pro8+Pro9+Pro10+Pro11+Pro12+Pro13+Pro14+Pro15+Pro16)*P;
    Total = Total+(Total*5)/100;
    cout << " VALOR TOTAL : " << Total << " R$" << endl;
    cout << endl;
    cout << " VALOR POR PESSOA : " << Total/P << " R$" << endl;
    return 0;
}
