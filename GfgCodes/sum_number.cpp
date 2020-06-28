#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    string s;
    int sum=0,temp=0;
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        cout<<(int)s[i]<<"   ";
        while(1){
            if((s[i]-'0')>=0 && (s[i]-'0'<=9)){
                temp=temp+s[i]-'0';
                cout<<temp;
            }
            else{
                
            }
        }
    }
    return 0;
}