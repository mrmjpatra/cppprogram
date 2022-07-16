#include <iostream>
using namespace std;
class A
{
private:
public:
    A()
    {
        cout << "Default constructor of A" << endl;
    }
    A(int a)
    {
        cout << "Parameterised constructor of A" << endl;
    }
};

class B
{

public:
    B()
    {
        cout << "Default constructor of B" << endl;
    }
    B(int a)
    {
        cout << "Parameterised constructor of B" << endl;
    }
    ~B()
    {
    }
};

class C : public A, public B
{

public:
    C()
    {
        cout << "Default constructor of C" << endl;
    }
    C(int a):B(a),A(a)
    {
        cout << "Parameterised constructor of C" << endl;
    }
    ~C();
};

C::~C()
{
}
int main()
{
    C obj(7);

    return 0;
}