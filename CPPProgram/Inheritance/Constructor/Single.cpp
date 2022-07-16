#include <iostream>
using namespace std;

class Base
{

public:
    Base()
    {
        cout << "Base class constructor" << endl;
    }
    Base(int b)
    {
        cout << "Parameterised constructor base class" << endl;
    }
};
class Derived : public Base
{
public:
    Derived(int a):Base(a)
    {
        cout << "Parameterised constructor" << endl;
    }
};

int main()
{
    Derived obj(7);

    return 0;
}