#include <bits/stdc++.h>
using namespace std;
class A
{
public:
    A() { cout << "a"; }
};
class B : public A
{
public:
    B() { cout << "b"; }
};
class C : public B
{
public:
    C() { cout << "C"; }
};

int main()
{
    C obj;
}