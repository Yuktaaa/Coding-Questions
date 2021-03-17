#include <iostream>
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
//Bubble sort
void bubble(int a[], int n)
{
    int i, j;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
        }
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
    bubble(array, n);
    display(array, n);
}