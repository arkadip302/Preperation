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
void extreme_nodes(Node *root){
    queue<Node *>q;
    cout<<root->data<<" ";
    //q.push(root);
    q.push(root->left);
    //cout<<root->left->data<<" ";
    q.push(root->right);
    q.push(NULL);
    int set=1;
    int flag=0;
    while(!q.empty()){
       // cout<<"flag value before "<<set<<endl;
        Node *curr=q.front();
        q.pop();
        if(curr!=NULL &&set==1){
          //  cout<<"flag value before "<<flag<<endl;
            if(flag==0){
                cout<<curr->data<<" ";
                flag=1;
            }
           // cout<<"flag value before "<<flag<<endl;
            if(curr->left){
                q.push(curr->left);
            }
            if(curr->right){
                q.push(curr->right);
            }
        }
        else if(curr!=NULL && set==-1){
            if(q.front()==NULL){
                cout<<curr->data<<" ";
            }
            if(curr->left){
                q.push(curr->left);
            }
            if(curr->right){
                q.push(curr->right);
            }
        }
        else if(!q.empty()){
            set=set*-1;
            q.push(NULL);
            if(set==1)
             flag=0;
        }
    }
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
      extreme_nodes(root);
}