/*Imprime 100 al 1 con while*/
#include<iostream>
using namespace std;
int main(){
    int x=100;
    while ( x >= 0 || x <= 100)
    {
        if ( x != 0){
            cout << x << endl;
            x--;
        }
        else {
            break;
        }
    }
    
    return 0;
}
