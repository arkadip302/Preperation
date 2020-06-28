#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int x;
    srand(time(0));
    int t = 5;
    int num = rand() % 100 + 1;
    int up_range = 100, down_range = 1;
    cout << num << "ans" << endl;
    int i = 1;
    while (t >= i)
    {
        cout << "Thought of a number between 1 and 100! Try to guess it" << endl;
        cout << "Range: [" << down_range << "," << up_range << "],Number of guesses left: " << t - i + 1 << endl;
        cout << "User Input ";
        cin >> x;
        if (num > x)
        {
            cout << "Wrong! My number is bigger" << endl
                 << endl;
            down_range = x + 1;
        }
        else if (num < x)
        {
            cout << "Wrong! My number is smaller" << endl
                 << endl;
            up_range = x - 1;
        }
        else
        {
            cout << "Congrats!You guessed my number in " << i << " guesses" << endl;
            return 0;
        }
        i++;
    }
    cout << "Out of guesses!My number is " << num;
}