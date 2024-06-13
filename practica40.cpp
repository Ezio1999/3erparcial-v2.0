#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, i, pos;
    char nombre[20];
    cout << "Digite el numero de paises " << endl;
    cin >> n;
    string paises[n];
    for (i = 1; i <= n; i++)
    {
        cout << "Digite el pais " << i << ":" << endl;
        cin >> nombre;
        paises[i] = nombre;
    }
    cout << "Digite la posicion: " << endl;
    cin >> pos;
    if(pos >= 0 && pos < n){
    cout << "El pais que hay en la posicion " << pos << "es " << paises[pos] << endl;
    }
    else{
        cout << "Posicion invalida" << endl;
    }


    return 0;
}