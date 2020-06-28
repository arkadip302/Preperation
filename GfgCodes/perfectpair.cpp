#include <bits/stdc++.h>
using namespace std;
int sumofDigit(int n)
{
    int sum;
    for (sum = 0; n > 0; sum += n % 10, n /= 10)
        ;
    return sum;
}
int findSum(vector<int> arr, int n)
{

    unordered_map<int, int> m;
    int result = -1;

    for (int i = 0; i < n; i++)
    {

        int sum = sumofDigit(arr[i]);

        if (m[sum] != 0)
        {
            result = max(result, m[sum] + arr[i]);
        }
        m[sum] = max(m[sum], arr[i]);
    }
    return result;
}
int main()
{
    int t;

    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> m;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            m.insert({arr[i], sumofDigit(arr[i])});
        }
        /*int max = -1;
        for (auto i = m.begin(); i != m.end(); ++i)
        {
            for (auto j = i; j != m.end(); ++j)
            {
                if (j != i)
                {
                    if (j->second == i->second)
                    {
                        if (j->first + i->first > max)
                        {
                            max = j->first + i->first;
                        }
                    }
                }
            }
        }
        cout << max << endl;*/
    }
}