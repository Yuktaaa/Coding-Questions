#include <iostream>
using namespace std;
int main()
{
    int n, i, j, sum = 0;
    cout << "Enter the numbers: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 1; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (i = n - 1; i >= 1; i--)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= i * 2 - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}