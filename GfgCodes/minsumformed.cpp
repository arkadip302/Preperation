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
        string s = "", s1 = "";
        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                s = s + to_string(arr[i]);
            }
            else
            {
                s1 = s1 + to_string(arr[i]);
            }
        }
        cout << stoi(s) + stoi(s1) << endl;
    }
}