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
        vector<int> s, s1;
        int c;
        for (int i = 0; i < n; i++)
        {
            cin >> c;
            if (i % 2 == 0)
            {
                s.push_back(c);
            }
            else
            {
                s1.push_back(c);
            }
        }
        sort(s.begin(), s.end());
        sort(s1.begin(), s1.end(), greater<int>());
        for (auto i = s.begin(); i != s.end(); ++i)
        {
            cout << *i << " ";
        }
        for (auto j = s1.begin(); j != s1.end(); ++j)
        {
            cout << *j << " ";
        }
        cout << endl;
    }
}