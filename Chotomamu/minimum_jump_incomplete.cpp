#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int i=0,count=0,f=1;
        while(i<n-1){
            if(arr[i]==0){
                cout<<-1;
                f=0;
                break;
            }
            else
            {
                cout<<"Before "<<arr[i]<<endl;
                i=arr[i]+i;
                cout<<"After "<<arr[i]<<endl;
                cout<<endl;
                count++;
            }
        }
        if(f!=0){
            cout<<count<<endl;
        }
    }
}