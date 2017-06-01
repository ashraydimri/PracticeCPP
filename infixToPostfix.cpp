#include<bits/stdc++.h>
using namespace std;
int getpre(char a)
{
    switch(a)
    {
    case '*':
    case '/':
        return 2;
    case '+':
    case '-':
        return 1;
    case '(':
        return 0;
    }
}
void inftopre(string s)
{
    int i=0;
    char a;
    int pre;
    int temp;
    stack <char> ops;
    while(i<s.length())
    {
        a=s[i];
        i++;
        if(isdigit(a))
        {
            cout<<a;
        }
        else
        {
            if(a=='(')
                {ops.push(a);}
            else if(a==')')
            {
                 while(ops.top()!='(')
                {
                cout<<ops.top();ops.pop();
                }
                ops.pop();
            }
            else{
            pre=getpre(a);
            while(!ops.empty())
            {
                temp=getpre(ops.top());
                if(temp>=pre)
                    {cout<<ops.top();ops.pop();}
                else
                    break;
            }
            ops.push(a);
            }
        }
    }
    while(!ops.empty())
    {
        cout<<ops.top();
        ops.pop();
    }
}

int main()
{
    string s;
    cin>>s;
    inftopre(s);
    return 0;
}
