#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, flag = 0;
        cin >> k >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            //cout << "for " << arr[i] << endl;
            if (mp.find(arr[i]) == mp.end())
            {
                //cout << "here" << endl;
                mp.insert({arr[i], i});
            }
            else
            {
                auto j = mp.find(arr[i]);
                //cout << j->second << endl;
                if (i - j->second <= k)
                {
                    flag = 1;
                    break;
                }
                else
                {
                    j->second = i;
                }
            }
        }
        if (flag == 0)
        {
            cout << "False" << endl;
        }
        else
        {
            cout << "True" << endl;
        }
    }
}