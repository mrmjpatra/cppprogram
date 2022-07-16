// Write a C++ program that adds and substracts two matrices of order 3*2 using friend function
#include <iostream>
using namespace std;

class AddSubMatrix
{
private:
    int mat[3][2];

public:
    void get()
    {
        cout << "Enter the elements to the matrix" << endl;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> mat[i][j];
            }
        }
    }
    void print();
    friend void add(AddSubMatrix A, AddSubMatrix B);
    friend void sub(AddSubMatrix A, AddSubMatrix B);
};

void AddSubMatrix::print()
{
    cout << "The entered matrix is" << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

void add(AddSubMatrix A, AddSubMatrix B)
{
    AddSubMatrix C;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            C.mat[i][j] = A.mat[i][j] + B.mat[i][j];
        }
    }
    C.print();
}

int main()
{
    AddSubMatrix A, B;

    A.get();
    B.get();
    A.print();
    B.print();
    add(A,B);
    
    return 0;
}