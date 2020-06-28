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
bool isbst(Node *root){
    stack<Node *>st_left;
    stack<Node *>st_right;
    st_left.push(root);
    st_right.push(root);
    while(!st_left.empty() || !st_right.empty()){
        Node *temp=
    }
}
void connect(Node *p){
    queue<Node *>q;
    q.push(p);
    q.push(NULL);
    while(!q.empty()){
        Node *curr=q.front();
        q.pop();
        if(p!=NULL){
         //   p->nextRight=q.front(); In code

            if(p->left){
                q.push(p->left);
            }
            if(p->right){
                q.push(p->right);
            }
        }
        else if(!q.empty()){
            q.push(NULL);
        }
        
    }
}
int count_leave(Node * root){
    if(root==NULL){return 0;}
    if(root->left==NULL || root->right==NULL){return 1;}
    return count_leave(root->left)+count_leave(root->right);
}
int size(Node* root){
    if(root==NULL){
        return 0;
    }
    return 1+(size(root->left)+size(root->right));
}
int min_bst(Node * root){
    if(root==NULL){
        return 999;
    }
    return min(root->data,min(min_bst(root->left),min_bst(root->right)));
}
int sum(Node *root){
    if(root==NULL){
        return 0;
    }
    return(root->data+sum(root->left)+sum(root->right));
}
void kdis(Node * root,int k){
    if(k==0){
        cout<<root->data<<" ";
    }
    if(root==NULL){
        return ;
    }
    else{
    kdis(root->left,k-1);
    kdis(root->right,k-1);
    }
}
void child_sum(Node * root){
    if(root==NULL){return ;}
    queue<Node *>q;
    q.push(root);
    while(!q.empty()){
        Node *curr=q.front();
        q.pop();
        if(curr->left!=NULL&&curr->right!=NULL){
            if(curr->data!=(curr->left->data+curr->right->data)){
                cout<<0<<endl;
                return ;
            }
            q.push(curr->left);
            q.push(curr->right);
        }
    }
    cout<<1<<endl;
    return ;
}
void print_left_view(Node *root){
    if(root==NULL){return ;}
    queue<Node *>q;
    q.push(root);
    while(!q.empty()){
        int count=q.size();
        for(int i=0;i<count;i++){
            Node *curr=q.front();
            q.pop();
            if(i==0){
                cout<<curr->data<<" ";
            }
            if(curr->left!=NULL){
                q.push(curr->left);
            }
            else if(curr->right!=NULL){
                q.push(curr->right);
            }
        }
    }
}
void print_sib(Node *root){
    if(root==NULL){return ;}
    queue<Node *>q;
    vector<int>v;
    q.push(root);
    while(!q.empty()){
        Node *curr=q.front();
        q.pop();
        if(curr->left==NULL || curr->right==NULL){
            v.push_back(curr->data);
        }
        if(curr->left!=NULL){
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right);
        }
    }
    std::sort(v.begin(),v.end());
    for(auto i=v.begin();i<v.end();i++){
        cout<<*i<<" ";
    }
}
void leave(Node* root,int k){
    if(root==NULL){return ;}
    queue<Node *>q;
    vector<int>v;
    q.push(root);
    while(!q.empty()){
        Node *curr=q.front();
        q.pop();
        if()
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
      print_sib(root);
     
}
