#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int flag=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=1;i<n;i++){
        flag=0;
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
            flag=1;
        }
        arr[j+1]=key;   
        if(flag==1){
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
        }
    }
}