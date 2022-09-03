#include<iostream>
using namespace std;
/* if n = 4
   A B C D
   A B C D
   A B C D
   A B C D    */
int main(){
    int i = 1;
    int n;
    cin >> n;
    while(i <= n){
        int j = 1;
        while(j <= n){
            char ch = 'A' + j - 1;
            cout << ch << " ";   
            j += 1;
        }
        cout << endl;
        i += 1;
    }
}