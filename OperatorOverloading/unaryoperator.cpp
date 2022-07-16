#include<iostream>
using namespace std;
class unaryoperator
{
private:
    int a;
public:
   void assign(int x){
    a=x;
   }
   void show(){
    cout<<"Number is = "<<a<<endl;
   }
   void operator ++(){
    ++a;
   }
   void operator ++(int){
    a++;
   }
   void operator --(){
    --a;
   }
   void operator -- (int){
    a--;
   }
};



int main() {
    unaryoperator obj1,obj2;

    obj1.assign(8);
    obj1.show();
    ++obj1;
    obj1.show();
    obj1++;
    obj1.show();
    cout<<"Obj2"<<endl;
    obj2.assign(20);
    obj2.show();
    --obj2;
    obj2.show();
    obj2--;
    obj2.show();
    return 0;
}