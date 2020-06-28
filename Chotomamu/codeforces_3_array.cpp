#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,changes=0;
        cin>>n;
        int arr[n];
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==0){
                arr[i]=arr[i]+1;
                changes++;
            }
            sum=sum+arr[i];
        }
        if(sum==0){
            changes++;
        }
        cout<<changes<<endl;
    }
}