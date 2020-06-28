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
        int area = n, curr;
        for (int i = 0; i < n; i++)
        {
            curr = arr[i];
            for (int j = i - 1; j >= 0; j--)
            {
                if (arr[j] > arr[i])
                {
                    curr = curr + arr[i];
                }
                else
                {
                    break;
                }
            }
            for (int z = i + 1; z < n; z++)
            {
                if (arr[z] > arr[i])
                {
                    curr += arr[i];
                }
                else
                    break;
            }
            area = max(area, curr);
        }
        cout << area << endl;
    }
}