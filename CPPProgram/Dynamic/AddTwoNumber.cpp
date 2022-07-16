#include<iostream>
using namespace std;
class Sum{
    private:
    float a,b;
    public:
    virtual void read(){
        cout<<"Enter two number"<<endl;
        cin>>a>>b;
    }
    virtual void calculate(){
        cout<<"Addition of two number is "<<a+b<<endl;
    }
};
class Product:public Sum{
    private:
    float a,b;
    public:
    void read(){
        cout<<"Enter the two number"<<endl;
        cin>>a>>b;
    }
    void calculate(){
        cout<<"Multiplication is "<<a*b<<endl;
    }
};
int main() {
Sum *obj,obj1;
Product obj2;
obj=&obj1;
obj->read();
obj->calculate();
obj=&obj2;
obj->read();
obj->calculate();
return 0;
}