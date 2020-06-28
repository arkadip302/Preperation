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
        map<char,int> mp;
        for(int i=0;i<s.size();i++)
            mp[s[i]]++;
        cout<<mp.size()
    }
}
