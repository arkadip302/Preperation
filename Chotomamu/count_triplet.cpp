#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,count=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        //sort(arr,arr+n);
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
               // if(j==i)
              //      continue;
                int sum=arr[j]+arr[i];
                auto itr=find(arr,arr+n,sum);
                if(itr!=arr+n){
                    count++;
                }
            }
        }
        if(count>0)
            cout<<count<<endl;
        else
        {
            cout<<-1<<endl;
        }
   }
    
}