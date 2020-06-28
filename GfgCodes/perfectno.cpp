#include <iostream>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int sum = 1;
        for (long long int i = 2; i*i <= (n); i++)
        {
            if (n % i == 0)
            {
                if(i*i!=n){
                    sum += i+n/i;
                }
                else{
                    sum+=i;
                }
            }
        }
        if (sum == n)
        {
            cout << 1 << endl;
        }
        else{
            cout<<0<<endl;
        }
    }
}