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
    int count = i + 1;
    for (int j = 1; j < i; j++)
    {
      cout << count;
      count++;
    }
    cout << endl;
  }
}