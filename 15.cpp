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
            cout << j;
        }
        for (int j = i-1; j >=1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
    for (i = n - 1; i >= 1; i--)
    {
        for (j = 1; j <=n-i; j++)
        {
            cout << " ";
        }
        for (j = 1; j <=i; j++)
        {
            cout << j;
        }
        for (j = i-1; j >=1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}