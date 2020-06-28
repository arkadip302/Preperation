#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int n,count=0,t;
    cin>>t;
    while(t--){
        count=0;
        cin>>n;
        map<string,int>mp;
        for(int i=0;i<n;i++){
            string str;
            cin>>str;
            mp[str]++;
        }
        for(auto i=mp.begin();i!=mp.end();i++){
            if(i->second==2)
            count++;   
        }
        cout<<count;
    }
    return 0;
}