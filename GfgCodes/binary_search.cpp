#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x1, flag = 0;
    cin >> n >> x1;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int l = 0;
    int e = n - 1;
    while (l <= e)
    {
        int mid = (int)(l + (e - l) / 2);
        if (arr[mid] > x1)
        {
            e = mid - 1;
        }
        else if (arr[mid] < x1)
        {
            l = mid + 1;
        }
        else
        {
            cout << arr[mid];
            flag = 1;
            break;
        }
    }
    cout << -1;
}