#include<iostream>
using namespace std;
/* if n = 4
   A
   B C
   D E F
   G H I J    */
int main(){
    int i = 1;
    char ch = 'A';
    int n;
    cin >> n;
    while(i <= n){
        int j = 1;
        while(j <= i){
            cout << ch << " ";
            j++;
            ch++;
        }
        cout << endl;
        i++;
    }
}