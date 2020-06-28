#include <bits/stdc++.h>
using namespace std;
int partition(int l, int h, int arr[])
{
}
int findklargest(int low, int high, int find, int arr[])
{
    int index = partition(low, high, arr);
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    int temp = findklargest(0, n - 1, k - 1, arr);
    cout << temp << endl;
}