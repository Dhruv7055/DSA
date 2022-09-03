#include<iostream>
using namespace std;
/* if n = 4
   A
   B C
   C D E
   D E F G    */
int main(){
    int i = 1;
    int n;
    cin >> n;
    while(i <= n){
        int j = 1;
        while(j <= i){
            char ch = 'A' + i + j - 2;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}