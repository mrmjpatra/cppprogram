#include <iostream>
using namespace std;
class ConstructorDestructor
{
private:
    int a;
public:
ConstructorDestructor(){
    a=100;
}
    ConstructorDestructor(int b);
    ConstructorDestructor(ConstructorDestructor &obj);
    ~ConstructorDestructor();
};

ConstructorDestructor::ConstructorDestructor(int b)
{
    a=b;
    cout<<"Object is "<<a<<endl;
}
ConstructorDestructor ::ConstructorDestructor(ConstructorDestructor &obj){
    a=obj.a;
}

ConstructorDestructor::~ConstructorDestructor()
{
    cout<<"Object is destroyed "<<a<<endl;
}

int main()
{
    // ConstructorDestructor A(7),B(9);
    // ConstructorDestructor C=B;
    ConstructorDestructor A;
    ConstructorDestructor B(9);
    ConstructorDestructor C(A);
    ConstructorDestructor D=B;

return 0;
}