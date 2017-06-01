#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack <int> ss;
    int n;
    ss.push(-1);
    string inp;
    cin>>inp;
    int k;
    int maxs=0;
    for(int i=0;i<inp.size();i++)
    {
        if(inp[i]=='(')
            ss.push(i);
        else
        {
            ss.pop();

            if(!ss.empty())
            {
                k=ss.top();
                maxs=max(i-k,maxs);
            }
            else
            {
                ss.push(i);
            }
        }
    }
    cout<<maxs;
    return 0;
}
