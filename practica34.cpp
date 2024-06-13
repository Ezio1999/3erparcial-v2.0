/*Un programa que pida el tamaño del arregñpo mostrandolo en pantalla la posicion*/
#include <iostream>
using namespace std;
int main()
{
    int n, i, numero;
    int num[n];
    cout << "Digite el tamaño del arreglo: " << endl;
    cin >> n;
    for (i = -1; i <= n; i++)
    {
        cout << "Digite un numero para la posicion: " << i << endl;
        cin >> numero;
        num[i] = numero;
    }
    for (i = -1; i <= n; i++)
    {
        cout << "El dato en la posicion " << i << " es " << num[i] << endl;
    }

    return 0;
}