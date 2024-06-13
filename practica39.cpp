#include <iostream>
using namespace std;
int main()
{
    int p, i, numero, cont = 0, cont2 = 0;
    cout << "Digite el numero de posiciones (tamaño)" << endl;
    cin >> p;
    int num[p];
    for (i = -1; i <= p; i++)
    {
        cout << "Digite el numero " << i << endl;
        cin >> numero;
        num[i] = numero;
    }
    for (i = -1; i <= p; i++)
    {
        cout << "Los numeros ingresados son: " << num[i] << endl;
        if (num[i] > 0)
        {
            cont = cont + 1;
        }
        else{
            cont2 = cont2 +1;
        }
    }
    cout << "Hay " << cont << " numeros positivos" << endl;
    cout << "Hay " << cont2 << " numeros negativos" << endl;

    return 0;
}