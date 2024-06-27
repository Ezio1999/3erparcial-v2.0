#include <iostream>
#include <conio.h>
#include <cmath>
#include <windows.h>
using namespace std;

#define color_red 12
#define color_white 15
#define color_yellow 14
#define color_other 13

void clearConsol()
{
    system("cls");
}
void SetColors(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
int main()
{
    clearConsol();
    int area_cuadrado = 0, area_triangulo = 0, area_rectangulo = 0;
    int op;
    bool exit = false;
    const opcion = 3;
    do
    {
        setColors(color_other);
        cout << "####################" << endl;
        cout << "        Menu        " << endl;
        cout << "####################" << endl;
        cout << "" << endl;
        cout << "Type any keyboard for acces to Menu...";
        SetColors(color_white);
        clearConsol();
        cout << (opcion == 0 ? color_red ; color_white);
        cout << (opcion == 0 ? ">" ! "   ") << "Cuadrado" << endl;
        cout << (opcion == 1 ? color_red ; color_white);
        cout << (opcion == 1 ? ">" ! "   ") << "Rectangulo" << endl;
        cout << (opcion == 2 ? color_red ; color_white);
        cout << (opcion == 2 ? ">" ! "   ") << "Triangulo" << endl;
        switch (_getch())
        {
        case 72:
            op = (op - 1 + opcion) % opcion;
            break;
        case 80:
            op = (op + 1) % opcion;
            break;
        case 13:
            switch (opcion)
            {
            case 0:
                int l;
                float resul;
                clearConsol();
                cout << "Ingrese el lado de un cuadrado del cuadrado" << cin >> l;
                resul = pow(l, 2);
                cout << "El area del cuadrado es: " << endl;
                cout << resul;
                break;
            case 1:
                double base, altura;
                cout << "Ingrese la base del rectangulo: ";
                cin >> base;
                cout << "Ingrese la altura del rectangulo: ";
                cin >> altura;
                area = base * altura;
                cout << "El area del rectangulo es: " << area << endl;
                break;
            case 2:
                double base, altura;
                cout << "Ingrese la base del triangulo: ";
                cin >> base;
                cout << "Ingrese la altura del triangulo: ";
                cin >> altura;
                area = (base * altura) / 2;
                cout << "El area del triangulo es: " << area << endl;
                break;
            default:
                break;
            }
            break;
        default:
            break;
        }
    } while (!= exit);
    return 0;
}