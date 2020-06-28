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
        int sum = 0;
        while (k--)
        {
            int max = 0, ind = 0;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] > max)
                {
                    max = arr[i];
                    ind = i;
                }
            }
            sum = sum + max;
            arr[ind] = (int)(arr[ind] / 2);
        }
        cout << sum;
    }
}