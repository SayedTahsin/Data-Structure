///Write a program to create a Linked List of n elements and then display the list.
#include<bits/stdc++.h>
#define NULL 0
using namespace std;
typedef struct linked_list
{
    int num;
    linked_list *next;
} node;

int main()
{
    int n,i;
    node *start,*ptr;
    start=new node();
    ptr=start;

    cout<<"How many elements to insert: ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cout<<"Enter a number: ";
        cin>>ptr->num;
        cout<<endl;
        if(i!=n)
        {
            ptr->next=new node();
            ptr=ptr->next;
        }
    }
    ptr->next=NULL;
    cout<<"Elements in the linked list are: ";
    ptr=start;
    while(ptr!=NULL)
    {
        cout<<ptr->num<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
    return 0;
}
