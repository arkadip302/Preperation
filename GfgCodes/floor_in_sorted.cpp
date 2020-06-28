#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long n, x;
        int flag = 0;
        cin >> n >> x;
        long arr[n];
        for (long i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        while (x--)
        {
            auto i = find(arr, arr + n, x);
            if (i != arr + n)
            {
                cout << (distance(arr, find(arr, arr + n, x)) + 1) << endl;
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << -1 << endl;
        }
    }
    return 0;
}