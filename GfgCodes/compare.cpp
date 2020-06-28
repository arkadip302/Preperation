#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    while(t--){
        int n;
        cin>>n;
        int arr[n],arr1[n];
        map<int,int>mp,mp1;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            mp[arr[i]]++;
        }
        for(int i=0;i<n;i++){
            cin>>arr1[i];
            mp1[arr1[i]]++;
        }
       /* int flag=0;
        auto j=mp1.begin();
        for(auto i=mp.begin();i!=mp.end();i++){
            if(i->first==j->first){
                if(i->second!=j->second){
                    cout<<0<<endl;
                    flag=1;
                    break;
                }
            }
            else{
                cout<<0<<endl;
                flag=1;
                break;
            }
            j++;
        }
        if(flag==0){
            cout<<1<<endl;
        }
    }
    return 0;
}