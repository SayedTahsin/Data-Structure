#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node* Prev;
};
Node* head;
Node* GetNewNode(int x){
    Node* newNode= new Node();
    newNode->data=x;
    newNode->Prev=NULL;
    newNode->next=NULL;
    return newNode;
}
void InsertAtHead(int x){
    Node* newNode= GetNewNode(x);
    if(head==NULL){
        head=newNode;
        return;
    }
    head->Prev=newNode;
    newNode->next=head;
    head=newNode;
}
void Print(){
    Node* temp=head;
    cout<<"Forward: ";
    while(temp!=NULL){
        cout<<temp->data<<' ';
        temp=temp->next;
    }
    cout<<endl;
}
void ReversePrint(){
    Node* temp=head;
    if(temp==NULL)return ;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    cout<<"Reverse: ";
    while(temp!=NULL){
        cout<<temp->data<<' ';
        temp=temp->Prev;
    }
    cout<<endl;
}
int main(){
    head=NULL;
    InsertAtHead(2);Print();ReversePrint();
    InsertAtHead(3);Print();ReversePrint();
    InsertAtHead(4);Print();ReversePrint();
    InsertAtHead(5);Print();ReversePrint();
}
