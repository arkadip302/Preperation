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
void leave_node(Node *root,int a,int b){
    queue<Node *>q;
    vector<int>v;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
       Node *curr=q.front();
       q.pop();
       if(curr!=NULL){
           if(curr->left){
               q.push(curr->left);
           }
           if(curr->right){
               q.push(curr->right);
           }
       }
       else if(!q.empty()){
           q.push(NULL);
           auto i=v.begin(); auto j=v.rbegin();
           int z=v.size();
           while(i!j)
       }
    }
    cout<<0<<endl;
    return ;
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
      leave_node(root,100);
     
}