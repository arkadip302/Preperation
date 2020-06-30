#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, s1;
    getline(cin, s);
    getline(cin, s1);
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
                cout << "NOT ANAGRAM" << endl;
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << "ANAGRAM" << endl;
        }
    }
    else
    {
        cout << "NOT ANAGRAM" << endl;
    }
}