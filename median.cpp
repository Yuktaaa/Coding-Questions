#include <bits/stdc++.h>
using namespace std;
//median function
double median(int a[], int n)
{
    sort(a, a + n);
    if (n % 2 != 0)
    {
        return (double)a[n / 2];
    }
    return (double)(a[(n - 1) / 2] + a[n / 2]) / 2.0;
}
//main function
int main()
{
    int i;
    int n;
    cout << "Enter the size: ";
    cin >> n;
    int a[n];
    cout << "Enter the elements of an array: ";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout<<median(a, n);
}