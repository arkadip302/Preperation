#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    int value;
    Node *next,*pre;
    Node(int key, int value)
    {
        this->key=key;
        this->value=value;
        next=pre=NULL;
    }
    
};

class LRUCache
{
    private:
    
    static unordered_map<int,Node *> hsmap;
    static int capacity,count;
    static Node *head,*tail;
   
    public:

    LRUCache(int cap)
    {
        
    }
  
    static int get(int key)
    {
        
    }
    
    static void set(int key, int value)
    {
        
    }
    
};

unordered_map<int, Node*> temp;
int LRUCache::capacity=0;
Node * LRUCache::head= new Node(0,0);
Node *  LRUCache::tail= new Node(0,0);
int LRUCache::count= 0;
unordered_map<int, Node*> LRUCache::hsmap= temp;



int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    
	    int capacity;
	    cin>>capacity;
	    int queries;
	    cin>>queries;

	    LRUCache *cache = new LRUCache(capacity);
	    while(queries--)
	    {
	        string q;
	        cin>>q;
	        if(q=="SET")
	        {
	            int key;
	            cin>>key;
	            int value;
	            cin>>value;
	            
	            cache->set(key,value);
	            
	        }
	        else
	        {
	            int key;
	            cin>>key;
	            
	            cout<<cache->get(key)<<" ";

	        }
	    }
	    
	    cout<<endl;
	}
	return 0;
}
