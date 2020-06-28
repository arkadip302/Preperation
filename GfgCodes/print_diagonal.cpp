#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
            }
        }
        int count;
        cout<<arr[0][0]<<" ";
        if(n>2)
            count=2*n-3;
        else{
            count=2*n-3;
        }
        int i=0,j=1;
        while(count--){
            //cout<<count<<endl;
            if(j<n){
                int temp_j=j;
                int temp_i=i;
                while(temp_j>-1){
                    //cout<<" temp value"<<temp<<endl;
                    cout<<arr[temp_i++][temp_j]<<" ";
                    temp_j--;
                }
                j++;
            }    
            else{
                i++;
                int temp_j=n-1;
                int temp_i=i;
                while(temp_j!=i-1){
                    cout<<arr[temp_i++][temp_j--]<<" ";
                }
            }
        }
        cout<<arr[n-1][n-1]<<endl;;
    }
}