#include <iostream>
#include <locale>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(LC_ALL,"portuguese");
    float A, A2, A3, A4, A5, R, R2, R3, R4, R5, Ind, Nulo;
    A = A2 = A3 = A4 = A5 = R = R2 = R3 = R4 = R5 = Ind = Nulo = 0;
    int C, i, Ent, Cont, Cont2, Cont3, Cont4, Cont5, Cont6, Cont7, NV, NV1, NV2, NV3, NV4, NV5, NV6, NV7;
    C = i = Ent = Cont = Cont2 = Cont3 = Cont4 = Cont5 = Cont6 = Cont7 = NV = NV1 = NV2 = NV3 = NV4 = NV5 = NV6 = NV7 = 0;
    string Can1, Can2, Can3, Can4, Can5, P1, P2, P3, P4, P5;
    do
    {
    cout << "Digite o nome do candidato N�1 : " ;
    getline (cin, Can1);
    if ((Can1 == "")||(Can1 == " "))
    {
        cout << "N�o � permitido campo em branco!" << endl;
    }
    } while ((Can1 == "")||(Can1 == " "));
    do
    {
    cout << "Digite o Partido : ";
    getline (cin, P1);
    if ((P1 == "")||(P1 == " "))
    {
        cout << "N�o � permitido campo em branco!" << endl;
    }
    } while ((P1 == "")||(P1 == " "));
    cout << endl;
    do
    {
    cout << "Digite o nome do candidato N�2 : " ;
    getline (cin, Can2);
    if ((Can2 == "")||(Can2 == " "))
    {
        cout << "N�o � permitido campo em branco!" << endl;
    }
    } while ((Can2 == "")||(Can2 == " "));
    do
    {
    cout << "Digite o Partido : " ;
    getline (cin, P2);
    if ((P2 == "")||(P2 == " "))
    {
        cout << "N�o � permitido campo em branco!" << endl;
    }
    } while ((P2 == "")||(P2 == " "));
    cout << endl;
    do
    {
    cout << "Digite o nome do candidato N�3 : "  ;
    getline (cin, Can3);
    if ((Can3 == "")||(Can3 == " "))
    {
        cout << "N�o � permitido campo em branco!" << endl;
    }
    } while ((Can3 == "")||(Can3 == " "));
    do
    {
    cout << "Digite o Partido : "  ;
    getline (cin, P3);
    if ((P3 == "")||(P3 == " "))
    {
        cout << "N�o � permitido campo em branco!" << endl;
    }
    } while ((P3 == "")||(P3 == " "));
    cout << endl;
    do
    {
    cout << "Digite o nome do candidato N�4 : "  ;
    getline (cin, Can4);
    if ((Can4 == "")||(Can4 == " "))
    {
        cout << "N�o � permitido campo em branco!" << endl;
    }
    } while ((Can4 == "")||(Can4 == " "));
    do
    {
    cout << "Digite o Partido : "  ;
    getline (cin, P4);
    if ((P4 == "")||(P4 == " "))
    {
        cout << "N�o � permitido campo em branco!" << endl;
    }
    } while ((P4 == "")||(P4 == " "));
    cout << endl;
    do
    {
    cout << "Digite o nome do candidato N�5 : " ;
    getline (cin, Can5);
    if ((Can5 == "")||(Can5 == " "))
    {
        cout << "N�o � permitido campo em branco!" << endl;
    }
    } while ((Can5 == "")||(Can5 == " "));
    do
    {
    cout << "Digite o Partido : " ;
    getline (cin, P5);
    if ((P5 == "")||(P5 == " "))
    {
        cout << "N�o � permitido campo em branco!" << endl;
    }
    } while ((P5 == "")||(P5 == " "));
    cout << endl;
    cout << "Numero de entrevistados : " ;
    cin >> Ent;
    Cont=Cont2=Cont3=Cont4=Cont5=Cont6=Cont7=NV=NV1=NV2=NV3= NV4= NV5= NV6= NV7=0;
     while (i < Ent)
     {
    cout << endl;
    cout << "Numero              Candidato                Partido"      << endl;
    cout << " (1)                "<< left << setw(25) << Can1 << left << setw(25) << P1 << endl;
    cout << " (2)                "<< left << setw(25) << Can2 << left << setw(25) << P2 << endl;
    cout << " (3)                "<< left << setw(25) << Can3 << left << setw(25) << P3 << endl;
    cout << " (4)                "<< left << setw(25) << Can4 << left << setw(25) << P4 << endl;
    cout << " (5)                "<< left << setw(25) << Can5 << left << setw(25) << P5 << endl;
    cout << " (6)           (Indeciso/Sem opni�o)  " << endl;
    cout << " (7)                 (Nulo/Branco)    " << endl;
    cout << endl;
    do
    {
    cout << "Digite o n�mero do candidato escolhido : ";
    cin >> C;
      switch(C)
     {
      case 1:
        Cont = Cont + 1;
      break;
      case 2:
        Cont2 = Cont2 + 1;
     break;
      case 3:
        Cont3 = Cont3 + 1;
        break;
      case 4:
        Cont4 = Cont4 + 1;
        break;
      case 5:
        Cont5 = Cont5 + 1;
        break;
      case 6:
        Cont6 = Cont6 + 1;
       break;
      case 7:
        Cont7 = Cont7 + 1;
        break;
      default:
        cout << "Op��o inexistente! " << endl;
     }
    }while ((C!=1)&&(C!=2)&&(C!=3)&&(C!=4)&&(C!=5)&&(C!=6)&&(C!=7));
    cout << endl;
    do
    {
    cout << "Digite o n�mero do candidato que voce nao votaria (Se n�o houver um, ent�o digite 6) : " ;
    cin >> NV;
    switch(NV)
     {
      case 1:
        NV1 = NV1 + 1;
      break;
      case 2:
        NV2 = NV2 + 1;
     break;
      case 3:
        NV3 = NV3 + 1;
        break;
      case 4:
        NV4 = NV4 + 1;
        break;
      case 5:
        NV5 = NV5 + 1;
        break;
      case 6:
        NV6 = NV6 + 1;
       break;
      case 7:
        NV7 = NV7 + 1;
        break;
      default:
       cout << "Op��o inexistente! " << endl;
     }
    }while ((NV!=1)&&(NV!=2)&&(NV!=3)&&(NV!=4)&&(NV!=5)&&(NV!=6)&&(NV!=7));
    i = i+1;
    }
    cout << endl;
    cout << "RESULTADOS : " << endl;
    cout << endl;
    A = ((Cont*100)/Ent)-((NV1*100)/Ent);
     if (A<0)
     {
         A = 0;
     }
    A2 = ((Cont2*100)/Ent)-((NV2*100)/Ent);
     if (A2<0)
     {
         A2 = 0;
     }
    A3 = ((Cont3*100)/Ent)-((NV3*100)/Ent);
     if (A3<0)
     {
         A3 = 0;
     }
    A4 = ((Cont4*100)/Ent)-((NV4*100)/Ent);
     if (A4<0)
     {
         A4 = 0;
     }
    A5 = ((Cont5*100)/Ent)-((NV5*100)/Ent);
     if (A5<0)
     {
         A5 = 0;
     }
    R = ((NV1*100)/Ent)-((Cont*100)/Ent);
    if (R<0)
     {
         R = 0;
     }
    R2 = ((NV2*100)/Ent)-((Cont2*100)/Ent);
    if (R2<0)
     {
         R2 = 0;
     }
    R3 = ((NV3*100)/Ent)-((Cont3*100)/Ent);
    if (R3<0)
     {
         R3 = 0;
     }
    R4 = ((NV4*100)/Ent)-((Cont4*100)/Ent);
    if (R4<0)
     {
         R4 = 0;
     }
    R5 = ((NV5*100)/Ent)-((Cont5*100)/Ent);
    if (R5<0)
     {
         R5 = 0;
     }
    Ind = (Cont6*100)/Ent;
    if (Ind<0)
    {
        Ind = 0;
    }
    Nulo = (Cont7*100)/Ent;
    if (Nulo<0)
    {
        Nulo = 0;
    }
    cout << "Candidato 1   Votos : " << Cont  << "     Nao votariam : " << NV1 << "\tPorcentagem dos votos : " << (Cont*100)/Ent  << "%"  << "\tAceita��o : " << A <<  "%" << "  \tRejei��o : " << R <<   "%" << endl;
    cout << "Candidato 2   Votos : " << Cont2 << "     Nao votariam : " << NV2 << "\tPorcentagem dos votos : " << (Cont2*100)/Ent << "%"  << "\tAceita��o : " << A2 << "%" << "  \tRejei��o : " << R2 <<  "%" << endl;
    cout << "Candidato 3   Votos : " << Cont3 << "     Nao votariam : " << NV3 << "\tPorcentagem dos votos : " << (Cont3*100)/Ent << "%"  << "\tAceita��o : " << A3 << "%" << "  \tRejei��o : " << R3 <<  "%" << endl;
    cout << "Candidato 4   Votos : " << Cont4 << "     Nao votariam : " << NV4 << "\tPorcentagem dos votos : " << (Cont4*100)/Ent << "%"  << "\tAceita��o : " << A4 << "%" << "  \tRejei��o : " << R4 <<  "%" << endl;
    cout << "Candidato 5   Votos : " << Cont5 << "     Nao votariam : " << NV5 << "\tPorcentagem dos votos : " << (Cont5*100)/Ent << "%"  << "\tAceita��o : " << A5 << "%" << "  \tRejei��o : " << R5 <<  "%" << endl;
    cout << " Indeciso           : " << Cont6 << "     Sem opni�o   : " << NV6 << "\tPorcentagem de indecisos : " << Ind << "%" << endl;
    cout << "Nulo/Branco         : " << Cont7 << "                         Porcentagem de votos em branco : " << Nulo << "%" << endl;
    return 0;
}
