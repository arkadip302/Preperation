#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    string flush;
    while(t--){
        getline(cin,flush);
        string s,flush;
        char ch;
        int count;
        getline(cin,s);
        cin>>ch;
        cin>>count;
        int pos=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==ch && count!=0){
                count--;
                pos=i+1;
            }            
        }
        if(count!=0 || pos==s.size()){
            cout<<"Empty string"<<endl;
        }
        else{
        string s1=s.substr(pos);
        cout<<s1<<endl;
        }
    }
}

