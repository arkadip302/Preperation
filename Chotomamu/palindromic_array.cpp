#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, count = 0, f = 0, t;
  cin >> t;
  while (t--)
  {
    count = 0;
    f = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
    for (int i = 0; i < n / 2; i++)
    {
      if (arr[i] != arr[n - i - 1])
      {
        if (arr[i + 1] + arr[i] == arr[n - i - 1])
        {
          arr[i] = arr[i] + arr[i + 1];
          i++;
          count++;
        }
        else if (arr[n - i - 1] + arr[n - i - 2] == arr[i])
        {
          arr[i] = arr[i] + arr[i + 1];
          i++;
          count++;
        }
        else
        {
          cout << n - 1 << endl;
          f = 1;
          break;
        }
      }
    }
    if (f != 1)
      cout << count;
  }
}
