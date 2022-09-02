#include<iostream>
using namespace std;
/* if n = 4
   1 
   2 1
   3 2 1
   4 3 2 1  */ 
int main(){
    int i = 1;
    int n;
    cin >> n;
    while(i <= n){
        int j = 1;
        // int value = i;
        while(j <= i){
            cout << i-j+1 << " ";
            j += 1;
            // value--;
        }
        cout << endl;
        i += 1;
    }
}
