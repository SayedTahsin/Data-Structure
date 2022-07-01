#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node* head;
void Insert(int data,int position){
    Node* temp= new Node();
    temp->data=data;
    temp->next=NULL;
    if(position==1){
        temp->next=head;
        head=temp;
        return ;
    }
    Node* temp1=head;
    for(int i=0;i<position-2;i++){
        temp1=temp1->next;
    }
    temp->next=temp1->next;
    temp1->next=temp;
}
void Print(){
    Node* temp =head;
    while(temp!=NULL){
        cout<<temp->data<<' ';
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    head= NULL;
    Insert(1,1);
    Insert(2,2);
    Insert(3,1);
    Insert(4,2);
    Insert(5,1);
    Print();
}
