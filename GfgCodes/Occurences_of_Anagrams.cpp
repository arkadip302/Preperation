#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    string s,s1;
    getline(cin,s);
    while(t--){
        map<char,int>mp,mp1;
        getline(cin,s);
        getline(cin,s1);
        
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        for(int i=0;i<s1.size();i++){
            mp1[s1[i]]++;
        }
        int min=9999;
        for(auto i=mp1.begin();i!=mp.end();i++){
            auto j=mp.find(i->first);
            if(j->second/i->second==0){

            }
        }
        
    }
}