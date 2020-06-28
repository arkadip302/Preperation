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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int count = 0, count_max = 0;
        for (int i = 0; i < n; i++)
        {
            int sum = arr[i];
            count = 1;
            if (sum == k && count_max == 0)
            {
                count_max = 1;
            }
            for (int j = i + 1; j < n; j++)
            {
                sum += arr[j];
                count++;
                if (sum == k)
                {
                    if (count > count_max)
                    {
                        count_max = count;
                    }
                }
            }
        }
        cout << count_max << endl;
    }
}