#include <iostream>
#include<iomanip>
using namespace std;
int Fib(int a, int n)
{
    int Nod=1;
   if (a/n<n/a)
    {
        Nod=a;
    }
    else
    {
        Nod=n;
    }
    return Nod;
}
int main()
{
    int p,q;
    double A;
    cin>>p>>q;
    A=(p*q)/Fib(p,q);
    cout<<A;
}
