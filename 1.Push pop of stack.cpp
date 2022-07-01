//6. Write a program to implement the push and pop operation of a stack
#include<bits/stdc++.h>
using namespace std;

int stk[100],top=0;
int menu()
{
    int choice;
    do
    {
        system("cls");
        cout<<"1.push\n2.pop\n0.exit\n";
        cout<<"Choice: ";
        cin>>choice;
        if(choice<0||choice >2)
            cout<<"Choice again...";
    }
    while(choice<0||choice>2);
    return choice;
}
void push()
{
    system("cls");
    if(top>100)
    {
        cout<<"OverFlow\n";
        cin.ignore();
        cin.get();
    }
    else
    {
        cout<<"Enter a Element to push in the stack: ";
        cin>>stk[top];
        cout<<"Pushed...\n";
        top++;
    }

}
void pop()
{
    system("cls");
    top--;
    if(top<0)
        cout<<"UnderFlow\n";
    else
        cout<<"Popped... \n";
}
void display()
{
    cout<<"Array: ";
    for(int i=0; i<top; i++)
    {
        cout<<stk[i]<<' ';
    }
    cout<<"\n\n";
    cout<<"Press Enter to continue...\n";
    cin.ignore();
    cin.get();

}
int main()
{
    int choice;
    do
    {
        choice=menu();
        switch(choice)
        {
        case 1:
            push();
            display();
            continue;

        case 2:
            pop();
            display();
            continue;
        case 0:
            cout<<"end of operation\n";
            break;
        }
    }
    while(choice!=0);
    return 0;
}
//C101101
//Sayed Tahsinoor Rahman

