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
        getline(cin, s);
        getline(cin, s);
        int freq[26];
        for (int i = 0; i < 26; i++)
        {
            freq[i] = 0;
        }
        string s1;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != ' ')
            {
                s1 = s1 + s[i];
            }
        }
        s = s1;
        queue<char> q;
        for (int i = 0; i < s.size(); i++)
        {
            freq[s[i] - 97]++;
            q.push(s[i]);
            while (!q.empty())
            {
                if (freq[q.front() - 97] > 1)
                {
                    q.pop();
                }
                else
                {
                    cout << q.front() << " ";
                    break;
                }
            }
            if (q.empty())
            {
                cout << -1 << " ";
            }
        }
        cout << endl;
    }
}