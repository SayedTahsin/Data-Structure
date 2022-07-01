///5.	Write a program to show the insert and delete operations of a circular queue.
#include<bits/stdc++.h>
using namespace std;
int arr[10000],f=0,r=0,n=100;
void insert_op(int item)
{
    if(f==1 && r==n)
    {
        cout<<"Overflow";
        return ;
    }
    else if(f==r+1)
    {
        cout<<"Overflow\n";
        return ;
    }
    if(f==0)
    {
        f=1;
        r=1;
    }
    else if(r==n)
    {
        r=1;
    }
    else
    {
        r++;
    }

    arr[r]=item;
}
int delete_op()
{
    if(f==0)
    {
        cout<<"underflow\n";
        return 0;
    }
    int i=arr[f];
    if(f==r)
    {
        f=0;
        r=0;
    }
    else if(f==n)
    {
        f=1;
    }
    else
    {
        f++;
    }
    return i;
}
int main()
{
    int item,k;
    cout<<"how many item you want to insert: ";
    cin>>k;
    cout<<"insert element in queue: ";
    while(k--)
    {
        cin>>item;
        insert_op(item);
    }
    char c;
    while(1)
    {
        cout<<"press d to delete(or press anything to exit): ";
        cin>>c;
        if(c=='d' || c=='D')
            cout<<"\ndeleted item: "<<delete_op()<<endl;
        else
        {
            break;
        }
    }
}
