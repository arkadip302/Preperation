#include <bits/stdc++.h>
using namespace std;
void permutation(string str, int l, int r)
{
    if (l == r)
    {
        cout << str << endl;
        return;
    }
    for (int i = l; i <= r; i++)
    {
        char temp = str[l];
        str[l] = str[i];
        str[i] = temp;
        permutation(str, l + 1, r);
        temp = str[l];
        str[l] = str[i];
        str[i] = temp;
    }
}
int main()
{
    string s;
    getline(cin, s);
    permutation(s, 0, s.length() - 1);
}
