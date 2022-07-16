#include <iostream>
using namespace std;
class MatrixAddSub
{
private:
    int **mat;
    int row, col;

public:
    void CreateMatrix(int r, int c)
    {
        row = r;
        col = c;
        mat = new int *[row];
        for (int i = 0; i < row; i++)
        {
            mat[i] = new int[col];
        }
    }
    void input()
    {
        cout << "Enter the elements" << endl;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cin >> mat[i][j];
            }
        }
    }
    void print()
    {
        cout << "Matrix is: " << endl;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }

    MatrixAddSub operator+(MatrixAddSub B)
    {
        MatrixAddSub C;
        C.CreateMatrix(row, col);
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                C.mat[i][j] = mat[i][j] + B.mat[i][j];
            }
        }
        return C;
    }
};

int main()
{
    int r1, r2, c1, c2;
    cout << "Enter the row and column of matrix-A" << endl;
    cin >> r1 >> c1;
    cout << "Enter the row and column of matrix-B" << endl;
    cin >> r2 >> c2;
    if (r1 != r2 && c1 != c2)
    {
        cout << "You can't performed the addition and substraction" << endl;
    }
    else
    {
        MatrixAddSub A,B,C;
        A.CreateMatrix(r1,c1);
        B.CreateMatrix(r2,c2);
        A.input();
        B.input();
        C=A+B;
        A.print();
        B.print();
        C.print();
    }

    return 0;
}