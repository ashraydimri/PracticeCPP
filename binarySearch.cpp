//Binary search using stl
#include<bits/stdc++.h>
using namespace std;
int bs(vector <int> &arr,int h, int l, int s)
{
    if(h<l)
        return 0;
    int mid= (h+l)/2;

    if(arr[mid]==s)
        return 1;
    else
    {
        if(arr[mid]>s)
        {
            h=mid-1;
            bs(arr,h,l,s);
        }
        else
        {
            l=mid+1;
            bs(arr,h,l,s);
        }
    }

}
int main()
{
    vector <int> arr;
    int n;
    cin>>n;
    arr.reserve(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int fin;
    cin>>fin;
    int ans=bs(arr,n-1,0,fin);
    cout<<ans;
    return 0;
}

