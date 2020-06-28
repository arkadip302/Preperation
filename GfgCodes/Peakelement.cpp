#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(arr[0]>arr[1]){
        cout<<arr[0]<<endl;
        return 0;
    }
    else if(arr[n-1]>arr[n-2]){
        cout<<arr[n-1]<<endl;
        return 0;
    }
    for(int i=1;i<n-1;i++){
        if(arr[i-1]<arr[i] && arr[i]>arr[i+1]){
            cout<<arr[i]<<endl;
            return 0;
        }
    }

}