/*En un formato 1-24 emitirá un mensaje de buenos días, buenas tardes, buenas noches*/

#include <iostream>
using namespace std;
int main(){
    int hora;
    cout << "Hora ingresar en formato de 24 hrs" << endl; 
    cout << "Ingrese la hora: " << endl;
    cin >> hora;
    if ( hora >= 6 && hora <= 11){
        cout << "Buenos días :)" << endl; 
    }
    else if ( hora >= 12 && hora <= 19){
        cout << "Buenas tardes :)" << endl;
    }
    else if ( hora >= 20 && hora <= 24 ){
        cout << "Buenas noches :)" << endl;
    }
    return 0;
}