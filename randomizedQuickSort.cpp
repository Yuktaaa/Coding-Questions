#include <bits/stdc++.h>
using namespace std;
//Display function
void display(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << array[i];
        cout << " ";
    }
}
//partition function
int partition(int a[], int l, int r)
{
    int x = rand() % (r - l + 1) + l;
    swap(a[x], a[r]);
    int pivot = a[r];
    int i = (l - 1);
    for (int j = l; j <= r - 1; j++)
    {
        if (a[j] < pivot)
        {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[r]);
    return (i + 1);
}
//rabdomizedQuickSort function
void randomizedQuickSort(int a[], int l, int r)
{
    if (l < r)
    {
        int p = partition(a, l, r);
        randomizedQuickSort(a, l, p - 1);
        randomizedQuickSort(a, p + 1, r);
    }
}
//main function
int main()
{
    int n;
    cout << "Enter the size of an array=";
    cin >> n;
    int array[n];
    cout << "Enter the values of an array ";
    for (int i = 0; i < n; i++)
        cin >> array[i];
    randomizedQuickSort(array, 0, n);
    display(array, n);
    return 0;
}
