//....................................................Not Possible As Same Occurance will get deleted..................................
#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  map<int,int>mp1;
  map<int,int>mp2;
  for(int i=0;i<n;i++){
    mp1[arr[i]]++;
  }
  for(auto i=mp1.begin();i!=mp1.end();i++){
    cout<<i->first<<"\t"<<i->second<<endl;
  }
  for(auto i=mp1.begin();i!=mp1.end();i++){
    mp2[i->second]=i->first;
  }
  cout<<"second one";

}
