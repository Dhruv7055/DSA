#include<iostream>
using namespace std;
/* if n = 3
   1 
   2 3
   4 5 6   */ 
int main(){
    int i = 1;
    int count = 1;
    int n;
    cin >> n;
    while(i <= n){
        int j = 1;
        while(j <= i){
            cout << count << " ";
            j += 1;
            count ++;
        }
        cout << endl;
        i += 1;
    }
}