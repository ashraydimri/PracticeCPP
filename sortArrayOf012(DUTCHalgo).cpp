#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    int l=0;
    int r=n-1;
    int m=0;
    int temp;
    while(m<=r)
    {
        if(arr[m]==0)
        {
            temp=arr[m];
            arr[m]=arr[l];
            arr[l]=temp;
            m++;
            l++;
        }
        else if(arr[m]==2)
        {
            temp=arr[m];
            arr[m]=arr[r];
            arr[r]=temp;
            r--;
        }
        else{    m++;}
    }

        for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
