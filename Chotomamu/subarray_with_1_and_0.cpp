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
            if (arr[i] == 0)
            {
                arr[i] = -1;
            }
        }
        unordered_map<int, int> mp;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
            mp[sum]++;
        }
        int count = 0;
        for (auto i = mp.begin(); i != mp.end(); i++)
        {
            if (i->second > 1)
            {
                count += (i->second * (i->second - 1) / 2);
            }
        }
        if (mp.find(0) != mp.end())
            count += mp[0];
        cout << count << endl;
    }
}