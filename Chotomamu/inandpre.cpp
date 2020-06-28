#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};
Node *buildTree(int a[],int b[],int str,int end);
# define my_sizeof(type) ((char *)(&type+1)-(char*)(&type)) 
int preIndex=0;
void printPostOrder(Node *root){
	if(root==NULL)
		return;
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
       // ::pre_index=0;
		preIndex=0;
		Node *root=NULL;
		int a[n],b[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++)
			cin>>b[i];
		root=buildTree(a,b,0,n-1);
		printPostOrder(root);
		cout<<endl;
	}
}// } Driver Code Ends
/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
int pre_index=0;
Node* buildTree(int in[],int pre[], int is, int ie)
{
 if(is>ie)  
    return NULL;
 Node *root=new Node(pre[pre_index++]);
 int in_index=0;
 for(int i=is;i<=ie;i++){
    if(in[i]==root->data){
        in_index=i;
        break;
    }
 }
 root->left=buildTree(in,pre,is,in_index-1);
 root->right=buildTree(in,pre,in_index+1,ie);
 if(is==(my_sizeof(in)/my_sizeof(in[0])-1) && ie==(my_sizeof(in)/my_sizeof(in[0])-1)){
    ::pre_index=0;
}
::pre_index=0;
 return root;
}