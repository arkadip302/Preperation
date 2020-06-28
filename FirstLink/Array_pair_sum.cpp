#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, count = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> k;
    sort(arr, arr + n);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i];
    // }
    int i = 0, j = n - 1;
    while (j > i)
    {
        int temp = arr[i] + arr[j];
        if (temp == k)
        {
            count++;
            i++;
            j--;
        }
        else if (temp > k)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    cout << count;
}