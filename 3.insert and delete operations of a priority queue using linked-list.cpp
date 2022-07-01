///6.	Write a program to show the insert and delete operations of a priority queue using linked-list
#include <bits/stdc++.h>
using namespace std;
typedef struct node
{
    int data;
    int priority;

    struct node* next;

} Node;
Node* newNode(int d, int p)
{
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->data = d;
    temp->priority = p;
    temp->next = NULL;

    return temp;
}
int peek(Node* *head)
{
    return (*head)->data;
}
void pop(Node** head)
{
    Node* temp = *head;
    (*head) = (*head)->next;
    free(temp);
}
void push(Node** head, int d, int p)
{
    Node* start = (*head);

    Node* temp = newNode(d, p);
    if ((*head)->priority > p)
    {
        temp->next = *head;
        (*head) = temp;
    }
    else
    {
        while (start->next != NULL &&
                start->next->priority < p)
        {
            start = start->next;
        }
        temp->next = start->next;
        start->next = temp;
    }
}
int isEmpty(Node** head)
{
    return (*head) == NULL;
}
int main()
{
    Node* pq = newNode(0, 0);
    while(1)
    {
        system("cls");
        int ch,d,p;
        cout<<"1.insert\n";
        cout<<"2.delete\n";
        cout<<"3.display\n";
        cin>>ch;
        if(ch==1)
        {
            cout<<"Enter element: ";
            cin>>d;
            cout<<"Enter Priority: ";
            cin>>p;
            push(&pq,d,p);
        }
        if(ch==2)
        {
            cout<<peek(&pq);
            pop(&pq);
            cout<<endl;
            system("pause");
        }
        if(ch==3)
        {
            while (!isEmpty(&pq))
            {
                cout << " " << peek(&pq);
                pop(&pq);
            }

            system("pause");
        }
    }

    return 0;
}



