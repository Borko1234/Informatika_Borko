#include<iostream>
#include <iomanip>
using namespace std;
void input(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
    cin>> arr [i];
    }
}
void output(int arr[],int n)
{
    for (int i=0;i<n;i++)
    {

    cout<<arr[i]<<setw(2);
    }
}
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    for (j = 0; j < n - i - 1; j++)
    if (arr[j] > arr[j + 1])
    swap(arr[j], arr[j + 1]);
}
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    cout << arr[i] << " ";
    cout << endl;
}
