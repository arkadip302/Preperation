#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stack<char> s_stack;
    int flag = 0;
    try
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                s_stack.push(s[i]);
            }
            else if (s[i] == ')' && s_stack.top() == '(')
            {
                s_stack.pop();
            }
            else if (s[i] == '}' && s_stack.top() == '{')
            {
                s_stack.pop();
            }
            else if (s[i] == ']' && s_stack.top() == '[')
            {
                s_stack.pop();
            }
            else
            {
                cout << "Error" << endl;
                flag = 1;
            }
        }
    }
    catch (exception e)
    {
        cout << "Error" << endl;
        flag = 1;
    }
    if (flag == 0)
    {
        cout << "Balance Found!" << endl;
    }
}