#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node*right;
    Node(int k){
        data=k;
        left=right=NULL;
    }
};
void mirror(Node *root){
    if(root==NULL){
        return ;
    }
    mirror(root->left);
    mirror(root->right);
    Node *temp=root->left;
    root->left=root->right;
    root->right=temp;
}
int main(){
      Node *root=new Node(0);
      root->left=new Node(8);  
      root->right=new Node(12);
      root->left->right=new Node(70);
      root->left->left=new Node(3);
     // root->left->right=new Node(5);
     //root->right->left=new Node(40);
      //root->left->left=new Node(50);
     //root->left->right=new Node(60);
      //print_left_view(root);
      mirror(root);
     
}