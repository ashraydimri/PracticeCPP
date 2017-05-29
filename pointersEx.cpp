#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
#include<typeinfo>
int main()
{
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++)
    {

        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {

        cout<<arr[i];
    }

    //const int x=6;
    /*int* a,b;
    cout<<typeid(a).name()<<"\n";
    cout<<typeid(b).name();
    a=&b;
    *a=5;
    int *c;
    cout<<b;
    //int *arr={1,2,3};
    */
    return 0;
}

