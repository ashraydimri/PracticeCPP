//Binary search using stl
#include<bits/stdc++.h>
using namespace std;
int bs(vector <int> &arr,int h, int l, int s)
{

    int mid= (h+l)/2;

    while(l<=h){
    if(arr[mid]==s)
        return mid;
    else
    {
        if(arr[mid]<=arr[h])
        {
            if(s<=arr[h] && s>arr[mid])
            {   l=mid+1;
                bs(arr,h,l,s);
            }
            else
            {
                h=mid-1;
                 bs(arr,h,l,s);
            }
        }
        else
        {
            if(s<arr[mid] &&s>=arr[l ])
            {h=mid-1;
            bs(arr,h,l,s);}
            else
            {
                h=mid-1;
                bs(arr,h,l,s);
            }
        }
    }
    }
    return -1;

}
int main()
{
    int t;
    cin>>t;
    while(t!=0){
    vector <int> arr;
    int n;
    cin>>n;
    arr.reserve(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int fin;
    cin>>fin;
    int ans=bs(arr,n-1,0,fin);
    cout<<ans<<"\n";
    t--;
    }
    return 0;
}

//52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86 87 88 89 90 91 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51
//51 52 53 54 55 56 57 58 59 60 61 62 63 64 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50
