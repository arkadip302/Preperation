#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a;
        cin >> n >> a;
        string s;
        long int arr[a];
        if (n % 10 == 0)
        {
            n = n / 10;
        }
        for (int i = 1; i <= a; i++)
        {
            arr[i - 1] = pow(n, i);
            //cout << arr[i - 1] << endl;
        }
        for (int i = 0; i < a; i++)
        {
            s = s + to_string(arr[i]);
        }
        int count = 0;
        sort(s.begin(), s.end());
        string s1;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != '0')
            {
                s1 = s1 + s[i];
            }
        }
        cout << s1 << endl;
    }
}