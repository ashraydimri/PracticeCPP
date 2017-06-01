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
    sp[0]=1;
    ss.push(0);
    for(int i=1;i<s;i++)
    {
        while(!ss.empty() && (arr[ss.top()]<arr[i]))
            ss.pop();

        if(!ss.empty())
        {
            sp[i]=i-ss.top();
        }
        else
        {
            sp[i]=1;
        }
        ss.push(i);
    }

    for(int i=0;i<s;i++)
        cout<<sp[i]<<" ";

    return 0;
}
