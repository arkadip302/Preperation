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
void max_width(Node *root){
    queue<Node *>q;
    q.push(root);
    q.push(NULL);
    int max_width=0;
    int width=0;
    while(!q.empty()){
       Node *curr=q.front();
       q.pop();
       if(curr!=NULL){
           width++;
           if(curr->left){
               q.push(curr->left);
           }
           if(curr->right){
               q.push(curr->right);
           }
       }
       else if(!q.empty()){
           q.push(NULL);
           if(width>max_width){
               max_width=width;
           }
           width=0;
       }
       else if(width>max_width){
           max_width=width;
       }
    }
    cout<<max_width<<endl;
}

int main(){
      Node *root=new Node(0);
      root->left=new Node(8);  
      root->right=new Node(12);
      root->left->right=new Node(70);
      root->left->left=new Node(3);
      //root->right->right=new Node(5);
      //root->right->left=new Node(40);
      root->left->left->left=new Node(150);
      root->left->left->right=new Node(100);
      root->left->right->right=new Node(160);
      root->left->right->left=new Node(160);
      //print_left_view(root);
      max_width(root);
     
}