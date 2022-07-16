#include <iostream>
using namespace std;
class Calculation
{
private:
    int num;

public:
    void get(int n)
    {
        num = n;
    }
    void show()
    {
        cout << num<<endl;
    }

    Calculation operator+(Calculation A)
    {
        Calculation C;
        C.num = A.num + num;
        return C;
    }
    Calculation operator-(Calculation A)
    {
        Calculation C;
        C.num = num - A.num;
        return C;
    }
    Calculation operator *(Calculation A)
    {
        Calculation C;
        C.num = num * A.num;
        return C;
    }
    Calculation operator /(Calculation A)
    {
        Calculation C;
        C.num = num / A.num;
        return C;
    }
};

int main()
{
    Calculation A, B, C;
    A.get(10);
    B.get(20);
    C = A + B;
    C.show();
    C = A - B;
    C.show();
    C = A * B;
    C.show();
    C = A / B;
    C.show();

    return 0;
}