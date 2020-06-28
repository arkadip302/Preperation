#include <bits/stdc++.h>
using namespace std;
int sum(int arr[], int n)
{
    if (n == 0)
    {
        return 0;
    }
    return (arr[n - 1] + sum(arr, n - 1));
}
int main()
{
    int n;
    cin >> n;
    int arr[n], arr1[n - 1];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr1[i];
    }
    cout << sum(arr, n) - sum(arr1, n - 1);
}