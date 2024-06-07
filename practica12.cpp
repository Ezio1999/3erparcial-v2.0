/*Regresa el residuo de la division entre 2 numeros, si el residuo es es 0 emite el mensaje */
#include <iostream>
using namespace std;
int main(){
    int num1, num2, res;
    cout << "Da el primer numero: ";
    cin >> num1;
    cout << "Da el segundo numero: ";
    cin >> num2;
    res = num1 % num2;
    if ( res == 0){
        cout << "No posible la division" << endl;
    }
    else{
        cout << "Es posible la division" << endl;
        cout << "El total de la division es de: " << res << endl;
    }

    return 0;
}