#include<bits/stdc++.h>
using namespace std;
int maxs=INT_MIN;
int mins=INT_MAX;
void findminmax(int arr[],int l,int h)
{
    int mid=l+(h-l)/2;
    if(h<l)
        return;
    else
    {
        if(arr[mid]>maxs)maxs=arr[mid];
        if(arr[mid]<mins)mins=arr[mid];
        findminmax(arr,mid+1,h);
        findminmax(arr,l,mid-1);
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];

    findminmax(arr,0,n-1);
    cout<<mins<<maxs;
    return 0;
}
