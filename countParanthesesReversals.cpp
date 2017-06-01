#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code

	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    int ans=0;
	    stack <char> st;
	    cin>>s;
	    if(s.size()%2!=0)
	    {
	        cout<<"-1\n";
	    }
	    else
	    {
	        for(int i=0;i<s.size();i++)
	        {
	            if(s[i]=='{')
	            st.push(s[i]);
	            else
	            {
	                if(st.empty())
	                {
	                    st.push('{');ans++;
	                }
	                else
	                {
	                    st.pop();
	                }
	            }
	        }

	        int j=0;
	        while(!st.empty())
	        {
	            st.pop();
	            j++;
	        }
	        ans+=j/2;
	        cout<<ans<<"\n";
	    }
	}
	return 0;
}
