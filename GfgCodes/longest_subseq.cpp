#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        int count=1,max_count=0,sum=arr[0];
        for(int i=1;i<n;i++){
            if(sum+1==arr[i]){
                count++;
                sum++;
            }
            else{
                sum=arr[i];
                if(max_count<count){
                    max_count=count;
                    cout<<arr[i]<<" here is";
                }
                count=1;
            }
        }
        cout<<max_count<<endl;
    }
}