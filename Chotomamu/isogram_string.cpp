#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int t,f=0;
    string str,flush;
    cin>>t;
    getline(cin,flush);
    while(t--){
        f=0;
        getline(cin,str);
        map<char,int>mp;
        for(int i=0;i<str.length();i++){
            mp[str[i]]++;
        }
        for(auto i=mp.begin();i!=mp.end();i++){
                if(i->second>1){
                    cout<<0<<endl;
                    f=1;
                    break;
                }
        }
        if(f!=1){
            cout<<1<<endl;
        }
    }

}