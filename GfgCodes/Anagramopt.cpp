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
        int ind = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ' ')
            {
                ind = i;
                break;
            }
        }
        s1 = s.substr(ind + 1);
        s.erase(ind);
        int flag = 0;
        if (s.size() == s1.size())
        {
            int count[256];
            for (int i = 0; i < 256; i++)
            {
                count[i] = 0;
            }
            for (int i = 0; i < s.size(); i++)
            {
                count[s[i]]++;
            }
            for (int i = 0; i < s1.size(); i++)
            {
                count[s1[i]]--;
            }
            for (int i = 0; i < 256; i++)
            {

                if (count[i] != 0)
                {
                    cout << "NO" << endl;
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                cout << "YES" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}