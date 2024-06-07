/*lee un numero y regresa si es par, impar y si el numero es divisible entre 3*/
#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Ingrese dos numeros: ";
    cin >> x;
    if (x % 2 == 0)
    {
        cout << "El primer numero es par" << endl;
        if (x % 3 == 0)
        {
            cout << "Es divisible entre 3" << endl;
        }
    }
    else
    {
        cout << "El primer numero es impar " << endl;
    }

    return 0;
}
