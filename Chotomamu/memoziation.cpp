/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    int temp = 0;
    if (n == 1)
        cout << 0 << " " << 1 <<" "<<1<<" ";
    else if (n == 0)
    {
        cout << 1 << " ";
    }
    else
    {
        cout << 0 << " " << 1 << " ";
        while (i + temp <= n)
        {
            cout << i + temp << " ";
            //temp=i;
            int t = i;
            i = i + temp;
            temp = t;
        }
    }
}
*/