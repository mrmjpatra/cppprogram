#include <iostream>
using namespace std;
class Student
{
private:
    char name[20];
    int roll;

public:
    void get()
    {
        cout << "Enter the name of the student " << endl;
        cin.getline(name, 20);
        cout << "Enter the roll number" << endl;
        cin >> roll;
    }
    void print()
    {
        cout << "Name is: " << name << endl;
        cout << "Rool No :" << roll << endl;
    }
};

class Course
{
private:
    char cn[10];
    int rank;

public:
    void get()
    {
        cout << "Enter course name" << endl;
        cin>>cn;
        cout << "Enter rank" << endl;
        cin >> rank;
    }
    void print()
    {
        cout << "Course : " << cn<<endl;
        cout << "Rank  : " << rank<<endl;
    }
};

class Fees : public Student, public Course
{
private:
    float fees;

public:
    void get()
    {
        Student::
            get();
        Course::
            get();
        cout<<"Enter the fees"<<endl;
        cin >> fees;
    }

    void print()
    {
        Student::
            print();
        Course::
            print();
        cout << "Fees :" << fees << endl;
    }
};

int main()
{
    Fees obj;
    obj.get();
    obj.print();

    return 0;
}