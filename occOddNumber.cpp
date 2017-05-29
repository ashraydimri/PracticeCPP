#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> arr;
    int n;
    cin>>n;
    arr.reserve(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];

//    map <int,int> mp;
    //vector <int> mp(n);
    int res=0;
   for(int i=0;i<n;i++)
    {
        res=res^arr[i];
   }
   cout<<res;


    //for(auto i=mp.begin();i!=mp.end();i++)
    //{
        //if(i->second!=0)
          //  cout<<(i->first);

    //}
    return 0;
}
