#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<pair<int,int>>v;
    int n,x,y;
    int sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    for(auto i=0;i!=v.size();i++){
        sum=sum+v[i].second;
    }
    cout<<sum;
}