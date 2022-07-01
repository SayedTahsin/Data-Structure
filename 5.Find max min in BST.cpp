
#include<bits/stdc++.h>
using namespace std;
//Definition of Node for Binary search tree
struct BstNode
{
    int data;
    BstNode* left;
    BstNode* right;
};

// Function to create a new Node in heap
BstNode* GetNewNode(int data)
{
    BstNode* newNode = new BstNode();
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// To insert data in BST, returns address of root node
BstNode* Insert(BstNode* root,int data)
{
    if(root == NULL)   // empty tree
    {
        root = GetNewNode(data);
    }
    // if data to be inserted is lesser, insert in left subtree.
    else if(data <= root->data)
    {
        root->left = Insert(root->left,data);
    }
    // else, insert in right subtree.
    else
    {
        root->right = Insert(root->right,data);
    }
    return root;
}
int FindMin(BstNode* root)
{
    if(root==NULL)
    {
        cout<<"Error: Tree is Empty\n";
        return -1;
    }
    else if(root->left==NULL)
    {
        return root->data;
    }
    return FindMin(root->left);
}
int FindMax(BstNode* root)
{
    if(root==NULL)
    {
        cout<<"Error: Tree is Empty\n";
        return -1;
    }
    else if(root->right==NULL)
    {
        return root->data;
    }
    return FindMin(root->right);
}
int main()
{
    BstNode* root = NULL;  // Creating an empty tree

    root = Insert(root,15);
    root = Insert(root,10);
    root = Insert(root,20);
    root = Insert(root,25);
    root = Insert(root,8);
    root = Insert(root,12);

    cout<<"Min Element: "<<FindMin(root)<<endl;
    cout<<"max Element: "<<FindMax(root)<<endl;
}
/*

int Findmin(BstNode* root){
if(root==NULL){
    cout<<"Error: tree is Empty\n";
    return -1;
}
while(root->left!=NULL){
    root=root->left;
}
return root->data;
}
*/
