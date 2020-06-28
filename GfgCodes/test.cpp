#include <bits/stdc++.h>
using namespace std;

// Function Prototype
int countChars(string, string);

// Driver code to test columnWithMaxZeros function
int main()
{

    int testcase;

    cin >> testcase;

    while (testcase--)
    {

        // taking string input
        string s1, s2;
        cin >> s1 >> s2;

        cout << countChars(s1, s2) << endl;
    }

    return 0;
}
int countChars(string s1, string s2)
{
    int count[26];
    for (int i = 0; i < 26; i++)
    {
        count[i] = 0;
    }
    for (int i = 0; i < s1.size(); i++)
    {
        count[s1[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        cout << count[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < s2.size(); i++)
    {
        count[s2[i] - 'a']--;
    }
    cout << endl;
    int counts = 0;
    for (int i = 0; i < 26; i++)
    {
        counts += abs(count[i]);
    }
    for (int i = 0; i < 26; i++)
    {
        cout << count[i] << " ";
    }
    return counts;
}