#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, flag = 0, count = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for (int i = 0; i < n; i++)
        {
            int sum = 0;
            for (int j = i; j < n; j++)
            {
                sum = sum + arr[j];
                if (sum == 0)
                {
//                  cout<<j<<" "<<i<<" "<<endl;
                    if(count<j-i+1)
                        count=j-i+1;
                }
            }
        }
        if(count>0)
        cout<<count<<endl;
        else
            cout<<-1<<endl;
    }
}