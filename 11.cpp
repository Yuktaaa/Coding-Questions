#include <iostream>
using namespace std;
int main()
{
    int n = 5, i, j;
    for (i = n-1; i >= 1; i--)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= i * 2 - 1; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}