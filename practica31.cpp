#include <iostream>
#include <string.h>
using namespace std;

int acum = 0;

// Funcion de contraseña
int contraSistem(char nombre[], char contra[], char conv[], int *intentos) {
    cout << "Ingrese su contraseña: " << endl;
    cin >> contra;
    if (strcmp(contra, conv) == 0) {
        cout << "Bienvenido al sistema "<< nombre << endl;
        return 1;
    } else {
        (*intentos)--;
        cout << "Contraseña incorrecta. Le quedan "<< intentos << "intentos" << endl;

        if (*intentos == 0) {
            cout << "Acceso denegado " << endl;
            return 0; 
        }

        return 2; 
    }
}

// Funcion para calcular precio
int calculadora(int art, int acum) {
    int x;
    for (int i = 1; i <= art; i++) {
        cout << "¿Cual es el precio del articulo "<< i << "?";
        cin >> x;

        if (x > 0) {
            acum += x; 
        } else {
            cout << "Ingrese de nuevo el precio " << endl;
            i--; 
        }
    }

    return acum; // Return the total price
}

//funcion principal
int main() {
    char nombre[50];
    char contra[50];
    char conv[20] = "2b27"; 
    int art;
    int intentos = 3;
    int result;

    cout << "Ingrese su nombre: " << endl;
    cin >> nombre;

    while (intentos > 0) {
        result = contraSistem(nombre, contra, conv, &intentos);

        if (result == 1) { 
            cout << "¿Cuantos articulos llevas?" << endl;
            cin >> art;

            if (art > 0) {
                acum = calculadora(art, acum); 
                break; 
            } else {
                cout << "Le quedan " << intentos << "intentos" << endl;

                if (intentos == 0) {
                    cout << "Acceso denegado " << endl;
                }
            }
        }
    }

    if (acum >= 1) { 
        printf("\nSu factura es de: $%d", acum);
    }

    return 0;
}