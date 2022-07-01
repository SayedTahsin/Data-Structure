///insert at beginning
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
void Insert(Node** head,int x)
{
    Node* temp = new Node();
    temp->data=x;
    temp->next=nullptr;
    if(*head!=nullptr)
        temp->next=*head;
    *head=temp;
}
void Print(Node* head)
{
    cout<<"The list: ";
    while(head!=nullptr)
    {
        cout<<head->data<<' ';
        head=head->next;
    }
    cout<<endl;
}
int main()
{
    Node* head =nullptr;
    int n,x;
    cout<<"How many numbers: ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        Insert(&head,x);
        Print(head);
    }

}
