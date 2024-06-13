#include <iostream>
#include <cstdlib> 
#include <ctime>   
using namespace std;

int main()
{
    int num[10];
    srand(time(nullptr)); 

    for (int i = 0; i < 10; i++)
    {
        num[i] = rand() % 100; 
    }

    for (int i = 0; i < 10; i++) 
    {
        cout << "El número aleatorio en la posición " << i << " es: " << num[i] << endl;
    }

    return 0;
}