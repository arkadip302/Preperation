#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    string flush;
    getline(cin,flush);
    while(t--){
        string s,s1;
        getline(cin,s);
        s1=s;
        reverse(s.begin(),s.end());
       // cout<<s<<" "<<s1<<endl;
        if(s1==s){
            cout<<0<<endl;
            continue;
        }
        if(s.size()%2==0){
            cout<<s.size()-1<<endl;
            continue;
        }
        else{
            int count=0;
            map<char,int>mp;
            for(int i=0;i<s.size();i++)
                mp[s[i]]++;
            for(auto i=mp.begin();i!=mp.end();i++){
                if(i->second%2!=0){
                    count++;
                }
            }
            for(auto i=mp.begin();i!=mp.end();i++){
                cout<<i->first<<" "<<i->second<<endl;
                }
            cout<<count<<endl;
        }
    }
}