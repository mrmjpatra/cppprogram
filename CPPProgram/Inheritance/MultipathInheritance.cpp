#include <iostream>
using namespace std;
class Student
{
protected:
    char name[20];
    char branch[10];
    int roll;

public:
    void get()
    {
        cout << "Enter the name of student" << endl;
        cin.getline(name, 20);
        cout << "Enter the branch" << endl;
        cin >> branch;
        cout << "Enter the roll number " << endl;
        cin >> roll;
    }
};

class Internal : virtual public Student
{
protected:
    int imark;

public:
    void get()
    {

        cout << "Enter the internal mark" << endl;
        cin >> imark;
    }
};

class External:virtual public Student
{
protected:
    int emark;
public:
    void get(){
        cout<<"Enter the external mark"<<endl;
        cin>>emark;
    }
};

class Result:public Internal,public External
{
private:
    int total;
public:
    void get(){
        Student::get();
        Internal::get();
        External::get();
    }
    void print(){
        total=imark+emark;
        cout << "Name : " << name << endl;
        cout << "Branch :" << branch << endl;
        cout << "Roll number : " << roll << endl;
        cout<<"Mark is :"<<total<<endl;
    }
   
};



int main()
{
    Result obj;
    obj.get();
    obj.print();

    return 0;
}