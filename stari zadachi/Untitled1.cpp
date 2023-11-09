#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int b[20],a[20][20];

    for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
    for(int i=0;i<n;i++)
    {
    for (int j=0;j<n;j++)
    {
    cin>>a[i][j];
    }
    }
    int sum=0;
    for (int i=0;i<n;i++)
    {

        cout<<a[i][i]<<" ";

    }




}
