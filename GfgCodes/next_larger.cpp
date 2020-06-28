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
        vector<int> v;
        v.push_back(-1);
        stack<int> st;
        st.push(arr[n - 1]);
        for (int i = n - 2; i >= 0; i--)
        {
            if (arr[i] < st.top())
            {
                v.push_back(st.top());
                st.push(arr[i]);
            }
            else
            {
                st.pop();
                while (st.empty() != true)
                {
                    if (arr[i] < st.top())
                    {
                        v.push_back(st.top());
                        st.push(arr[i]);
                    }
                    else
                    {
                        st.pop();
                    }
                }
            }
        }
        for (auto i = v.rbegin(); i != v.rend(); ++i)
        {
            cout << *i << " ";
        }
        cout << endl;
    }
}