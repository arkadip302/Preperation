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
        if (n == 1)
        {
            cout << arr[0] << endl;
        }
        else if (n == 2)
        {
            cout << -1 << endl;
        }
        else
        {
            for (int i = 1; i < n; i++)
            {
                int suml = 0, sumr = 0;
                for (int j = i - 1; j >= 0; j--)
                {
                    suml = suml + arr[j];
                }
                for (int z = i + 1; z < n; z++)
                {
                    sumr = sumr + arr[z];
                }
                if (suml == sumr)
                {
                    cout << i + 1 << endl;
                    f = 1;
                    break;
                }
            }
            if (f == 0)
            {
                cout << -1 << endl;
            }
        }
    }
}