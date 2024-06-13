#include <iostream>
#include <string>
using namespace std;
int main()
{
    int acum = 0;
    int f, c, i, j, numero;
    cout << "Digite el numero de filas: " << endl;
    cin >> f;
    cout << "Digite el numero de columnas" << endl;
    cin >> c;
    string matriz[f][c];
    for (i = 0; i <= f; i++)
    {
        for (j = 1; j <= f; j++)
        {
            cout << "Digite dato para la fila " << i << "columna " << j << endl;
            cin >> numero;
            matriz[i][j] = numero;
        }
        acum = numero;
    }
    for (i = 1; i <= f; i++)
    {
        for (j = 1; j <= c; j++)
        {
            cout << matriz[i, j];
        }
    }
    cout << "Todos los elementos de la columna 1, suman un total de: " << acum;

    return 0;
}