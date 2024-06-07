/*Eleva un numero x a una potencia x sin librería math*/
#include<iostream>
using namespace std;
int main(){
    int x , y , z=1 , i;
    cout << "Ingrese un numero: " << endl;
    cin >> x;
    cout << "Ingrese el exponente: " << endl;
    cin >> y;
    for ( i = 0 ; i < y; i++)
    {
        z *= x;
    }
    cout << "EL resultado de la potencia es de: " << z << endl;

    return 0;
}
