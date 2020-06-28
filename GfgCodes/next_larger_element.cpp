#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int flag=0;
        for(int i=0;i<n;i++){
            flag=0;
            for(int j=i+1;j<n;j++){
                if(arr[j]>arr[i]){
                    cout<<arr[j]<<" ";
                    flag=1;
                    break;
                }
            }
            if(flag==0)
                    cout<<"-1 ";
        }
        if(flag==1)
        cout<<-1<<endl;
    }
}
