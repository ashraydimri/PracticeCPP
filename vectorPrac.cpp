#include<bits/stdc++.h>
using namespace std;
void swap(char *x, char*y)
{
    char temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void back(char *s,int l, int size, set <string> &lis)
{
    if(l==size-1){
    lis.insert(s);
    //cout<<s;
    }
    else{
        for(int i=l;i<size;i++)
        {
            swap(s+i,s+l);
            back(s,l+1,size,lis);
            swap(s+i,s+l);
        }
    }
}
int findRank(string A) {
    int size=A.length();
    set <string> lis;

    //vector<char> str(A.c_str(), A.c_str() + A.size());
    char *str= new char[A.length()];
    strcpy(str,A.c_str());
    //cout<<str.size();
    back(str,0,size,lis);
    string a;int x=0;
     delete [] str;
    for(auto i=lis.begin();i!=lis.end();i++)
    {
        a=*i;
        if(a.compare(A)==0)return (x+1)%1000003;
        x++;
    }


}

int main(){
    cout<<findRank("abc");
return 0;
}
