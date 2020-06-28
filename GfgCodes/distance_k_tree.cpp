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
void distance_k(Node *root,int k){  ///count
    queue<Node *>q;
    q.push(root);
    while(q.empty()==false){

    }


}
int main(){
    int k;
    cin>>k;
    struct Node *root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->left->left=new Node(40);
    root->left->right=new Node(50);
    root->right->left=new Node(60);
    root->right->right=new Node(70);
    distance_k(root,k);
}