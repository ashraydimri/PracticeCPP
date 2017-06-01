#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    char temp;
    stack <char>ss;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='(' || s[i]=='[' || s[i]=='{')
        {
            ss.push(s[i]);
        }
        else if(s[i]==')' || s[i]==']' || s[i]=='}')
        {
            if(ss.empty()){
                cout<<"Unbalanced\n";
                return 0;
            }
            temp=ss.top();
            switch(temp)
            {
                case '{':temp='}';break;
                case '(':temp=')';break;
                case '[':temp=']';break;
            }
            if(temp==s[i])
                ss.pop();
            else
            {
                cout<<"Unbalanced\n";
                return 0;
            }
        }
    }
    if(!ss.empty())
        cout<<"Unblanced\n";
    else
        cout<<"Balanced\n";
    return 0;
}
