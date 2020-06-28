#include <bits/stdc++.h>
using namespace std;
int main()
{   int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        stack<int> st;
        st.push(0);
        cout << 1 << " ";
        for (int i = 1; i < n; i++)
        {
            while (st.empty() == false && arr[st.top()] <= arr[i]){   ///removes all element in stack less than that number
                st.pop();
            }
            int num=(st.empty())?(i+1):(i-st.top());
            cout<<num<<" ";
            st.push(i);
        }
    }
}