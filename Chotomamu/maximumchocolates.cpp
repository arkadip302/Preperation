#include <bits/stdc++.h>
using namespace std;

else if (um.find(currentrem) == um.end())
    um[currentrem] = i;

else

    if (max < (max_sum[i] - max_sum[um[currentrem]]))
        max = max_sum[i] - max_sum[um[currentrem]];
int maxNumOfChocolates(int arr[], int n, int k)
{
    unordered_map<int, int> um;
    int max_sum[n], currentrem;
    int max = 0;
    max_sum[0] = arr[0];
    for (int i = 1; i < n; i++)
        max_sum[i] = max_sum[i - 1] + arr[i];

    for (int i = 0; i < n; i++)
    {
        currentrem = max_sum[i] % k;

        if (currentrem == 0)
        {

            if (maxSum < max_sum[i])
                maxSum = max_sum[i];
        }
    }

    return (max / k);
}

int main()
{
    int arr[] = {2, 7, 6, 1, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    cout << "Maximum number of chocolates: "
         << maxNumOfChocolates(arr, n, k);
    return 0;
}
