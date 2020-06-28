#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n],count_arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int count=1,z=1;
        cout<<"1"<<" ";
        for(int i=1;i<n;i++){
            count=1;
            for(int j=i-1;j>=0;j--){
                if(arr[j]<arr[i]){
                    count++;
                }
                else{
                    break;
                }
            }
            cout<<count<<" ";
        }
        cout<<endl;
    }
}