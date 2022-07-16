#include <iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int key)
{
    int mid;
    while (start <= end)
    {
        mid = (start + (end - start)) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
       
    }
     return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int pos = binarySearch(arr, 0, 9, 9);
    cout << pos << endl;
    return 0;
}