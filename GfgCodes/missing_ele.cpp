#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,flag=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
         //   auto itr=find(arr,arr+i,arr[i]);
          //  if(i>0 &&flag!=1 &&itr!=arr+i){
           //     int f=itr-arr;
            //    cout<<arr[f]<<" ";
            //    flag=1;
            //}
        }
        sort(arr,arr+n);
        cout<<endl;
        for(int i=0;i<n;i++){
            if(arr[i]==arr[i+1]){
                cout<<arr[i]<<" ";
                break;
            }
        }
        flag=0;
        for(int i=0;i<n-1;i++){
            if(arr[i+1]-arr[i]>1){
                cout<<arr[i]+1<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0){
            if(arr[0]==1){
                cout<<arr[n-1]+1<<endl;
            }
            else{
                cout<<arr[0]-1<<endl;
            }
        }
    }
}
