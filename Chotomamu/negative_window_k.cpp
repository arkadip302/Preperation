#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t,k,j,f=1;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cin>>k;
        for(int i=0;i<n;i++){
            j=0,f=1;
            while(j<k){
                if(i+k>n){
                    f=2;
                    break;
                }
                if(arr[i+j]<0){
                    cout<<arr[i+j]<<" ";
                    f=0;  
                    break;
                }
                j++;
            }
            if(f==2){
                break;
            }
            if(f!=0){
                cout<<0<<" ";
            }
            
        }
        cout<<endl;
    }
}