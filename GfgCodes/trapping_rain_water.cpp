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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int store = 0;
        for (int i = 1; i < n - 1; i++)
        {
            //    cout<<"for "<<arr[i]<<endl;
            int find = arr[i], rightmax = arr[i], leftmax = arr[i];
            for (int j = i - 1; j >= 0; j--)
            {
                if (leftmax < arr[j])
                {
                    leftmax = arr[j];
                }
            }
            //  cout<<"leftmax "<<leftmax<<endl;
            for (int j = i + 1; j < n; j++)
            {
                if (rightmax < arr[j])
                {
                    rightmax = arr[j];
                }
            }
            // cout<<"rightmax "<<rightmax<<endl;
            if (rightmax > leftmax)
            {
                store = store + leftmax - arr[i];
            }
            else
            {
                store = store + rightmax - arr[i];
            }
        }
        cout << store << endl;
    }
}