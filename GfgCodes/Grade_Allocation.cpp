#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s;
        int mean=0;
        cin>>n>>s;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            mean=mean+arr[i];
        }
        if(mean==s){
            cout<<mean<<endl;
        }
        else if(mean>s){
            cout<<s<<endl;
        }
    }
}