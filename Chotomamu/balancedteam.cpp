#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int m=arr[n-1];
        int count=1;
        for(int i=n-2;i>=0;i--){
            if(m-arr[i]<=5){
                count++;
            }
        }
        cout<<count<<endl;
    }
}