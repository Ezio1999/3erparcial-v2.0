#include <iostream>
#include <string>
using namespace std;
int main()
{
    int acum = 0;
    int columna = 0;
    int f, c, i, j, numero;
    cout << "Digite el numero de filas: " << endl;
    cin >> f;
    cout << "Digite el numero de columnas" << endl;
    cin >> c;
    int matriz[f][c];
    for (i = 0; i < f; i++)
    {
        for (j = 0; j < f; j++)
        {
            cout << "Digite dato para la fila " << i+1 << " columna " << j+1 << endl;
            cin >> matriz[i][j];
            acum +=matriz[i][columna];
        }
    }
    for (i = 0; i < f; i++)
    {
        for (j = 1; j < c; j++)
        {
            cout << matriz[i][j] << endl;
        }
    }
    cout << "Todos los elementos de la " << c + 1 << " suman un total de: " << acum;

    return 0;
}