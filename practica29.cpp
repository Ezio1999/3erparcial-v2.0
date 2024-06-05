// v2: pida nombre, contraseña y de 3 oportunidades
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
    cout << "Ingrese su nombre: " << endl;
    cin >> nombre;
    while (intentos>0)
    {
        
    cout << "Ingrese su contraseña: " << endl;
    cin >> contra;
    //sistema de acceso 
    if (strcmp (contra,conv) == 0)
    {
        cout << "Bienvenido al sistema "<< nombre << " :)" << endl;
        cout << "¿Cuantos articulos llevas?" << endl;
        cin >> art;
        //sistema de articulos 
        if (art > 1)
        {
            //sistema de precio de articulos 
            int i = 1;
            while (i <= art)
            {
                cout << "¿Cual es el precio del articulo "<< i << "?" << endl ;
                cin >> x;
                if(x>0){
                acum += x;
                i++;
                }
                else{cout << "Ingrese de nuevo el precio " << endl;}
            }
            break;
        }else {
                intentos--;
                cout << "Cantidad de artículos inválida. Le quedan " << intentos << " intentos" << endl;

                if (intentos == 0) {
                    cout << "Acceso denegado " << endl;
                }
            }
        } else {
            intentos--;
            cout << "Contraseña incorrecta. Le quedan "<< intentos << "intentos" << endl;

            if (intentos == 0) {
                cout << "Acceso denegado " << endl;
            }
        }
    }

    if (acum > 1) { 
        cout << "Su factura es de: $" << acum << endl;
    }
    return 0;
}
