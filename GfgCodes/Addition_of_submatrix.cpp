#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int arr[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }
        int posr,posc,pos1r,pos1c;
        cin>>posr>>posc>>pos1r>>pos1c;
        //cout<<arr[posr-1][posc-1]<<" "<<arr[pos1r-1][pos1c-1]<<endl;
        int sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if((i>=posr-1 && i<=pos1r-1) && (j>=posc-1 && j<=pos1c-1)){
                    sum=sum+arr[i][j];
                }
            }
        }
        cout<<sum<<endl;
    }
}