#include <bits/stdc++.h>
using namespace std;
/*int fun(int x,int y)
{
    return ((x|y)-y);
}*/
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        n=2*n;
        //cout<<n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        cout<<(arr[(n/2)]-arr[(n/2)-1])<<endl;
    }
    return 0;
}