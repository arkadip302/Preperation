/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n], cum[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (i == 0)
            {
                cum[0] = arr[0];
            }
            else
            {
                cum[i] = cum[i - 1] + arr[i];
            }
        }
        int count_max = 0;
        for (int i = 0; i < n; i++)
        {
            if (cum[i] == k)
            {
                if (count_max < i + 1)
                {
                    count_max = i + 1;
                }
            }
            else if (cum[i] > k)
            {
                for (int j = 0; j < i; j++)
                {
                    if (cum[i] - k == cum[j])
                    {
                        if (count_max < i - j)
                        {
                            count_max = i - j;
                        }
                        break;
                    }
                }
            }
        }
        cout << count_max << endl;
    }
}*/
//Both Optimized
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n], cum[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (i == 0)
            {
                cum[0] = arr[0];
            }
            else
            {
                cum[i] = cum[i - 1] + arr[i];
            }
        }
        int count_max = 0, sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum = sum + arr[i];
            if (sum == k)
            {
                if (count_max < i + 1)
                {
                    count_max = i + 1;
                }
            }
            else if (sum > k)
            {
                for (int j = 0; j < i; j++)
                {
                    if (sum - k == cum[j])
                    {
                        if (count_max < i - j)
                        {
                            count_max = i - j;
                        }
                        break;
                    }
                }
            }
        }
        cout << count_max << endl;
    }
}