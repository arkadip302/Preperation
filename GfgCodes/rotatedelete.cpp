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
        vector<int> v;
        int c;
        for (int i = 0; i < n; i++)
        {
            cin >> c;
            v.push_back(c);
        }
        int j = 0;
        while (v.size() != 1)
        {
            if (j >= v.size())
                j = v.size();
            rotate(v.begin(), v.begin() + v.size() - 1, v.end());
            v.erase(v.begin() + v.size() - ++j);
        }
        auto i = v.begin();
        cout << *i << endl;
    }
}