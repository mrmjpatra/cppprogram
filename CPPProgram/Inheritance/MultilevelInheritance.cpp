#include <iostream>
using namespace std;
class Person
{
private:
    char name[20];
    int age;
public:
    void get(){
        cout<<"Enter the name of the person"<<endl;
        cin.getline(name,20);
        cout<<"Enter the age "<<endl;
        cin>>age;
    }
    void print(){
        cout<<"Name of the person : "<<name;
        cout<<"Age :"<<age;
    }
    
};
class Student:public Person
{
private:
    char branch[10];
    int roll;
public:
    void get(){
        Person::get();
        cout<<"Enter the branch"<<endl;
        cin>>branch;
        cout<<"Enter the roll number"<<endl;
        cin>>roll;
    }
    void print(){
        Person::print();
        cout<<"Branch : "<<branch<<endl;
        cout<<"Roll no: "<<roll<<endl;
    }
   
};

class Exam:Student
{
private:
    int m1,m2;
public:
    void get(){
        Student::get();
        cout<<"Enter the marks"<<endl;
        cin>>m1>>m2;
    }
    void print(){
        Student::print();
        cout<<"Mark "<<m1<<"and"<<m2<<endl;
    }
   
};





int main()
{
    Exam obj;
    obj.get();
    obj.print();

return 0;
}