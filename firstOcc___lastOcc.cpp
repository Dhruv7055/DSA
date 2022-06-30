#include <iostream>
using namespace std;
int firstOcc(int arr[], int n, int key)
{

    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {

        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid])
        { // Right me jao
            s = mid + 1;
        }
        else if (key < arr[mid])
        { // left me jao
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}

int lastOcc(int arr[], int n, int key)
{

    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {

        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid])
        { // Right me jao
            s = mid + 1;
        }
        else if (key < arr[mid])
        { // left me jao
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int even[10] = {2, 4, 6, 6, 6, 6, 6, 6, 10, 78};
    int first = firstOcc(even, 10, 6);
    int last = lastOcc(even, 10, 6);

    cout << "First Occurrence of 6 is at index " << first << endl;
    cout << "Last Occurrence of 6 is at index " << last << endl;

    int total_no_occ = (last - first) + 1;
    cout << "Total number of occurrences in an array is " << total_no_occ << endl;

    return 0;
}
