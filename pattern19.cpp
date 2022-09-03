#include<iostream>
using namespace std;
/* if n = 4
   D
   C D
   B C D
   A B C D   */ 
int main(){
    int i = 1;
    int n; 
    cin >> n;
    while(i <= n){
        int j = 1;
        char ch = 'A' + n - i;
        while(j <= i){
            cout << ch << " ";
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }
}