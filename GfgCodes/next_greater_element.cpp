#include<bits/stdc++.h>
using namespace std;
int main()
{   int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        queue<int>q;
        int count=0;
        q.push(arr[0]);
        for(int i=1;i<n;i++){
            if(arr[i]>q.front()){
                int j=q.size();
                while(j>0){
                    cout<<arr[i]<<" ";
                    q.pop();
                    j--;
                }
                q.push(arr[i]);
            }
            else{
                q.push(arr[i]);
            }
        }
        if(q.size()!=0){
            
        }
        cout<<-1<<endl;
    }
}