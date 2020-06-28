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
        int arr[n], arr1[n / 2], arr2[n / 2 + 1];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (i < n / 2)
                arr1[i] = arr[i];
            else
            {
                arr2[i - n / 2] = arr[i];
            }
        }
        if (n % 2 == 0)
        {
            for (int i = 0, j = 0, z = 0; i < n; i++)
            {
                if (i % 2 == 0)
                {
                    arr[i] = arr2[n / 2 - j - 1];
                    j++;
                }
                else
                {
                    arr[i] = arr1[z++];
                }
            }
        }
        else
        {
            for (int i = 0, j = 0, z = 0; i < n; i++)
            {
                if (i % 2 == 0)
                {
                    arr[i] = arr2[n / 2 - j];
                    j++;
                }
                else
                {
                    arr[i] = arr1[z++];
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}