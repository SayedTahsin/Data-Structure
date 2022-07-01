#include<bits/stdc++.h>
using namespace std;
char tree[10];
void rootnode(char key)
{
    if(tree[0] != '\0')
        cout<<"Tree already had root";
    else
        tree[0] = key;
}
void leftchild(char key, int parent)
{
    if(tree[parent] == '\0')
        cout <<"Can't set child at "<<(parent * 2) + 1<<" , no parent found"<<endl;
    else
        tree[(parent * 2) + 1] = key;
}
void rightchild(char key, int parent)
{
    if(tree[parent] == '\0')
        cout<<"Can't set child at "<<(parent * 2) + 2<<" , no parent found"<<endl;
    else
        tree[(parent * 2) + 2] = key;

}
void traversetree()
{
    for(int i = 0; i < 10; i++)
    {
        if(tree[i] != '\0')
            cout<<tree[i];
        else
            cout<<"-";
    }
}
int main()
{
    rootnode('A');
    rightchild('C', 2);
    leftchild('D', 0);
    rightchild('E', 1);
    rightchild('F', 2);
    traversetree();
    return 0;
}
