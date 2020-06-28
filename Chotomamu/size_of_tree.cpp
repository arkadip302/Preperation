#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *left=NULL;
    Node *right=NULL;
    Node(int k){
        data=k;
    }
};
int size_of_tree(Node *root){
    if(root==NULL)
        return 0;
    else
    {
        return 1+size_of_tree(root->left)+size_of_tree(root->right);
    }
}
int main(){
    struct Node *root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->left->left=new Node(40);
    root->left->right=new Node(50);
    root->right->left=new Node(60);
    root->right->right=new Node(70);
    cout<<size_of_tree(root);
}