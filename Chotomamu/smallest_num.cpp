#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        stack<int>st;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<-1<<" ";
        st.push(arr[0]);
        for(int i=1;i<n;i++){
            //cout<<st.top();
            if(arr[i]>st.top()){
                cout<<st.top()<<" ";
            }
            else{
                st.pop();
                while(!st.empty()){
                    if(arr[i]>st.top()){
                        cout<<st.top()<<" ";
                        break;
                    }
                    else{
                        st.pop();
                    }
                }
                if(st.empty()){
                    cout<<-1<<" ";
                }
            }
            st.push(arr[i]);
        }
        cout<<endl;
    }
}