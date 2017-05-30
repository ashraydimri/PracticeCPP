#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    map <int,int> ap;
    for(int i=0;i<n;i++)
    ap[arr[i]]++;

    for(auto i=ap.begin();i!=ap.end();i++)
    {
        if(i->second>n/2)
        {
            cout<<"Yes"<<(i->first);
            return 0;
        }
    }

    cout<<"No";

    return 0;
}
