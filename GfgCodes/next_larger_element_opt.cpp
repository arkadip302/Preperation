#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long n;
        cin>>n;
        long arr[n];
        long arr1[n];
        arr1[n-1]=-1;
        for(int i=0;i<n;i++)
            cin>>arr[i];
        stack<int> st;
        st.push(arr[n-1]);
        for(long i=n-2;i>=0;i--){
            while(st.empty()==false && st.top()<=arr[i])
                st.pop();
            arr1[i]=(st.empty())?-1:st.top();
            st.push(arr[i]);
        }
        for(long i=0;i<n;i++)
            cout<<arr1[i]<<" ";
        cout<<endl;
    }
}