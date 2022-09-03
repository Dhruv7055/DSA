#include<iostream>
using namespace std;
/* if n = 4
   A B C D
   E F G H 
   I J K L 
   M N O P    */
int main(){
    int i = 1;
    int n;
    char ch = 'A';
    cin >> n;
    while(i <= n){
        int j = 1;
        while(j <= n){
            cout << ch << " ";
            ch++;   
            j += 1;
        }
        cout << endl;
        i += 1;
    }
}