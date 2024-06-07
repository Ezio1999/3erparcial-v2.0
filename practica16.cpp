/*Lee 5 números y regresa cual es el menor*/
#include <iostream>
using namespace std;
int main(){
    int x, menor;
    cout << "Ingrese 5 numeros: " << endl;
    cin >> x;
    for ( int i = 1; i < 5; i++){
        cin >> x;
        if ( x < menor )
        {
            menor = x;
        }
        
    }
    cout << "El numero menor es: " << menor << endl;

    return 0;
}