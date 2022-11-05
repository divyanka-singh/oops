#include <iostream>
using namespace std;

class student
{
public:
    void fun()
    {
        cout << "function with no argument" << endl;
    }
    void fun(int x)
    {
        cout << "function with int argument" << endl;
    }
    void fun(double x)
    {
        cout << "function wiht double argument" << endl;
    }
};

int main()
{

    student obj;
    obj.fun();
    obj.fun(4);
    obj.fun(2.4);
    return 0;
}