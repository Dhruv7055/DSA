#include<iostream>
using namespace std;
/* if n = 4
   A A A A
   B B B B
   C C C C
   D D D D   */
int main(){
    int i = 1;
    int n;
    cin >> n;
    while(i <= n){
        int j = 1;
        while(j <= n){
            char ch = 'A' + i - 1;
            cout << ch << " ";   
            j += 1;
        }
        cout << endl;
        i += 1;
    }
}