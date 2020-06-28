#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, flag = 0;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for (int i = 1; i < n; i++)
        { //prefix array
            arr[i] = arr[i] + arr[i - 1];
        }
        auto itr = find(arr, arr + n, k);
        if (itr != arr + n)
        {
            cout << 1 << " " << itr - arr + 1 << endl;
            flag = 1;
        }
        if (flag == 0)
        {
            for (int i = 0; i < n; i++)
            {
                int temp = arr[i];
                auto itr = find(arr, arr + n, temp - k);
                if (itr != arr + n)
                {
                    cout << distance(arr, itr) + 2 << " " << i + 1 << endl;
                    flag = 1;
                    break;
                }
                if (flag == 1)
                    break;
            }
        }
        if (flag == 0)
            cout << -1 << endl;
    }
}