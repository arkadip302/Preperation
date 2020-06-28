#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    string f;
    getline(cin,f);
    while(t--){
       // cout<<"a"<<endl;
        string s;
        getline(cin,s);
        stack<char>st;
        int count=0,count_max=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(s[i]);
            }
            else {
                if(st.empty()==false){
                  //  cout<<st.size()<<endl;
                    //cout<<st.top()<<endl;
                    st.pop();
                    count+=2;
                    //cout<<"printed "<<count<<endl;
                }
                else{
                    count=0;
                }
            }
            if(count_max<count)
                count_max=count;
        }
        cout<<count_max<<endl;
    }

}