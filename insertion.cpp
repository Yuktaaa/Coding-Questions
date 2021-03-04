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
//Insertion Sort function
void insertion(int array[], int n)
{
    int k;
    for (int i = 1; i < n; ++i)
    {
        k = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > k)
        {
            if (array[j] > k)
            {
                array[j + 1] = array[j];
                j--;
            }
            else
            {
                break;
            }
        }
        array[j + 1] = k;
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
        insertion(array, n);
}