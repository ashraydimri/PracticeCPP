#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int m,n;
        int x,y;
        cin>>n>>m;
        for(int i=0;i<m;i++)
            cin>>x>>y;

        int res=n-(2*m);
        if(res%2==0)
            cout<<"yes"<<"\n";
        else
            cout<<"no"<<"\n";




    }
    return 0;
}
