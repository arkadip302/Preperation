#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n+1];
        arr[n]=-99;
        vector<int>v1,v2;
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int sum=0,max_sum=0;
        for(int i=0;i<=n;i++){
            if(arr[i]>=0){
                sum=sum+arr[i];
                v1.push_back(arr[i]);
            }
            else{
                cout<<"sum "<<sum<<endl;
                if(max_sum<sum){
                    max_sum=sum;
                    v2=v1;
                    v1.clear();
                    sum=0;
                }
                else if(max_sum==sum){
                    if(v1.size()>v2.size()){
                        v2=v1;
                        v1.clear();
                        sum=0;
                    }
                    else {
                        v1.clear();
                        sum=0;
                    }
                }
                else{
                    v1.clear();
                    sum=0;
                }
            }
        }
        for(int i=0;i<v2.size();i++){
            cout<<v2[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}