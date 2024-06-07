/*Realiza la suma de x numeros, mientras numero introducido sea diferente de 0*/
#include <iostream>
using namespace std;
int main()
{
    int x = 1, cont = 0, acum = 0;
    do
    {
        cout << "Ingrese un numero: " << endl;
        cin >> x;
        if (x != 0)
        {
            cont++;
            acum += x;
            cout << "Has introducido el numero: " << x << endl;
        }

    } while (x != 0);
    cout << "Cantidad de numeros ingresados: " << cont << endl;
    cout << "La suma de tus numeros es: " << acum << endl;
    cout << "Ejecucion finalizada " << endl;
    return 0;
}
