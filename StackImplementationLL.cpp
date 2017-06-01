#include<bits/stdc++.h>
using namespace std;
struct node{
    int val;
    node *next;
};
struct node* top=NULL;

void push(int x)
{
    node *temp=new node();
    temp->val=x;
    temp->next=top;
    top=temp;
}
void pop()
{
    node *temp=top;
    if(top==NULL)
    {
        cout<<"Empty\n";
        return;
    }
    top=top->next;
    delete(temp);

}
void print()
{
    node *temp=top;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<"\n";
}
int main()
{
    push(3);
    push(1);
    push(9);
    print();
    pop();
    push(2);
    print();
    pop();
    print();
    pop();
    print();
    return 0;
}
