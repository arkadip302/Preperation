/*Using two pointer concept  which we can reduce a O(n^2) to O(n)...In this question we tried to find the no of pairs that meet our key value*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,key;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>key;
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int *p=new int(arr[0]);
    int *q=new int(arr[n-1]);
    cout<<*p<<" "<<*q<<endl;
    int temp=n;
    while(temp--){
        cout<<"Inside"<<endl;
        cout<<*p<<" "<<*q<<" At "<<n-temp+1<<endl;
        if(*p+*q >key){
            *q=arr[temp];
        }
        else if(*p+*q<key){
            *p=arr[n-temp-1];
        }
        else{
            cout<<"Found"<<endl;
            *p=arr[n-temp-1];
            *q=arr[temp];
        }
    }
    return 0;
}