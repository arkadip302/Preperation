#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, flag = 0, count = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for(int i=1;i<n;i++)
            arr[i]+=arr[i-1];
        for (int i = 0; i < n; i++)
        {
            
        }
            cout << count << endl;
    }
}