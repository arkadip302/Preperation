#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n], lmax[n], rmax[n]; ///creating lmax and rmax for storing max of lrft and right
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        lmax[0] = arr[0];
        rmax[n - 1] = arr[n - 1];
        for (int i = 1; i < n; i++)
        {
            if (lmax[i - 1] < arr[i])
            {
                lmax[i] = arr[i];
            }
            else
            {
                lmax[i] = lmax[i - 1];
            }
        }
        for (int i = n - 2; i >= 0; i--)
        {
            if (rmax[i + 1] < arr[i])
            {
                rmax[i] = arr[i];
            }
            else
            {
                rmax[i] = rmax[i + 1];
            }
        }
        int store = 0;
        for (int i = 0; i < n; i++)
        {
            store = store + min(rmax[i], lmax[i]) - arr[i];
        }
        cout << store << endl;
    }
}
