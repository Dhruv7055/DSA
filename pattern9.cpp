#include<iostream>
using namespace std;
/* if n = 4
   1 
   2 3
   3 4 5
   4 5 6 7  */ 
int main(){
    int i = 1;
    int n;
    cin >> n;
    while(i <= n){
        int j = 1;
        // int value = i;
        while(j <= i){
            cout << i+j-1 << " ";   // we can do this by taking value variable too and increment this value variable
            j += 1;
            // value++;
        }
        cout << endl;
        i += 1;
    }
}