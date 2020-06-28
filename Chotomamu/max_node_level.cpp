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
void Node_level(Node *root){
    queue<Node *>q;
    q.push(root);
    q.push(NULL);
    int count_nodes=0;
    int count=0;
    int height=0,set_height=0;
    while(!q.empty()){
        Node *curr=q.front();
        q.pop();
        if(curr!=NULL){
            //cout<<"node data ="<<curr->data<<endl;
            count++;
            if(curr->left){
                q.push(curr->left);
            }
            if(curr->right){
                q.push(curr->right);
            }
        }
        else if(!q.empty()){
            q.push(NULL);
            //cout<<count<<" in height "<<height;
             if(count>count_nodes){
                 count_nodes=count;
                 set_height=height;
             }
            count=0;
            height++;
        }
        else if(count>count_nodes){
            set_height+=1;
        }
    }
    cout<<set_height<<endl;
}
void sum_of_leaves(Node *root){
     queue<Node *>q;
    q.push(root);
    q.push(NULL);
    int count=0,set_count=0;
    while(!q.empty()){
        Node *curr=q.front();
        q.pop();
        if(curr!=NULL){
            //cout<<"node data ="<<curr->data<<endl;
            if(curr->left){
                q.push(curr->left);
            }
            if(curr->right){
                q.push(curr->right);
            }
            if(curr->left==NULL && curr->right==NULL){
                set_count+=curr->data;
            }
        }
        else if(!q.empty()){
            q.push(NULL);
            count=0;
        }
        else{
            cout<<set_count<<endl;
        }
    }
  
}
void Odd_even_level(Node *root){
    queue<Node *>q;
    q.push(root);
    q.push(NULL);
    int sep=1;
    int count=0,prev=0;
    while(!q.empty()){
        Node *curr=q.front();
        q.pop();
        if(curr!=NULL){
            count+=curr->data;
            if(curr->left){
                q.push(curr->left);
            }
            if(curr->right){
                q.push(curr->right);
            }
        }   
        else if(!q.empty()){
            if(sep==1){
                cout<<count<<endl;
                prev=count;
            }
            else{
                cout<<prev-count<<endl;
            }
            q.push(NULL);
            sep=sep*-1;
            count=0;
        }
        else if(sep==-1){
            cout<<prev-count<<endl;
        }
        else if(sep==1){
            cout<<count<<endl;
        }
    }
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
      Odd_even_level(root);
     
}