#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, n1;
        cin >> n >> n1;
        int arr[n], arr1[n1], arr2[n + n1];
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            arr2[j++] = arr[i];
        }
        for (int i = 0; i < n1; i++)
        {
            cin >> arr1[i];
            arr2[j++] = arr1[i];
        }
        sort(arr2, arr2 + n + n1);
        for (int i = 0; i < n + n1; i++)
        {
            cout << arr2[i] << " ";
        }
        cout << endl;
    }
}