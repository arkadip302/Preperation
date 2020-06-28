#include<bits/stdc++.h>
using namespace std;;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            mp[x]++;
        }
        while(mp.size()>0){
            int max=INT_MIN;
            auto temp=mp.begin();
            for(auto i=mp.begin();i!=mp.end();i++){
                if(max<i->second){
                    max=i->second;
                    temp=i;
                }
            }
            while(max--){
                cout<<temp->first<<" ";
            }
            mp.erase(temp);
        }
    }
}