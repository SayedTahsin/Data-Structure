///7.	Write a program to show the insert and delete operations of a priority queue using array.
#include<bits/stdc++.h>
#define k 20
using namespace std;
struct  priorityqueue
{
    int ele;
    int priority;
} pq[k+1];
int rear=-1;
int isempty()
{
    if(rear==-1)
        return 1;
    else
        return 0;
}
int isfull()
{
    if(rear==k-1)
        return 1;
    else
        return 0;
}
void insert(int ele,int p)
{
    rear++;
    pq[rear].ele=ele;
    pq[rear].priority=p;

}
int gethighpriority()
{
    int p=-1;
    if(!isempty())
    {
        for(int i=0; i<=rear; i++)
        {
            if(pq[i].priority>p)
                p=pq[i].priority;
        }
    }
    return p;
}
int deletehighpriority()
{
    int p,ele,i;
    p=gethighpriority();
    for(i=0; i<=rear; i++)
    {
        if(pq[i].priority==p)
        {
            ele=pq[i].ele;
            break;
        }
    }
    if(i<rear)
    {
        for(int j=i; j<rear; j++)
        {
            pq[j].ele=pq[j+1].ele;
            pq[j].priority=pq[j+1].priority;
        }
    }
    rear--;
    return ele;
}
void display()
{
    cout<<"priority queue: \n";
    cout<<"element priority\n";
    for(int i=0; i<=rear; i++)
    {
        cout<<pq[i].ele<<"      "<<pq[i].priority<<endl;
    }
    system("pause");
}
int main()
{
    int n,p,ele;
    while(1)
    {
        system("cls");
        cout<<"\n\t1.insert";
        cout<<"\n\t2.delete";
        cout<<"\n\t3.display\n";
        cin>>n;
        if(n==1)
        {
            if(isfull())
            {
                cout<<"priority Queue is full \n";
            }
            else
            {
                cout<<"Enter element to insert: ";
                cin>>ele;
                cout<<"Enter priority:";
                cin>>p;
                insert(ele,p);
            }
        }
        if(n==2)
        {
            deletehighpriority();
        }
        if(n==3)
        {
            display();
        }
    }
}
