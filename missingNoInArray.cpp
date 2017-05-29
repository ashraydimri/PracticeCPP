#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t>0)
	{
	    int n;
	    cin>>n;
	    vector <int>arr;
	    arr.reserve(n-1);
	    for(int i=0;i<n-1;i++)
	    cin>>arr[i];

	    vector <bool>mp(n);
        cout<<"a";
	    for(int i=0;i<n-1;i++)
	    mp[arr[i]]=1;
        cout<<"b";
	    for(int i=1;i<n;i++)
	    {
	        cout<<"c";
	        if(mp[i]==0)
	        cout<<(i)<<"\n";
	    }

	    t--;
	}
	return 0;
}
