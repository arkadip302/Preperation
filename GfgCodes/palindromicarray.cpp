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
        int i=0,j=n-1,count=0;
        while(j>=i){
            if(arr[j]<arr[i]){
                j--;
                arr[j]+=arr[j+1];
                count++;
                arr[j+1]=0;
            }
            else if(arr[i]<arr[j]){
                i++;
                arr[i]+=arr[i-1];
                count++;
                arr[i-1]=0;
            }
            else{
                i++;
                j--;
            }
            int flag=0;
        }
        cout<<count<<endl;
    }
}