#include <iostream>
using namespace std;

bool binarySearch(int arr[], int s, int e, int key)
{
    if (s > e)
        return false; // we can  return false or -1
    if (key == arr[0])
        return true;

    int mid = s + (e - s) / 2;

    if (arr[mid] == key)
        return mid;

    if (arr[mid] < key)
    {
        return binarySearch(arr, mid + 1, e, key);
    }
    else
    {
        return binarySearch(arr, s, mid - 1, key);
    }
}

int main()
{
    int arr[6] = {2, 4, 62, 4, 94, 98};
    int size = 6;
    int key = 2;

    cout << "Present or not " << binarySearch(arr, 0, size - 1, key) << endl;

    return 0;
}