#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll rem = 0;
        ll spent = 0;
        while (n >= 10)
        {
            rem = n % 10;
            spent += n - rem;
            n = n / 10 + rem;
        }
        spent += n;
        cout << spent << endl;
    }
    return 0;
}