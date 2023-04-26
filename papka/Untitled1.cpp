#include<iostream>
#include <iomanip>
#include "headerxa.h"
using namespace std;
int main()
{
    int n;
    int a[20];
    cout <<"enter  n  ";
    cin>>n;
    input(a,n);
    bubbleSort(a,n);
    printArray(a,n);

}
