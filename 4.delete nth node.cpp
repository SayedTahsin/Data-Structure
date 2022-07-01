#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
Node *head;
void Print()
{
    Node* temp;
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<' ';
        temp=temp->next;
    }
    cout<<endl;
}
void Delete(int n)
{
    Node* temp1=head;
    if(n==1)
    {
        head=temp1->next;
        delete temp1;//free(temp1)
        return ;
    }
    int i;
    for(int i=0; i<n-2; i++)
        temp1=temp1->next;
    Node* temp2=temp1->next;
    temp1->next=temp2->next;
    delete temp2;
}
int main()
{

    Node *ptr;
    head= new Node();
    ptr=head;
    int n,x;
    cout<<"How many element to insert: ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>ptr->data;
        if(i!=n)
        {
            ptr->next=new Node();
            ptr=ptr->next;
        }
    }
    ptr->next=NULL;
    Print();
    cout<<"Enter a Position to deleste: ";
    cin>>n;
    Delete(n);
    Print();

}
