/*Usuario = root; contraseña  = 1234*/
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char nombre[50];
    char contra[50];
    char conv[20] = "2b27";
    int intentos = 3;
    cout << "Ingrese su nombre: " << endl;
    cin >> nombre;
    while (intentos>0)
    {
    cout << "Ingrese su contraseña: " << endl;
    cin >> contra;
    if(strcmp(contra,conv)==0){
        cout << "Bienvenido al sistema << " << nombre << endl;
    break;
    }
    else {
                intentos--;
                cout << "Le quedan " << intentos << " intentos" << endl;

                if (intentos == 0) {
                    cout << "Acceso denegado " << endl;
                }
            }
        } 

    return 0;
    }