#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    map<int,int>mp;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    int temp=mp.end()->second,temp1;
    for(auto i=mp.end();i!=mp.begin();i--){
        if(temp>i->second){
            temp=i->second;
            temp1=i->first;
        }
    }
    cout<<temp1<<endl;
}