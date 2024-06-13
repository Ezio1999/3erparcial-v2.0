/*Un programa que muestre por pantallla el dato de la posicion
1 = fernando
2 = oscar
En el arreglo 2 los datos de la posicion
0 = 74
1= 56
2 = 10*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string arreglo1[2] = {"Fernando", "Oscar"};
    int arreglo2[3] = {-74, -56, -10};
    cout << "Arreglo 1" << endl;
    for (int i = 0; i <= 2; i++)
    {
        cout << "El dato en la posicion " << i << " es: " << arreglo1[i] << endl;
    }

    cout << "Arreglo 2" << endl;
    for (int i = 0; i <= 3; i++)
    {
        cout << "El dato en la posicion " << i << " es: " << arreglo2[i] << endl;
    }

    return 0;
}