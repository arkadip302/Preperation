#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *left;
    Node *right;
    Node(int k){
        data=k;
        left=NULL;
        right=NULL;
    }
};
void level(Node *root){
    queue<Node *> q;
    q.push(root);
    while(q.empty()==false){
        Node * curr=q.front();
        q.pop();
         cout<<curr->data<<" ";        
        if(curr->left!=NULL)
            q.push(curr->left);
        if(curr->right!=NULL)
            q.push(curr->right);
    }
}
void level_reversal(Node *root){
    queue<Node *> q;
    stack<int> st;
    q.push(root);
    while(q.empty()==false){
        Node * curr=q.front();
        q.pop();
        st.push(curr->data);
        if(curr->left!=NULL)
            q.push(curr->left);
        if(curr->right!=NULL)
            q.push(curr->right);
    }
    int i=st.size();
    while(i--){
        cout<<st.top()<<" ";
        st.pop();
    }
}
void level_order_line(Node *root){
    queue<Node *>q;
    q.push(root);
    q.push(NULL);
    while(q.size()>1){
       Node *curr=q.front();
       q.pop();
       if(curr==NULL){
           cout<<endl;
           q.push(NULL);
            continue;
       }
       cout<<curr->data<<" ";
       if(curr->left!=NULL){
           q.push(curr->left);
       }
       if(curr->right!=NULL)
        q.push(curr->right);
    
    }
}
void alt_leve_order(Node *root){
    queue<Node *>q;
    q.push(root);
    while(q.empty()==false){
        int count=q.size();
        int i=0;
        while(i<count){
            Node *curr=q.front();
            q.pop();
            cout<<curr->data<<" ";
            if(curr->left!=NULL)
                q.push(curr->left);
            if(curr->right!=NULL)
                q.push(curr->right);
            i++;
        }
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
    level(root);
    cout<<endl;
    alt_leve_order(root);
}