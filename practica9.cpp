/*Imprime de 5 en 5 hasta un numero definido con for*/
#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Dame un numero: "; 
    cin >> num;
    for (int i = 1; i <= num; i++){
        cout << i*5 << endl;
    }

    return 0;
}