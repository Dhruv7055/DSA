#include<iostream>
using namespace std;
/* if n = 4
   A B C D
   B C D E
   C D E F
   D E F G   */
int main(){
    int i = 1;
    int n;
    cin >> n;
    while(i <= n){
        int j = 1;
        while(j <= n){
            char ch = 'A' + i + j - 2;  // alternate i + j - 1 + 'A' - 1 => 'A' + i + j - 2
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}