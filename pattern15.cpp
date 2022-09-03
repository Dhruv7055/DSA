#include<iostream>
using namespace std;
/* if n = 4
   A
   B B 
   C C C
   D D D D   */
int main(){
    int i = 1;
    int n;
    cin >> n;
    while(i <= n){
        int j = 1;
        while(j <= i){
            char ch = 'A' + i - 1;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}