#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, flag = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum = sum + arr[j];
            if (sum == 0)
            {
                cout << i + 1 << " " << j + 1 << endl;
                flag = 1;
                break;
            }
            if (flag == 1)
                break;
        }
    }
    if (flag == 0)
        cout << -1 << endl;
}