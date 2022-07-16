#include <iostream>
using namespace std;
class A
{

public:
    A()
    {
        cout << "Default constructor of A is Called" << endl;
    }
    A(int a)
    {
        cout << "Parameterised constructor of A is Called" << endl;
    }
    ~A()
    {
        cout<<"Destructor of class A"<<endl;
    }
};
class B : public A
{
public:
    B()
    {
        cout << "Default constructor of B is Called" << endl;
    }
    B(int a):A(a)
    {
        cout << "Parameterised constructor of B is Called" << endl;
    }
    ~B(){
        cout << "Destructor of class B" << endl;
    }
};

class C:public B{
    public:
    C(){
        cout << "Default constructor of C is Called" << endl;
    }
    C(int a):B(a){
        cout << "Parameterised constructor of C is Called" << endl;
    }
    ~C()
    {
        cout << "Destructor of class C" << endl;
    }
};

int main()
{
    C obj(7);

    return 0;
}