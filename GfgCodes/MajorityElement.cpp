#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,flag=0;
        cin>>n;
        int arr[n];
        map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            mp[arr[i]]++;
        }
        for(auto i=mp.begin();i!=mp.end();i++){
            if(i->second>n/2){
                cout<<i->first<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0)
            cout<<-1<<endl;
    }
}