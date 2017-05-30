#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    int maxd=0,mins=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<mins)
            mins=arr[i];
        int td=arr[i]-mins;
        maxd=max(td,maxd);
    }
    cout<<maxd;
    return 0;
}
