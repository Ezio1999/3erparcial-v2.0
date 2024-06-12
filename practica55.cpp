#include <iostream>
#include <math.h>
using namespace std;
// Inciso a La raiz cuadrada 
float raizz(int numero) // Alexander Atonal Lara
{
    float raiz = sqrt(numero);
    return raiz;
}

// Inciso b Función del factorial
float factorial(int numero) //José Ignacio Nava Castillo
{
    float f = 1;
    for (float i = 1; i <= numero; i++)
    {
        f = f * i;
    }

    return f;
}

// Inciso c Función para verificar si un número es primo Hellen Lembrino Alvarez
bool esPrimo(int num)
{
    if (num <= 1)
    {
        return false;
    }

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}

// Inciso d Función de potencias  Zoé Maite Romano Ponce 
int potencia(int numero, int decimales)
{
    float res = 0;
    res = pow(numero, decimales);
    return res;
}

// Inciso e Función de Indicar si el numero es menor que 100 y mayor a 50  Aylin Viridiana Rezendiz Lopez
float mayormenor(int numero)
{
    if (numero <= 100 && numero >= 50)
    {
        cout << "El numero " << numero << " es menor que 100 y mayor que 50" << endl;
    }
    else if (numero <= 100 && numero <= 50)
    {
        cout << "El numero " << numero << " es menor que 100 y menor que 50" << endl;
    }
    return 0;
}

// Función principal
int main()
{
    int numero, decimales;
    cout << "Ingrese un numero: " << endl;
    cin >> numero;
    cout << " Ingrese sus decimales" << endl;
    cin >> decimales;
    cout << "Su raiz es: " << raizz(numero) << endl;
    cout << "El factorial del numero es: " << factorial(numero) << endl;
    cout << "La potencia es: " << potencia(numero, decimales) << endl;

    if (esPrimo(numero))
    {
        cout << numero << " es un numero primo." << endl;
    }
    else
    {
        cout << numero << " no es un numero primo." << endl;
    }

    cout << mayormenor(numero);
    return 0;
}
