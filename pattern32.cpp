#include<iostream>
using namespace std;
// DABBANG PATTERN
/*   if n=5
    1234554321
    1234**4321
    123****321
    12******21
    1********1      */
int main(){
    int i = 1;
    int n;
    cin >> n;
    while(i <= n){
        //Printing 1st triangle
        int j = 1;
        while(j <= n-i+1){
            cout << j;
            j++;
        }
        //Printing 2nd traingle
        int start = i - 1;
        while(start){
            cout << "*";
            start--;
        }
        //Printing 3rd triangle
        int end = i - 1;
        while(end){
            cout << "*";
            end--;
        }
        //Printing 4rth triangle
        int p = n;
        while(p >= i){
            int value = p-i+1;
            cout << value;
            value--;
            p--;
        }
        cout << endl;
        i++;
    }
}