#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, i, pos;
    char nombre[100];
    cout << "Digite el numero de paises " << endl;
    cin >> n;
    string paises[n];
    for (i = 0; i < n; i++)
    {
        cout << "Digite el pais " << i+1 << ":" << endl;
        cin >> paises[i];
    }
    cout << "Digite la posicion: " << endl;
    cin >> pos;
    if(pos >= 1 && pos < n){
    cout << "El pais que hay en la posicion " << pos << " es " << paises[pos - 1] << endl;
    }
    else{
        cout << "Posicion invalida" << endl;
    }


    return 0;
}