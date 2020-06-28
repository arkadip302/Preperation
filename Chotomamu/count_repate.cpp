#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t-->0){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int count=0;
        map<int,int>mp;
        for(int i=0;i<n;i++)
            mp[arr[i]]++;
        for(auto i=mp.begin();i!=mp.end();i++)
            if(i->second==1)
                count++;
        cout<<count<<endl;
    }
}