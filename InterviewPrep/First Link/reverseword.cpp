#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    vector<string> store;
    string words;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != ' ')
        {
            words = words + s[i];
        }
        if (s[i] == ' ' && words != "")
        {
            store.push_back(words);
            words = "";
        }
    }
    store.push_back(words);
    for (auto i = store.rbegin(); i != store.rend(); i++)
    {
        cout << *i << " ";
    }
}