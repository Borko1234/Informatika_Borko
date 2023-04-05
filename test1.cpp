#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a,n;
    cin>>a>>n;
   int Nod=1;
    if (a/n<n/a)
    {
        Nod=a;
    }
    else
    {
        Nod=n;
    }
    cout<<Nod;
}
