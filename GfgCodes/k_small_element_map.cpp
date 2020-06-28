#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,x,j=0,t;
    cin>>t;
    while(t--){
        cin>>n;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>x;
            mp[x]++;
        }
        cin>>k;
        if(k<0 || k>mp.size()){
            exit(1);
        }
        else{
            for(auto i=mp.begin();i!=mp.end();i++,j++){ 
            if(j==k-1)
            cout<<i->first<<endl;
            }
            j=0;   
        }
    }
    return 0;
}