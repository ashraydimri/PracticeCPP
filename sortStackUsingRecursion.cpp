#include<bits/stdc++.h>
using namespace std;
void insSort(stack <int> &ss, int n)
{
    if(ss.empty()|| ss.top()<n)
        ss.push(n);
    else
    {
        int a=ss.top();
        ss.pop();
        insSort(ss,n);
        ss.push(a);
    }
}
void getElem(stack <int> &ss)
{
    if(ss.empty())
        return;
    else
    {
        int a=ss.top();
        ss.pop();
        getElem(ss);
        insSort(ss,a);
    }
}
int main()
{
    stack <int> ss;
    int n,s;
    cin>>s;
    for(int i=0;i<s;i++)
    {
         cin>>n;
         ss.push(n);
    }
   /* while(!ss.empty())
    {
        cout<<ss.top()<<" hc";
        ss.pop();
    }*/
   // cout<<"\n";

    getElem(ss);

    while(!ss.empty())
    {
        cout<<ss.top();
        ss.pop();
    }
    return 0;
}
