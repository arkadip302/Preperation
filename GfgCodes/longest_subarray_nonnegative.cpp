#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0, result = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            //cout<<sum<<" "<<arr[i]<<endl;
            if (sum + arr[i] >= sum)
            {
                sum += arr[i];
                count++;
                //cout<<" here count"<<count<<endl;
            }
            else
            {
                //  cout<<" here result"+result<<endl;
                if (result < count)
                    result = count;
                count = 0;
                sum = 0;
            }
        }
        if (result < count)
            cout << count << endl;
        else
        {
            cout << result << endl;
        }
    }
}