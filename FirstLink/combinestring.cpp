#include <bits/stdc++.h>
using namespace std;
string combine(string s1, string s2)
{
}
int main()
{
    string s1, s2, s3;
    getline(cin, s1);
    getline(cin, s2);
    getline(cin, s3);
    int i = 0, j = 0;
    if ((s1.length() + s2.length()) == s3.length())
    {
        for (int z = 0; z < s3.length(); z++)
        {
            cout << s1[i] << " " << s2[j] << " " << s3[z] << endl;
            if (s1[i] == s3[z])
            {
                i++;
            }
            else if (s2[j] == s3[z])
            {
                j++;
            }
            else
            {
                cout << "Not able to combine";
                cout << endl;
                break;
            }
        }
    }
    else
    {
        cout << "Not able to combine" << endl;
    }
}