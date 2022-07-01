#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
int main()
{
    Node *start,*ptr;
    start= new Node();
    ptr=start;
    int n,x;
    cout<<"How many element to insert: ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {

        cin>>ptr->data;
        if(i!=n){
            ptr->next=new Node();
            ptr=ptr->next;
    }
    }
    ptr->next=NULL;
    cout<<"Enter Element to search: ";
    cin>>x;
    ptr=start;
    int flag=0,i=0;
    while(ptr!=NULL)
    {   i++;
        if(ptr->data==x)
        {
            flag=1;
            break;
        }
        ptr=ptr->next;
    }
    if(flag)
    {
        cout<<"Item Found at node "<<i<<endl;
    }
    else
        cout<<"Item Not Found\n";
}
