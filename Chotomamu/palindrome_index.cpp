#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    string g;
    cin>>t;
    getline(cin,g);
    while(t--){
        string s,s1;
        int flag=0;
        getline(cin,s);
        getline(cin,s1);
        map<char,int> mp;
        map<char,int>mp1;
        for(int i=0;i<s.size();i++)
            mp[s[i]]++;
        for(int i=0;i<s1.size();i++)
            mp1[s1[i]]++;
        for(auto i=mp.begin();i!=mp.end();i++){
            auto itr=mp1.find(i->first);
            if(itr!=mp1.end()){
                cout<<"YES"<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0)
            cout<<"NO"<<endl;
    }
}
 