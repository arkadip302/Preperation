#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,flag=0,count=0;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
        sum=sum+arr[j];
        if(sum==k){
           if(count<j-i+1) 
               count=j-i+1;
            flag=1;
            break;
                }
            }
        }
        cout<<count<<endl;
}