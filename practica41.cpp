#include <iostream>
using namespace std;
int main()
{
    int matriz[2][2];
    
    matriz[1][1] = 10;
    matriz[1][2] = 20;
    matriz[2][1] = 30;
    matriz[2][2] = 40;

    cout << "El dato que hay en la fila 1 y columna 1 es: " << matriz[1][1] << endl;
    cout << "El dato que hay en la fila 1 y columna 2 es: " << matriz[1][2] << endl;
    cout << "El dato que hay en la fila 2 y columna 1 es: " << matriz[2][1] << endl;
    cout << "El dato que hay en la fila 2 y columna 2 es: " << matriz[2][2] << endl;

        return 0;
}