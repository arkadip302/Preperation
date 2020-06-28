#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string s, s1;
    getline(cin, s);
    while (t--)
    {
        getline(cin, s);
        set<char> s1;
        set<char> s2;
        for (int i = 0; i < s.size(); i++)
        {
            s1.insert(s[i]);
        }
        int size_s = 0, max_size_s = 0;
        s2 = s1;
        for (int i = 0; i < s.size(); i++)
        {
            if (s2.find(s[i]) != s2.end())
            {
                size_s++;
                s2.erase(s[i]);
            }
            if (s2.empty() == true && max_size_s < size_s)
            {
                max_size_s = size_s;
                s2 = s1;
            }
        }
    }
}