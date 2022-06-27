#include <iostream>
using namespace std;
void reachHome(int src, int dest)
{
    cout << " Source " << src << " destination " << dest << endl;
    if (src == dest)
    {
        cout << " Reached " << endl;
        return;
    }
    src++;
    reachHome(src, dest);
}

int main()
{
    int src = 1;
    int dest = 10;

    cout << endl;
    reachHome(src, dest);
}