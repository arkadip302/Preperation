#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    stack<int> st;
    st.push(arr[0]);
    cout << -1 << " ";
    for (int i = 1; i < n; i++)
    {
        while (st.empty() == false && st.top() <= arr[i])   ///removes all element in stack less than that number
            st.pop();
        int num=st.empty() ? -1 : st.top();
        cout <<num<<" ";
        st.push(arr[i]);
    }
}