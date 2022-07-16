#include <iostream>
using namespace std;
void Swap(int arr[], int first, int last)
{
    int temp = arr[first];
    arr[first] = arr[last];
    arr[last] = temp;
}
int Partition(int arr[], int lb, int ub)
{
    int pivot = arr[lb];
    int start = lb;
    int end = ub;

    while (start < end)
    {
        while (arr[start] <= pivot)
        {
            start++;
        }
        while (arr[end] > pivot)
        {
            end--;
        }
        if (start < end)
        {
            Swap(arr, start, end);
        }
    }
    Swap(arr, lb, end);
    return end;
}
void QuickSort(int arr[], int lb, int ub)
{
    int loc;
    if (lb < ub)
    {
        loc = Partition(arr, lb, ub);
    }
}
int main()
{
    int arr[] = {7, 6, 10, 5, 9, 2, 1, 15, 7};
    cout << "The array is :" << endl;
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }

    QuickSort(arr, 0, 9);

    cout << "The array in sorted order is" << endl;

    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}