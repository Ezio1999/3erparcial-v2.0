//inciso b
#include<iostream>
using namespace std;
int main(){
    float x,f=1;
    cout << "ingrese un numero con 2 decimales: "<< endl;
    cin >> x;
    for ( float i = 1  ; i <= x; i++){
        f = f*i;
    }
    cout << "El factorial del numero es: " << f;

    return 0;
}