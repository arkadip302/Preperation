#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    string flush;
    getline(cin,flush);
    while(t--){
        string s,temp;
        getline(cin,s);
        s+=".";
        string res[100];
        int j=0;
        for(int i=0;i<s.size();i++){
            if(s[i]!='.'){
                temp+=s[i];
            }
            else{
                res[j++]=temp;
                temp="";
            }
        }
        for(int i=j;i>=0;i--){
            if(i==j || i==0)
                cout<<res[i];
            else
            {
                cout<<res[i]<<".";
            }
            
        }
        
        cout<<endl;
    }
}