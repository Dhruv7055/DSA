#include<iostream>
using namespace std;
/* if n = 3
   1
   2 2
   3 3 3   */
int main(){
    int i = 1;
    int n;
    cin >> n;
    while(i <= n){
        int j = 1;
        while(j <= i){
            cout << i << " ";
            j += 1;
        }
        cout << endl;
        i += 1;
    }
}