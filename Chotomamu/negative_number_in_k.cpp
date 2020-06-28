#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cin >> k;
        for (int i = 0; i <= n - k; i++)
        {
            int temp = 0;
            while (temp < k)
            {
                if (arr[temp + i] < 0)
                {
                    cout << arr[temp + i] << " ";
                    break;
                }
                temp++;
            }
            if (temp == k)
            {
                cout << 0 << " ";
            }
        }
    }
}