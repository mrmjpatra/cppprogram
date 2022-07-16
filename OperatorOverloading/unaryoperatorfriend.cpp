#include <iostream>
using namespace std;
class unaryoperatorfriend
{
private:
    int a;

public:
    void assign(int x)
    {
        a = x;
    }
    void show()
    {
        cout << "The value of a: " << a << endl;
    }
    friend void operator+(unaryoperatorfriend &A);
    friend void operator-(unaryoperatorfriend &A);
};
void operator +(unaryoperatorfriend &A)
{
    if (A.a < 0)
    {
        A.a = -A.a;
    }
}

int main()
{
    unaryoperatorfriend obj;
    obj.assign(-7);
    obj.show();
    +obj;
    obj.show();

    return 0;
}