#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    string flush;
    getline(cin,flush);
    while(t--){
        string s;
        getline(cin,s);
        map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        auto j=mp.begin();
        j++;
        int flag=0;
        for(auto i=mp.begin();i!=mp.end();i++){
            if(((i->second-j->second)==1 || (j->second-i->second)==1)){
                flag++;
                j++;
            }
        }
        if(flag==1){
            cout<<1<<endl;
        }
        else
        {
                cout<<0<<endl;
        }
        
    }
}