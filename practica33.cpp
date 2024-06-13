/*Un programa que pide el numero de posiciones y digite numeros de acuerdo al
numero de posiciones y lo muestre en pantalla*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cout << "Digite el número de posiciones: ";
    cin >> n;

    string personas[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Digite un nombre para la posición " << i << ": ";
        cin >> personas[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << "El dato de la posición " << i << " es " << personas[i] << endl;
    }

    return 0;
}
