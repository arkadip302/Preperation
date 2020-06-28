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
        map<int, int> mp;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            v.push_back(arr[i]);
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < n; i++)
        {
            auto itr = find(v.begin(), v.end(), arr[i]);
            cout << (distance(v.begin(), find(v.begin(), v.end(), arr[i]))) << " ";
        }
        cout << endl;
    }
}