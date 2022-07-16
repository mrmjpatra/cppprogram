#include <iostream>
using namespace std;
class Student
{
private:
   char name[20];
   char gender[7];
   int age;
public:
    void get(){
        cout<<"Enter the name of the student"<<endl;
        cin.getline(name,20);
        cout<<"Enter the gender of the student"<<endl;
        cin.getline(gender,7);
        cout<<"Enter the age of the student"<<endl;
        cin>>age;
    }
    void print(){
        cout<<"Name : "<<name<<endl;
        cout<<"Gender : "<<gender<<endl;
        cout<<"Age : "<<age<<endl;
    }
    
};

class Details:public Student
{
private:
    float w,h;
public:
    void getD(){
        Student:get();
        cout<<"Enter the weight"<<endl;
        cin>>w;
        cout<<"Enter the height"<<endl;
        cin>>h;
    }
    void printD(){
        Student:print();
        cout<<"Weight : "<<w<<endl;
        cout<<"Height : "<<h<<endl;

    }
};






using namespace std;
int main()
{
    Details obj;
    obj.getD();
    obj.printD();
   

return 0;
}