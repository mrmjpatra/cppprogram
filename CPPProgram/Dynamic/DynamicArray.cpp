#include<iostream>
#include<string.h>
using namespace std;
class DynamicArray
{
private:
    char name[20];
    int id;
public:
    void input(char *n,int i){
        strcpy(name,n);
        id=i;
    }
    void print(){
        cout<<"Name : "<<name<<endl;
        cout<<"Id is: "<<id<<endl;
    }
};



int main() {
    DynamicArray *obj=new DynamicArray;
    obj->input("Smily",10);
    obj->print();

return 0;
}