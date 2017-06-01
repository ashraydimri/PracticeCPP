#include<bits/stdc++.h>
using namespace std;
int main()
{
stack <int> ss;
    int n,s;
    cin>>s;
    int sp[s];
    int arr[s];
    for(int i=0;i<s;i++)
    {
         cin>>arr[i];
         //ss.push(n);
    }
    sp[s-1]=-1;
    ss.push(s-1);
    for(int i=s-2;i>=0;i--)
    {
        while(!ss.empty() && (arr[ss.top()]<arr[i]))
            ss.pop();

        if(!ss.empty())
        {
            sp[i]=arr[ss.top()];
        }
        else
        {
            sp[i]=-1;
        }
        ss.push(i);
    }

    for(int i=0;i<s;i++)
        cout<<sp[i]<<" ";

    return 0;
}
