#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if(b==0)
        return a;
    else
        gcd(b,a%b);
}

void rot(int arr[],int n, int d)
{
    for(int i=0;i<gcd(n,d);i++)
    {
        int j,k;
        int temp;


            temp=arr[i];
            j=i;
        while(1)
        {

            k=j+d;
            if(k>=n)
                k=k-n;
            if(k==i)
                break;
            arr[j]=arr[k];
            j=k;
        }
        arr[j]=temp;
    }
    for(int i=0;i<n;i++)
        cout<<arr[i];
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
     int d;
     cin>>d;

    rot(arr,n,d);
    return 0;
}

