#include<bits/stdc++.h>
using namespace std;
    char arr[2][100001];
int main()
{
    int t;
    cin>>t;
    int cnt;
    int flag;
    int row1=0;
    int row2=0;
    while(t--)
    {

        int n;
       n=0;
       cin>>n;
        flag=0;
        cnt=0;
        row1=0;
        row2=0;


       for(int i=0;i<2;i++)
       {
           for(int j=0;j<n;j++)
             {
                cin>>arr[i][j];
                if(i==1)
                {
                    if(arr[i][j]=='*')
                        row2++;
                    if(arr[i][j]=='*' && arr[0][j]=='*')
                    {
                        flag=1;
                        cnt=1;
                    }
                }
                if(i==0 && arr[i][j]=='*')
                    row1++;
             }
       }

        int cou=0;
            int k=-1;
            int p=-2;

        for(int j=0;j<n;j++)
        {
            if(arr[0][j]=='*' && arr[1][j]=='*')
            {
                row2--;
                row1--;
                p=k;
                k=2;
                if((row1+row2)!=0)
                    cnt++;
            }
            else if(arr[0][j]=='*' && arr[1][j]!='*')
            {
                row1--;
                p=k;
                k=0;
                if((row1+row2)!=0)
                    cnt++;
            }
            else if(arr[0][j]!='*' && arr[1][j]=='*')
            {
                row2--;
                p=k;
                k=1;
                if((row1+row2)!=0)
                cnt++;
            }


            if((flag==1 && k==0 && p==1) || (flag==1 && k==1 &&p==0))
            {

                cnt--;
                cou++;
                p=2;
                k=2;
            }
            else if((flag==0 && k==0 && p==1) || (flag==0 && k==1 &&p==0))
            {
            //    flag==1;
                cou++;
                p=2;
                k=2;
                if(cou==2)
                {
                  flag=1;

                  cnt--;
                }
            }
        }
        cout<<cnt<<"\n";
    }

    return 0;
}

