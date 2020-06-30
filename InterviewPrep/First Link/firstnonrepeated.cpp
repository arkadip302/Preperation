#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    map<char, int> mp;
    for (int i = 0; i < s.length(); i++)
    {
        mp[s[i]]++;
    }
    for (auto i = mp.begin(); i != mp.end(); i++)
    {

        if (i->second == 1)
        {
            cout << i->first << endl;
            break;
        }
    }
}