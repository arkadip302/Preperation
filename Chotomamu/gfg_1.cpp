#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    string flush;
    getline(cin,flush);
    while(t--){
        int n,query;
        cin>>n>>query;
        getline(cin,flush);
        char arr[n];
        string s[query];
        string arr1[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            arr1[i]=arr[i];
        }
        for(int i=0;i<query;i++){
            getline(cin,s[i]);
        }
        for(int i=0;i<query;i++){
            if(s[i][3]=='i'){
                string t=""+s[i][12];
                string t2=""+s[i][14];
                auto itr=find(arr,arr+n,s[i][12]);
                arr1[distance(arr,itr)]=arr1[distance(arr,itr)]+s[i][14];
                itr=find(arr,arr+n,s[i][14]);
                arr1[distance(arr,itr)]=arr1[distance(arr,itr)]+s[i][12];
            }
        }
        for(int i=0;i<query;i++){
            cout<<arr1[i]<<" ";
        }

    }

}