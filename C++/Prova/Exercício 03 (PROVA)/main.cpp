#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"portuguese");

    float N = 0, D = 0;

    cout << "Digite o valor de N: ";
    cin >> N;

    D = 2 * N;

    do
    {

    cout << N << endl;
    N = N + 1;

    }while (N < D);

    return 0;
}
