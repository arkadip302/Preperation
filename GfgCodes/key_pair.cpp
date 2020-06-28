#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, flag = 0;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        int i = 0;
        int j = n - 1;
        while (i < j)
        {
            int sum = arr[i] + arr[j];
            if (sum != x)
            {
                if (sum > x)
                {
                    j--;
                }
                else
                {
                    i++;
                }
            }
            else
            {
                cout << "YES" << endl;
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            cout << "NO" << endl;
    }
}