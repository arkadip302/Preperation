#include <bits/stdc++.h>
using namespace std;
int kadane(int arr[], int n)
{
    int res = arr[0], max_ele = arr[0];
    for (int i = 1; i < n; i++)
    {
        max_ele = max(arr[i], arr[i] + max_ele);
        res = max(res, max_ele);
    }
    return res;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        //using kadane algo to find the sum of maximum sub array not considering the circular part
        int res = kadane(arr, n);
        if (res < 0)
        {
            cout << res << endl;
            return;
        }
        //circular sum
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
            arr[i] = -arr[i];
        }
        int res1 = sum + kadane(arr, n);
        cout << max(res, res1) << endl;
    }
}