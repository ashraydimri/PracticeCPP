#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    int maxc,maxf;
    maxc=maxf=0;
    int start=0;
    int temps=0;
    int ends=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>(maxc+arr[i]))
            temps=i;
        maxc=max(arr[i],maxc+arr[i]);
        if(maxc>maxf)
        {
            start=temps;
            ends=i;
        }
        maxf=max(maxf,maxc);

    }
    cout<<maxf<<" "<<start<<" "<<ends<<" ";
    return 0;
}
