#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    string s;
    getline(cin,s);
    while(t--){
        //string s;
        getline(cin,s);
        int counti=0,countj=0,count_z=0;
        int i=0,j=s.size()-1;
        while(s[i]!='1' || s[j]!='1'){
            if(s[i]=='0'){
                i++;
            }
            if(s[j]=='0'){
                j--;
            }
            if(s[i]=='1' && s[j]=='1'){
                break;
            }
        }
        for(int z=i;z<j;z++){
            if(s[z]=='0'){
                count_z++;
            }
        }
        cout<<count_z<<endl;
    }
}