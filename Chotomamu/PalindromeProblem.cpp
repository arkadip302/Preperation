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
        }
        int f = 0;
        for (int i = 0; i < n-1; i++)
        {
            f = 0;
            int temp = i;
            for (int j = n - 1; j > temp; j--)
            {
                if (arr[temp] != arr[j])
                {
                    f = 1;
                    break;
                }
                else
                {
                    temp++;
                }
            }
            if (f == 0)
            {
                cout << "YES" << endl;
                break;
            }
        }
        if (f == 1)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}