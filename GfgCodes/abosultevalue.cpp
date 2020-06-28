#include <iostream>
#include <set>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int arr[n];
        cin >> n;
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] < 0)
            {
                s.insert((-1) * arr[i]);
            }
            else
            {
                s.insert(arr[i]);
            }
        }
        cout << s.size() << endl;
    }
}
