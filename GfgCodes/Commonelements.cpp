#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n1,n2,n3,flag=0;
        cin>>n1>>n2>>n3;
        int arr1[n1],arr2[n2],arr3[n3],arr4[n1];
        for(int i=0;i<n1;i++)
            cin>>arr1[i];
        for(int i=0;i<n2;i++)
            cin>>arr2[i];
        for(int i=0;i<n3;i++)
            cin>>arr3[i];
        int j=0;
        for(int i=0;i<n1;i++){
           // cout<<"here "<<arr1[i]<<endl;
            auto itr=find(arr2,arr2+n2,arr1[i]);
            auto itr1=find(arr3,arr3+n3,arr1[i]);
            if((itr!=arr2+n2) && (itr1!=arr3+n3)){
                auto it=find(arr4,arr4+n1,arr1[i]);
                //cout<<"here "<<arr1[i]<<endl;
                if(it==arr4+n1){
                    arr4[j++]=arr1[i];
                    //cout<<"here1"<<endl;
                    cout<<arr1[i]<<" ";
                    flag=1;
                }
            }
        }
        if(flag==0){
            cout<<-1;
        }
        cout<<endl;
    }
}