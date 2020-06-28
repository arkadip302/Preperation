#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, flag1 = 0, flag2 = 0;
        cin >> n;
        int arr[n];
        int odd_min, even_min;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (flag1 == 0 && arr[i] % 2 == 0)
            {
                even_min = arr[i];
                flag1 = 1;
            }
            if (flag2 == 0 && arr[i] % 2 != 0)
            {
                odd_min = arr[i];
                flag2 = 1;
            }
        }
        if (flag1 == 0 && flag2 != 0)
        {
            even_min = odd_min;
        }
        else if (flag1 != 0 && flag2 == 0)
        {
            odd_min = even_min;
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum = sum + arr[i];
        }
        if (sum % 2 != 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            if ((sum - even_min + odd_min) % 2 != 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}