#include <iostream>
using namespace std;
class Person
{
protected:
    char name[20];
    char gender[10];
    int age;

public:
    void get()
    {
        cout << "Enter name" << endl;
        cin >> name;
        cout << "Enter Gender" << endl;
        cin >> gender;
        cout << "Enter age" << endl;
        cin >> age;
    }
};

class sports : virtual public Person
{
protected:
    char sname[20];
    int wt;

public:
    void get()
    {
        cout << "Enter the sports name" << endl;
        cin >> sname;
        cout << "Enter the weightage of the sports";
        cin >> wt;
    }
};

class Student : virtual public Person
{
protected:
    char branch[10];
    int roll;

public:
    void get()
    {
        cout << "Enter the branch name" << endl;
        cin >> branch;
        cout << "Enter the roll number" << endl;
        cin >> roll;
    }
};

class Exam : public Student
{
protected:
    int imark, emark;

public:
    void get()
    {
        cout << "Enter the internal mark" << endl;
        cin >> imark;
        cout << "Enter the externak mark" << endl;
        cin >> emark;
    }
};
class Result : public Exam, public sports
{
protected:
    int total;

public:
    void get()
    {
        Person::get();
        Exam::get();
        sports::get();
    }
    void print()
    {
        cout << "Name : " << name << endl;
        cout << "Branch : " << branch << endl;
        cout << "Age : " << age << endl;
        cout<<"Sports name :"<<sname<<endl;

    }
};

int main()
{
    Result obj;
    obj.get();
    obj.print();

    return 0;
}










