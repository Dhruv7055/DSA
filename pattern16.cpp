#include<iostream>
using namespace std;
/* if n = 4
   A
   A B 
   A B C
   A B C D    */
int main(){
    int i = 1;
    int n;
    cin >> n;
    while(i <= n){
        int j = 1;
        while(j <= i){
            char ch = 'A' + j - 1;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}