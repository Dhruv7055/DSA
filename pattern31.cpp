#include <iostream>
using namespace std;
/* if n = 4
        1
       121
      12321
     1234321     */    
int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        //Printing spaces
        int space = n - i;
        while (space)
        {
            cout << " ";
            space--;
        }
        //Printing 1st triangle
        int j = 1;
        while (j <= i)
        {
            cout << j;
            j++;
        }
        //Printing 3rd traaingle
        int start = i - 1;
        while(start){
            cout << start;
            start--;
        }
        cout << endl;
        i++;
    }
}