#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string flush;
    getline(cin,flush);
    while(t--){
        string s,s1="";
        getline(cin,s);
        vector<char>v;
        for(int i=0;i<s.size();i++){
            auto itr=find(v.begin(),v.end(),s[i]);
            if(itr==v.end()){
                v.push_back(s[i]);
                s1=s1+s[i];
            }
        }
        cout<<s1;
    }
}