#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        set<int>s;
        int arr1[n];
        for(int i=0;i<n;i++){
            cin>>arr1[i];
        }
        for(int i=0;i<m;i++){
            int x;
            cin>>x;
            s.insert(x);
        }
        for(int i=0;i<n;i++){
            if(s.find(arr1[i])==s.end()){
                cout<<arr1[i]<<" ";
            }
        }
        cout<<endl;
    }
}