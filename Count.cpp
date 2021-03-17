#include <bits/stdc++.h>
using namespace std;
void findMajority(int arr[], int n)
{
    int maxCount = 0;
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
        if (count > maxCount)
        {
            maxCount = count;
            index = i;
        }
    }
    if (maxCount > n / 2)
        cout << arr[index] << endl;
    else
        cout << "No " << endl;
}
//main function
int main()
{
    int n;
    cout << "Enter the size: ";
    cin >> n;
    cout << "Enter the elements of array ";
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    findMajority(a, n);
    return 0;
}