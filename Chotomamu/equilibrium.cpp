#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 1, result = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        /*for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
            cout<<endl;*/
        for (int i = 1; i < n; i++)
        {
            if (arr[i] - arr[i - 1] == 0)
            {
            }
            else if (arr[i] - arr[i - 1] != 1)
            {
                if (result < count)
                    result = count;
                count = 1;
            }
            else
                count++;
        }
        if (result < count)
            cout << count << endl;
        else
        {
            cout << result << endl;
        }
    }
}