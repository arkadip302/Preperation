#include <bits/stdc++.h>
using namespace std;
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
            arr[i] = arr[i] * arr[i];
        }
        int flag = 0;
        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        for (int i = n - 1; i >= 2; i--)
        {
            int j = 0;
            int z = n - 1;
            while (j < z)
            {
                if (arr[j] + arr[z] == arr[i])
                {
                    cout << "Yes" << endl;
                    flag = 1;
                    break;
                }
                else if (arr[j] + arr[z] < arr[i])
                {
                    j++;
                }
                else
                {
                    z--;
                }
            }
            if (flag == 1)
            {
                break;
            }
        }
        if (flag == 0)
        {
            cout << "No" << endl;
        }
    }
}