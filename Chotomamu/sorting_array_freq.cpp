#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    int max = 0, index;
    while (max != -1)
    {
        for (auto i = mp.begin(); i != mp.end(); i++)
        {
            if (max < i->second)
                max = i->second;
            index = i->first;
        }
        auto itr = mp.find(index);
        itr->second = -1;
        while (max--)
            cout << index << " ";
    }
}