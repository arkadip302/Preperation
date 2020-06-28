#include<bits/stdc++.h>
using namespace std;
bool comparepair(pair<int,int> &a,pair<int,int> &b){
  if(a.second==b.second){
    return (a.first<b.first);
  }
  else{
    return (a.first>b.first);
  }
}
int main(){
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    map<int,int>mp1;
    pair<int,int>p[mp1.size()];
    for(int i=0;i<n;i++){
      mp1[arr[i]]++;
    }
    int yo=0;
    for(auto i=mp1.begin();i!=mp1.end();i++){
      p[yo++]=make_pair(i->first,i->second);
    }
    sort(p,p+mp1.size(),comparepair);
    for(auto i=0;i<mp1.size();i++){
      int temp=0;
      while(temp++<p[i].second)
      cout<<p[i].first<<" ";
    }
  }
  return 0;
}
