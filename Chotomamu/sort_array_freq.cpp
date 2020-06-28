#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,res=0;
        cin>>n;
        int arr[n],arr1[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int count=1;
        for(int i=0;i<n-1;i++){
            if(arr[i]!=arr[i+1]){
                if(res<count)
                    res=count;
            }
            else
            {
                count++;
            }
            
        }
    }
}