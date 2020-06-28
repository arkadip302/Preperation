#include <bits/stdc++.h>
using namespace std;
int countSumSubsets(int arr[], int n)
{

    int odd_count = 0, even_count = 0, count = 0, x, y;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] & 1)
            odd_count += 1;
        else
            even_count += 1;
    }

    x = pow(2, even_count) - 1;
    y = pow(2, odd_count - 1) - 1;

    count = x + y + (x * y);
    return count;
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
        countSumSubsets(arr, n);
    }
    return 0;
}