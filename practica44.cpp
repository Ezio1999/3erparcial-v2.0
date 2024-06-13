#include <iostream>
using namespace std;
int main()
{
    int matriz[3, 3];
    int i, j, azar[10];
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            matriz[i, j] = azar[10];
        }
    }
    for (i = 1; i <= 3; i++)
    {
        cout << matriz[i, 1] << " " << matriz[1,2] << " " << matriz [1,3] << endl;
    }

    return 0;
}