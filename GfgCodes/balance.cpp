    #include<bits/stdc++.h>
    using namespace std;
    int main(){
        int t;
        cin>>t;
        string t1;
        getline(cin,t1);
        while(t--){
            string s;
            stack<char>st;
            getline(cin,s);
            if(s[0]=='}' ||s[0]==')' || s[0]==']'){
                cout<<"not balanced"<<endl;
                continue;
            }
            for(int i=0;i<s.size();i++){
                if(s[i]=='{' || s[i]=='('|| s[i]=='['){
                    //cout<<"1"<<endl;
                    st.push(s[i]);
                }
                else if(s[i]=='}' && st.top()=='{'){
                    //cout<<"2"<<endl;
                    st.pop();
                }
                else if(s[i]==')' && st.top()=='('){
                    //cout<<"3"<<endl;
                    st.pop();
                }
                else if(s[i]==']' && st.top()=='['){
                    //cout<<"4"<<endl;
                    st.pop();
                }
                else
                {
                    break;
                }
                
            }
            if(st.size()==0){
                cout<<"balanced"<<endl;
            }
            else
            {
                cout<<"not balanced"<<endl;
            }
        }
    }