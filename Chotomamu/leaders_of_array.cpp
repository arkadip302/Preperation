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
        vector<int> v;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int max = arr[n - 1];
        v.push_back(max);
        for (int i = n - 2; i >= 0; i--)
        {
            if (arr[i] >= max)
            {
                v.push_back(arr[i]);
                max = arr[i];
            }
        }
        reverse(v.begin(), v.end());
        for (auto i = v.begin(); i != v.end(); i++)
        {
            cout << *i << " ";
        }
        cout << endl;
    }
}