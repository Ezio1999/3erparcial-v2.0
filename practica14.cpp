/*Lee dos numero y regresa cual es mayor, menor y si son iguales*/
#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "Ingrese dos numeros: " << endl;
    cin >> x; 
    cin >> y;
    if (x == y)
    {
        cout << "Los numeros son iguales" << endl;
    }
    else if (x > y)
    {
        cout << "El primer numero " << x << " es mayor que "<< y << endl;
    }
    else
    {
        cout << "El segundo numero " << y << " es mayor que "<< x << endl;
    }

    return 0;
}