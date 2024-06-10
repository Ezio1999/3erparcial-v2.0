// EQUIPO 5
// Integrantes:
// Alexander: Funcion 2
// Hellen: Repeticiones
// Ignacio:Estructura y llamado de funciones
// Aylin: funcion principal
// ZoÃ©: funcion 1

#include <iostream>
using namespace std;
void cal(int not1, int not2, int not3)
{
    float mayor;
    not1 = not1 * 2;
    not2 = not2 * 2;
    not3 = not3 * 6;
    mayor = not1;
    if (not2 > mayor)
    {
        mayor = not2;
    }
    else if (mayor < not3)
    {
        mayor = not3;
    }
    cout << "La nota mayor es: " << mayor << "%" << endl;
}
void promedio(int not1, int not2, int not3)
{
    int sum;
    not1 = not1 * 2;
    not2 = not2 * 2;
    not3 = not3 * 6;
    sum = (not1 + not2 + not3);
    cout << " tu promedio es de: " << sum << "%" << endl;
}
// Funcion principal
int main()
{
    int not1, not2, not3;
    cout << "Ingrese la nota del estudiante correspondiente al primer examen: ";
    cin >> not1;
    cout << "Ingrese la nota del estudiante correspondiente al segundo examen: ";
    cin >> not2;
    cout << "Ingrese la nota del estudiante correspondiente al tercer examen: ";
    cin >> not3;
    promedio(not1, not2, not3);
    cal(not1, not2, not3);

    return 0;
}