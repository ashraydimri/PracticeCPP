#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int fn1=0;
    int fn2=0;
    int maxc=0;
    int maxf=0;
    for(int i=0;i<n;i++)
    {
        maxc=max(arr[i]+fn2,fn1);
        maxf=max(maxc,maxf);
        fn2=fn1;
        fn1=maxf;

       // cout<<maxc<<" "<<maxf<<" "<<fn1<<" "<<fn2<<" \n";
    }
    cout<<maxf<<"\n";
    }
    return 0;
}
