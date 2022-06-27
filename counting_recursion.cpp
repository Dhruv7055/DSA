#include <iostream>
using namespace std;

void print(int n)
{
    // base case
    if (n == 0)
    {
        return;
    }

    /* Tail Recursion
    cout << n << " ";
    print(n - 1); */

    // Head Recursion
    print(n - 1);
    cout << n << " ";
}

int main()
{
    int n;
    cin >> n;

    print(n);
}