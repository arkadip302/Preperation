#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        v.push_back(t);
    }
    sort(v.begin(),v.end());
    for(auto i=v.rbegin();i!=v.rend();i++){
        cout<<*i<<" ";
    }
    return 0;
}