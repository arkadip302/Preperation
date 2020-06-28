#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string s;
    getline(cin, s);
    while (t--)
    {
        int n;
        cin >> n;
        int flag = 0;
        getline(cin, s);
        getline(cin, s);
        int count[256];
        for (int i = 0; i < 256; i++)
        {
            count[i] = 0;
        }
        for (int i = 0; i < s.size(); i++)
        {
            count[s[i]]++;
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (count[s[i]] == 1)
            {
                cout << s[i] << endl;
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << -1 << endl;
        }
    }
}