#include <iostream>
using namespace std;

int main()
{
    float rad;
    const float pi = 3.1415926;
    cout << "Enter the radius of circle" << endl;
    cin >> rad;
    cout << "Diameter =" << rad * 2 << endl;
    cout << "Circumference =" << rad * 2 * pi << endl;
    cout << "Area =" << pi * rad * rad << endl;
    float vol = 4.0 * pi * rad * rad * rad;
    vol = vol / 3;
    cout << "Volume =" << vol << endl;
}