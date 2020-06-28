#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            int max=0;
            int temp=k;
            if(i+temp>n){
                break;
            }
            while(temp){
                if(max<arr[i+temp-1]){
                    max=arr[i+temp-1];
                }
                --temp;
            }
            cout<<max<<" ";
        }
    }
}