#include <iostream>
using namespace std;
i1nt main()
{
    int f, c, i, j, numero;
    cout << "Digite el numero de files: " << endl;
    cin >> f;
    cout << "Digite el numero de columnas: " << endl;
    cin >> c;
    int matriz[f][c];
    for (i = 1; i <= f; i++)
    {
        for (j = 1; j <= c; j++)
        {
            cout << "Digite dato para la fila " << i << " columna " << j << " :";
            cin >> numero;
            matriz[i][j] = numero;
        }
    }
    for (i = 1; i <= f; i++)
    {
        for (j = 1; j <= c; j++)
        {
            cout << "Los datos que hay en la matriz son: " << matriz[i][j] << endl;
        }
    }

    return 0;
}