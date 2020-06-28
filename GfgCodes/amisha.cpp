#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << 1 << endl;
    }
    else if (n == 2)
    {
        cout << 1 << " " << 2 << endl;
    }
    else if (n == 3)
    {
        cout << 1 << " " << 2 << " " << 4 << endl;
    }
    else
    {
        cout << 1 << " " << 2 << " " << 4 << " ";
        int k = 5;
        for (int i = 3; i <= n; i++)
        { //i tells about no. of elements to print.
            if (i % 2 != 0)
            {
                int q = 1;
                cout << k << " ";
                while (q < i && k < n)
                {
                    k += 2;
                    if (k <= n)
                        cout << k << " ";
                    q++;
                }
            }
            else
            {
                int q = 1;
                cout << k << " ";
                while (q < i && k < n)
                {
                    k = k + 2;
                    if (k <= n)
                        cout << k << " ";
                    q++;
                }
            }
            if (k >= n)
            {
                return 0;
            }
            k++;
        }
    }
}