#include <iostream>
using namespace std;
class Vechile
{
private:
    char name[20];
    int wheel;

public:
    void get()
    {
        cout << "Enter the vechile name" << endl;
        cin.getline(name, 20);
        cout << "Enter the number of wheels" << endl;
        cin >> wheel;
    }
    void print()
    {
        cout << "Vechile name : " << name << endl;
        cout << "Number of wheels : " << wheel << endl;
    }
};
class Speed : Vechile
{
private:
    int speed;

public:
    void get()
    {
        Vechile::get();
        cout << "Enter the speed" << endl;
        cin >> speed;
    }
    void print()
    {
        Vechile::print();
        ;
        cout << "Speed : " << speed;
    }
};

class Weight : Vechile
{
private:
    int weight;

public:
    void get()
    {
        Vechile::get();
        cout << "Enter weight of the vechile" << endl;
        cin >> weight;
    }
    void print()
    {
        Vechile::print();
        cout << "Weight : " << weight << endl;
    }
};

int main()
{
    Weight obj;
    obj.get();
    obj.print();
    return 0;
}