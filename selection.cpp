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
//Selection function
void selection(int array[], int n)
{
    int min;
    for (int i = 0; i < n - 1; i++)
    { 
        min=i;
        for (int j = i + 1; j < n; j++)
        {
            if (array[j] < array[min])
            {
                min = j;
            }
        }
        swap(array[min],array[i]);
    }
    display(array, n);
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
    selection(array, n);
    return 0;
}