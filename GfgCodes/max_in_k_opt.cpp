#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        map<int,int>mp;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int temp=k-1;
        while(temp>=0){
            mp[arr[temp]]++;
            --temp;
        }
        auto itr=mp.rbegin();
        cout<<itr->first<<" ";
       // cout<<"printing end"<<(mp.end())->first<<endl;
        for(int i=0;i<n;i++){
            auto itr=mp.find(arr[i]);
            if(itr->second>1){
                itr->second=itr->second-1;
            }
            else{
                mp.erase(arr[i]);
            }
            if(i+k>=n){
                break;
            }
            mp[arr[i+k]]++;
            auto j=mp.rbegin();
            cout<<j->first<<" ";
        }
        cout<<endl;
    }
}