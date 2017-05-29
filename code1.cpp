#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
    string a="312";
    string b="323";
    cout<<a.compare(b);

    /*
    int arr[]={4,3,1,2,1,5};
    int res=0;
    for(int i=0;i<6;i++)
        res=res^arr[i];
    cout<<(2^1);*/
    /*
    int k=1;
    for (int i=0;i<7;i++)
    {
            if(i<4){
            for(int j=3-i;j>0;j--)
            {
                cout<<" ";
            }
            cout<<k;
            for(int l=1;l<(2*i);l++)
            {
                cout<<" ";
            }
            if(i>0)cout<<k;
            }
            else{
                for(int j=i-3;j>0;j--)
                {
                    cout<<" ";
                }
                cout<<k;
                for(int l=4;l<((2*(7-i))+1);l++)
                {
                    cout<<" ";
                }
            if(i!=6)cout<<k;
            }
            if(i<3)
            k++;
            else
            k--;
            cout<<"\n";

    }*/
    return 0;
}


/*
vector<int> Solution::maxset(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int flag=0;
    for(int i=0;i<A.size();i++)
    {

        if(A[i]>=0){
            if(flag==0)
            {
                 long long maxl=A[i]; long long sum=(long long)A[i], lenm=1,len=1;
             int *start=&A[i]; int *end=&A[i];int *startM=&A[i]; int *endM=&A[i];
             flag=1;
            }
            sum=(long long)sum+(long long)A[i];
            end=&A[i];
            len++;
        }
        else{

            if(flag!=0){
            if(sum>maxl)
            {
                maxl=sum;
                endM=end;
                startM=start;
                lenm=len;
                len=1;
            }
            else if(sum==maxl)
            {
                if(len>lenm)
                {
                     maxl=sum;
                    endM=end;
                    startM=start;
                    lenm=len;
                    len=1;
                }
            }
            if(i!=A.size()-1)
            start=&A[i+1];
            }
        }
    }

    vector <int> ans;
    if(flag==0)
    return;
    ans.assign(startM,endM+1);
    return ans;
}
*/
