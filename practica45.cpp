#include <iostream>
#include <string>
using namespace std;
int main()
{
    string matriz1[2][1] = {{"Fernando"}, {"Oscar"}};
    int matriz2[3][1] = {{-74}, {-56}, {-10}};
    cout << "Matriz 1" << endl;
    for (int i = 0; i < 2; i++)
    {
        cout << "El dato en la posicion " << i << " es: " << matriz1[i][0] << endl;
    }

    cout << "Matriz 2" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "El dato en la posicion " << i << " es: " << matriz2[i][0] << endl;
    }

    return 0;
}