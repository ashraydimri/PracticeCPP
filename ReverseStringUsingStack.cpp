// Stack implementation
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    stack <char> ss;
    char temp;
    for(int i=0;i<s.length();i++)
        ss.push(s[i]);

    while(!ss.empty())
    {
        cout<<ss.top();
        ss.pop();
    }
}
