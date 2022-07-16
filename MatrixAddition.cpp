#include <iostream>
using namespace std;
class MatrixAddition
{
private:
    int *arr;

public:
    void Assign(int *a)
    {
        arr = a;
        for (int i = 0; i < 6; i++)
        {
            cin >> arr[i];
        }
    }
    void print()
    {
        cout << "The array is" << endl;
        for (int i = 0; i < 6; i++)
        {
            cout << arr[i] << " ";
        }
    }

    MatrixAddition Add(MatrixAddition A)
    {
        MatrixAddition C;
        for (int i = 0; i < 6; i++)
        {
            C.arr[i] = A.arr[i] + arr[i];
        }
        return C;
    }
};

int main()
{
    // int arr1[]={1,2,3,4,5,6};
    // int arr2[]={5,6,7,8,8,9};
    int *arr1 = new int[6];
    int *arr2 = new int[6];

    MatrixAddition A, B, C;
    A.Assign(arr1);
    A.print();
    cout<<endl;

    return 0;
}