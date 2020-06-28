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
        int count = 1, min = arr[n - 1];
        for (int i = n - 2; i > 0; i--)
        {
            if (min > arr[i])
            {
                count++;
                min = arr[i];
            }
        }
        cout << count << endl;
    }
}
checktree(preorder + 1, inorder, postorder, idx);
checktree(preorder + idx + 1, inorder + idx + 1, postorder + idx, len - idx - 1);