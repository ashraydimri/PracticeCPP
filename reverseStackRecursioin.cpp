#include<bits/stdc++.h>
using namespace std;
//void reverseSS(stack <int >&ss,int n, int s);
void insertAtBottom(stack <int> &ss,int n)
{
    if(ss.empty())
        ss.push(n);
    else
    {
        int a=ss.top();
        ss.pop();
        insertAtBottom(ss,n);
        ss.push(a);
    }
}
void reverseSS(stack <int >&ss)
{
    if(ss.empty())
        return;
    else
    {
        //cout<<"a";
        int a=ss.top();
        ss.pop();
        reverseSS(ss);

        insertAtBottom(ss,a);
        //delete[] x;
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

    reverseSS(ss);

    while(!ss.empty())
    {
        cout<<ss.top()<<" hh";
        ss.pop();
    }
    return 0;
}
