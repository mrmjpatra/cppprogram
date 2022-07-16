#include <iostream>
using namespace std;
class LateBinding
{
private:
    int num;

public:
    virtual void accept()
    {
        cout << "Enter the number of the base class" << endl;
        cin >> num;
    }
    virtual void display()
    {
        cout << "Number is :" << num << endl;
    }
};

class Derived:public LateBinding
{
private:
    int num;

public:
    void accept()
    {
        cout << "Enter the number of the Derived class" << endl;
        cin >> num;
    }
    void display()
    {
        cout << "Number is :" << num << endl;
    }
};

int main()
{
    LateBinding *obj2,obj1;
    Derived obj3;

    obj2=&obj1;
    obj2->accept();
    obj2->display();

    obj2=&obj3;
    obj2->accept();
    obj2->display();

    return 0;
}