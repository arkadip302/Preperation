#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n;
        cin >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int temp = 0;
        int count = 1, min_count = 999;
        if (n == 1)
        {
            if (arr[0] < k)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << 1 << endl;
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                temp = arr[i];
                count = 1;
                for (int j = i + 1; j < n; j++)
                {
                    if (temp > k)
                    {
                        if (count < min_count)
                        {
                            min_count = count;
                        }
                        temp = arr[j];
                        count = 1;
                    }
                    else
                    {
                        temp = temp + arr[j];
                        count++;
                    }
                }
            }
            if (arr[n - 1] < k)
                cout << min_count << endl;
            else
            {
                cout << 1 << endl;
            }
        }
    }
}