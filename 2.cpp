#include<iostream>
using namespace std;
int main()
{
    int n;
    int i,j,count=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<j+1;
        }
        cout<<endl;
    }
    return 0;
}
