#include <iostream>
using namespace std;
class Student
{
private:
    char name[20];
    int age;
    char gender[7];

public:
    void get()
    {
        cout << "Enter the name of the student" << endl;
        cin.getline(name, 20);
        cout << "Enter the gender" << endl;
        cin.getline(gender, 7);
        cout << "Enter the age" << endl;
        cin >> age;
    }
    void Display()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Gender : " << gender << endl;
    }
};

class Details : public Student
{
private:
    float h;
    float w;

public:
    void getDetails()
    {
        cin >> h;
        cin >> w;
    }

    void print()
    {
        Student::Display();

        cout << "Height : " << h << endl;
        cout << "Weight : " << w << endl;
    }
};

int main()
{
    Details obj;
    obj.get();
    obj.getDetails();
    obj.print();

    return 0;
}