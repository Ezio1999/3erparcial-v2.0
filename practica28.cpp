/*Agregar aticulo */
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char nombre[50];
    char contra[50];
    char conv[20] = "2b27";
    int art, x, acum = 1;
    int intentos = 3;
    int i;
    cout << "Ingrese su nombre: " << endl;
    cin >> nombre;
    while (intentos > 0)
    {
        cout << "Ingrese su contraseña: " << endl;
        cin >> contra;
        if (strcmp(contra, conv) == 0)
        {
            cout << "Bienvenido al sistema "<< nombre << endl;
            cout << "¿Cuantos articulos lleva?" << endl;
            cin >> art;
            for (i = 1; i <= art; i++)
            {
                cout << "¿Cual es el precio del articulo?" << endl;
                cin >> x;
                if (x > 0)
                {
                    acum += x;
                }
                    else{
                        cout << "Ingrese de nuevo el precio" << endl;
                }
            }
        break;
        }
        else{
            intentos--;
            cout << "Le quedan" << intentos << " intentos" << endl;
            if ( intentos == 0){
                cout << "Acceso denegado" << endl;
            }
    }
    }
        if(acum >= 1){
            cout << "Su facttura es de: $" << x << endl;
        }
    return 0;
    }