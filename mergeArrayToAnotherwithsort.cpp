#include<bits/stdc++.h>
using namespace std;
void moveToend(vector <int> &mpn, int mp)
{
    int k=mp-1;
    for(int i=mp-1;i>=0;i--)
    {

        if(mpn[i]!=-1)
        {
            mpn[k]=mpn[i];
            k--;
        }
    }


}
void merg(vector <int> &mpn, int mp, vector <int> &na, int n)
{
    int i=n;
    int j=0;
    int k=0;
    while(k<(mp))
    {

        if(mpn[i]<na[j] || j==n)
        {
            mpn[k]=mpn[i];
            i++;
            k++;

        }
        else if(mpn[i]>=na[j] || i!=mp)
        {
            mpn[k]=na[j];
            j++;
            k++;

        }
    }
}
int main()
{
    vector <int> mpn;
    int mp;
    cin>>mp;
    mpn.reserve(mp);
    for(int i=0;i<mp;i++)
        cin>>mpn[i];
    vector <int> na;
    int n;
    cin>>n;
    na.reserve(n);
    for(int i=0;i<n;i++)
        cin>>na[i];
   // cout<<"Help";
    moveToend(mpn,mp);
    merg(mpn,mp,na,n);
        for(int i=0;i<mp;i++)
        cout<<mpn[i];
    return 0;
}
