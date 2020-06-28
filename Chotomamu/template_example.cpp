#include<bits/stdc++.h>
#include<string>
using namespace std;
template<typename T>
void mysort(T arr[],int n){
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={3,4,2,7,5,1};
    string s[]={"arka","dip","jana","ark"};
    mysort<int>(arr,6);
    mysort<string>(s,4);
    return 0;
}