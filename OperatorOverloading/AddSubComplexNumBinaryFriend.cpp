#include <iostream>
using namespace std;
class AddSubComplexNumBinaryFriend
{
private:
    int real, img;

public:
    void Accept()
    {
        cout << "Enter the real part and imaginary part of the complext number" << endl;
        cin >> real >> img;
    }
    void print()
    {
        cout << "The complex number is" << real << "+" << img << "i" << endl;
    }
    friend AddSubComplexNumBinaryFriend operator+(AddSubComplexNumBinaryFriend A, AddSubComplexNumBinaryFriend B)
    {
        AddSubComplexNumBinaryFriend C;
        C.real = A.real + B.real;
        C.img = A.img + B.img;
        return C;
    }
};

int main()
{
    AddSubComplexNumBinaryFriend A, B, C;
    A.Accept();
    B.Accept();
    C = A + B;
    C.print();

    return 0;
}