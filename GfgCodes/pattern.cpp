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
        getline(cin, s);
        int count = 0;
        int i = 0;
        while (i < s.size())
        {
            if (s[i] == '1' && i + 2 < s.size() && s[i + 1] == '0')
            {
                int temp = i + 2;
                while (s[temp] != '1')
                {
                    temp++;
                }
            }
        }
    }
}
