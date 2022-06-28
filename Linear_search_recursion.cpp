#include <iostream>
using namespace std;

void print(int *arr, int size)
{
    cout << "Size of array is" << size << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool linearSearch(int *arr, int size, int key)
{
    print(arr, size);
    if (size == 0)
    {
        return false;
    }
    if (arr[0] == key)
    {
        return true;
    }
    else
    {
        bool remainingPart = linearSearch(arr + 1, size - 1, key);
    }
}

int main()
{
    int arr[5] = {1, 32, 3, 6, 5};
    int size = 5;
    int key = 5;
    int ans = linearSearch(arr, size, key);

    if (ans)
    {
        cout << "Key is found" << endl;
    }
    else
    {
        cout << "Key is not found" << endl;
    }
    return 0;
}