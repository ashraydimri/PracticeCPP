#include<bits/stdc++.h>
using namespace std;
int calc(char x,int a,int b)
{
    switch(x)
    {
        case '+':return a+b;break;
        case '-':return a-b;break;
        case '*':return a*b;break;
        case '/':return a/b;break;
    }
}
int pref(string s, int n)
{
    stack <int> arr;
    if(n==1)
        reverse(s.begin(),s.end());

    int op1,op2,res;

    int i=0;
    while(i<s.size())
    {
        if(isdigit(s[i]))
        arr.push((int)s[i]-48);
        else
        {
            op1=arr.top();
            arr.pop();
            op2=arr.top();
            arr.pop();
            if(n==2)
                res=calc(s[i],op2,op1);
            else
                res=calc(s[i],op1,op2);
            arr.push(res);
        }
        i++;
    }
    return arr.top();
}
int main(){

    string s;
    cout<<"Enter 1 for prefix and 2 for postfix.\n";
    int n;
    cin>>n;
    cout<<"Enter expression.\n";
    cin>>s;

    int ans=pref(s,n);
    cout<<ans;
    return 0;
}
