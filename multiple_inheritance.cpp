#include <iostream>
using namespace std;

class A
{
public:
    void Afunc()
    {
        cout << "function A\n";
    }
};
class B
{
public:
    void Bfunc()
    {
        cout << "function B\n";
    }
};
class C : public A, public B
{
public:
};

int main()
{
    C c;
    c.Afunc();
    c.Bfunc();
}