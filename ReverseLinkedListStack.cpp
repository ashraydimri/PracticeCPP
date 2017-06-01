#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
};
node* head= NULL;
void reverseLL()
{
    stack <node* > ss;
    if(head==NULL)
        return;
    node *temp=head;
    while(temp!=NULL)
    {
        ss.push(temp);
        temp=temp->next;
    }
    head=ss.top();
    ss.pop();
    temp=head;
    while(!ss.empty())
    {
        temp->next=ss.top();
        temp=temp->next;
        ss.pop();
    }
    temp->next=NULL;
}
void print()
{
    node* temp=head;
    if(head==NULL)
        cout<<"Empty\n";
    else
    {
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<"\n";
    }
}
int main()
{
    node *temp=new node();
    head=temp;
    temp->data=4;
    node *temp2=new node();
    temp2->data=5;
    temp->next=temp2;
    temp=new node();
    temp->data=7;
    temp->next=NULL;
    temp2->next=temp;
    print();
    reverseLL();
    print();
    return 0;
}
