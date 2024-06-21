#include <iostream>
using namespace std;

struct empleado
{
    char nombre[30];
    char edad[10];
    char sexo;
    char puesto[50];
};

int main (){
    empleado miEmpleado;
    cout << "Ingrese su nombre: ";
    cin >> miEmpleado.nombre;
    cout << "Ingrese su edad: ";
    cin >> miEmpleado.edad;
    cout << "Ingrese su sexo (M/F): ";
    cin >> miEmpleado.sexo;
    cout << "Ingrese su puesto: ";
    cin >> miEmpleado.puesto;

    cout << "\nInformación del empleado:\n";
    cout << "Nombre: " << miEmpleado.nombre << endl;
    cout << "Edad: " << miEmpleado.edad << endl;
    cout << "Sexo: " << miEmpleado.sexo << endl;
    cout << "Puesto: " << miEmpleado.puesto << endl;

    return 0;
}