#include<bits/stdc++.h>
using namespace std;
void swaps(char *a,char *b)
{
    char temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void backt(vector <char> arr, set <string> &coll, int r, int l)
{
    if(r==(l-1))
    {
        string s(arr.begin(),arr.end());
        coll.insert(s);
    }
    else{
        for(int i=r;i<l;i++)
        {
            string s(arr.begin(),arr.end());
            cout<<s<<" holla ";
            swaps(&arr[i],&arr[r]);
            backt(arr,coll,r+1,l);
            swaps(&arr[i],&arr[r]);
        }
    }
}
int findrank(string s)
{
    vector <char> arr(s.c_str(),s.c_str()+s.length());
    arr.reserve(s.length());
    set <string> coll;
    backt(arr,coll,0,s.length());
    int j=0;
    for(auto i=coll.begin();i!=coll.end();i++)
    {
        cout<<*i;
        if(s.compare(*i)==0)
        {
            return j+1;
        }
        j++;
    }

}
int main()
{
    cout<<findrank("cba");
    return 0;
}
