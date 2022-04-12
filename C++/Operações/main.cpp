#include <iostream>

using namespace std;

int main()
{
    float n1 = 0, n2 = 0, M = 0, D = 0, P = 0, Div = 0, O = 0;
    cout << "      Options                       Operations " << endl;
    cout << "         1                Media between the typed numbers " << endl;
    cout << "         2                Difference of the greater for the minor  " << endl;
    cout << "         3                Product between the typed numbers " << endl;
    cout << "         4                Division of the first for the second" << endl;
    cout << endl;
    cout << "Select your Option : " ;
    cin >> O;
    if ((O<1)||(O>4))
    {
        cout << endl;
        cout << "Invalid Option!" << endl;
        return 0;
        }
    cout << "Type the first number : ";
    cin >> n1;
    cout << "Type the second number : ";
    cin >> n2;
    cout << endl;

    if (O == 1)
    {
        M = (n1+n2)/2;
        cout << "Media = " << M << endl;
    }
    if (O == 2)
    {
        if (n1>n2)
            D = n1-n2;
            else
            D = n2-n1;
            cout << "Difference of the greater for the minor = " << D << endl;
    }
    if (O == 3)
    {
        P = n1*n2;
        cout << "Product between the typed numbers = " << P << endl;
    }
    if (O == 4)
    {
        if (n2 ==0)
        {
            cout << "The second number must be different of 0!" << endl;
        }
        else
           {
          Div = n1/n2;
         cout << "Division of the first for the second = " << Div << endl;
           }
    }

    return 0;
}
